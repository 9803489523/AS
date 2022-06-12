#pragma once

using namespace System;
using namespace MySql::Data::MySqlClient;

ref class MySqlInterface
{
public:

	MySqlConnection ^ mysqlConn;
	MySqlCommand ^ cmd;

	MySqlInterface();
	void Connect()
	{
		System::String ^ conn = Configuration::ConfigurationManager::AppSettings["ConnectionString"];
		mysqlConn = gcnew MySqlConnection(conn);
	}

	MySqlDataReader ^ MakeQuery(System::String ^ query)
	{
		MySqlDataReader ^ dr;
		Connect();
		mysqlConn->Open();
		cmd = gcnew MySqlCommand(query, mysqlConn);
		dr = cmd->ExecuteReader();
		return dr;
	}

	int AddUpdateBranch(int id, System::String ^ name)
	{
		if (id > 0)
		{
			MySqlDataReader ^ dbReader = MakeQuery(L"UPDATE branches SET BranchName='" + name + "' WHERE Id=" + id);
			mysqlConn->Close();
			return id;
		}
		else
		{
			MySqlDataReader ^ dbReader = MakeQuery(L"INSERT INTO branches (BranchName) VALUES ('" + name + "')");
			id = cmd->LastInsertedId;
			mysqlConn->Close();
			return id;
		}
	}

	System::Data::DataTable ^ GetAllBranchesResults()
	{
		System::Data::DataTable ^ dt = gcnew System::Data::DataTable;
		MySqlDataReader ^ results;
		results = MakeQuery(L"SELECT Id, BranchName FROM branches");
		dt->Load(results);
		mysqlConn->Close();
		return dt;
	}

	System::Void DeleteBranch(int id)
	{
		MakeQuery(L"DELETE FROM branches WHERE Id=" + id);
		mysqlConn->Close();
	}

	int AddUpdateItem(int id, System::String ^ name)
	{
		if (id > 0)
		{
			MySqlDataReader ^ dbReader = MakeQuery(L"UPDATE items SET ItemName='" + name + "' WHERE Id=" + id);
			mysqlConn->Close();
			return id;
		}
		else
		{
			MySqlDataReader ^ dbReader = MakeQuery(L"INSERT INTO items (ItemName) VALUES ('" + name + "')");
			id = cmd->LastInsertedId;
			mysqlConn->Close();
			return id;
		}
	}

	System::Data::DataTable ^ GetAllItemsResults()
	{
		System::Data::DataTable ^ dt = gcnew System::Data::DataTable;
		MySqlDataReader ^ results;
		results = MakeQuery(L"SELECT Id, ItemName FROM items");
		dt->Load(results);
		mysqlConn->Close();
		return dt;
	}

	System::Void DeleteItem(int id)
	{
		MakeQuery(L"DELETE FROM items WHERE Id=" + id);
		mysqlConn->Close();
	}

	int AddUpdateExpence(int id, System::String ^ name, System::Boolean ^ isIncome, double plan)
	{
		if (id > 0)
		{
			MySqlDataReader ^ dbReader = MakeQuery(L"UPDATE articles SET ArticleName='" + name + "', isIncome=" + (*isIncome ? 1 : 0) + ", Plan=" + plan + " WHERE Id=" + id);
			mysqlConn->Close();
			return id;
		}
		else
		{
			MySqlDataReader ^ dbReader = MakeQuery(L"INSERT INTO articles (ArticleName, isIncome, Plan) VALUES ('" + name + "', " + (*isIncome ? 1 : 0) + ", " + plan + ")");
			id = cmd->LastInsertedId;
			mysqlConn->Close();
			return id;
		}
	}

	System::Data::DataTable ^ GetAllExpencesResults()
	{
		System::Data::DataTable ^ dt = gcnew System::Data::DataTable;
		MySqlDataReader ^ results;
		results = MakeQuery(L"SELECT Id, ArticleName, isIncome, Plan FROM articles");
		dt->Load(results);
		mysqlConn->Close();
		return dt;
	}

	System::Void DeleteExpence(int id)
	{
		MakeQuery(L"DELETE FROM articles WHERE Id=" + id);
		mysqlConn->Close();
	}

	int AddUpdateÑlient(int id, System::String ^ name)
	{
		if (id > 0)
		{
			MySqlDataReader ^ dbReader = MakeQuery(L"UPDATE clients SET ClientName='" + name + "' WHERE Id=" + id);
			mysqlConn->Close();
			return id;
		}
		else
		{
			MySqlDataReader ^ dbReader = MakeQuery(L"INSERT INTO clients (ClientName) VALUES ('" + name + "')");
			id = cmd->LastInsertedId;
			mysqlConn->Close();
			return id;
		}
	}

	System::Data::DataTable ^ GetAllClientsResults()
	{
		System::Data::DataTable ^ dt = gcnew System::Data::DataTable;
		MySqlDataReader ^ results;
		results = MakeQuery(L"SELECT Id, ClientName FROM clients");
		dt->Load(results);
		mysqlConn->Close();
		return dt;
	}

	System::Void DeleteClient(int id)
	{
		MakeQuery(L"DELETE FROM clients WHERE Id=" + id);
		mysqlConn->Close();
	}
	

	int AddUpdateSale(int id, int branchId, int clientId, System::DateTime ^ date, System::Windows::Forms::DataGridViewRowCollection ^ rows)
	{
		System::String ^ query = "";
			if (id > 0)
			{
				MySqlDataReader ^ dbReader = MakeQuery(L"UPDATE sales SET BranchId=" + branchId + ", ClientId=" + clientId + ", DateSale='" + date->ToString("yyyy-MM-dd") + "' WHERE Id=" + id);
				mysqlConn->Close();
			}
			else
			{
				MySqlDataReader ^ dbReader = MakeQuery(L"INSERT INTO sales (BranchId, ClientId, DateSale, Status) VALUES (" + branchId + ", " + clientId + ", '" + date->ToString("yyyy-MM-dd") + "', " + 0 + ");");
				id = cmd->LastInsertedId;
				mysqlConn->Close();
			}
			for (int i = 0; i < rows->Count; i++)
			{
				query += "INSERT INTO saleitems (SaleId, StockId, Qty) VALUES(" + id + ", " + int::Parse(rows[i]->Cells["Id"]->Value->ToString()) + ", " + rows[i]->Cells["Qty"]->Value + ");" +
					"UPDATE stock SET Qty=(Qty-" + rows[i]->Cells["Qty"]->Value + ") WHERE Id=" + int::Parse(rows[i]->Cells["Id"]->Value->ToString()) + ";";
			}
			MySqlDataReader ^ dbReader2 = MakeQuery(query);
			mysqlConn->Close();
			return id;

		}

	System::Data::DataTable ^ GetAllSalesResults()
	{
		System::Data::DataTable ^ dt = gcnew System::Data::DataTable;
		MySqlDataReader ^ results;
		results = MakeQuery(L"SELECT sales.Id, branches.BranchName, clients.ClientName, sales.DateSale, sales.Status FROM sales INNER JOIN branches ON branches.Id=sales.BranchId INNER JOIN clients ON clients.Id=sales.ClientId");
		dt->Load(results);
		mysqlConn->Close();
		return dt;
	}

	System::Data::DataTable ^ GetAllSalesResults(int branchId, int clientId, System::DateTime ^ dateFrom, System::DateTime ^ dateTo)
	{
		System::Data::DataTable ^ dt = gcnew System::Data::DataTable;
		MySqlDataReader ^ results;
		results = MakeQuery(L"SELECT sales.Id, branches.BranchName, clients.ClientName, sales.DateSale, sales.Status FROM sales INNER JOIN branches ON branches.Id=sales.BranchId INNER JOIN clients ON clients.Id=sales.ClientId " + 
			"WHERE sales.BranchId=" + branchId + " AND sales.ClientId=" + clientId + " AND sales.DateSale>='" + dateFrom->ToString("yyyy-MM-dd") + "' AND sales.DateSale<='" + dateTo->ToString("yyyy-MM-dd") + "'");
		dt->Load(results);
		mysqlConn->Close();
		return dt;
	}

	System::Data::DataTable ^ GetAllSaleItemsResults(int id)
	{
		System::Data::DataTable ^ dt = gcnew System::Data::DataTable;
		MySqlDataReader ^ results;
		results = MakeQuery(L"SELECT branches.BranchName, items.ItemName, stock.Cost, saleitems.Qty, saleitems.Id FROM saleitems INNER JOIN branches ON branches.Id=(SELECT BranchId FROM stock WHERE stock.Id=saleitems.StockId) INNER JOIN items ON items.Id=(SELECT ItemId FROM stock WHERE stock.Id=saleitems.StockId) INNER JOIN stock ON stock.Id=saleitems.StockId WHERE saleitems.SaleId=" + id);
		dt->Load(results);
		mysqlConn->Close();
		return dt;
	}

	System::Void DeleteSale(int id)
	{
		MakeQuery(L"DELETE FROM saleitems WHERE SaleId=" + id + "; DELETE FROM sales WHERE Id=" + id + ";");
		mysqlConn->Close();
	}

	int AddUpdateStock(int id, int branchId, int itemId, double price, int plan)
	{
		if (id > 0)
		{
			MySqlDataReader ^ dbReader = MakeQuery(L"UPDATE stock SET BranchId=" + branchId + ", ItemId=" + itemId + ", Qty=Qty+(" + plan + "-Qty), Cost=" + price + ", Plan=" + plan + " WHERE Id=" + id);
			mysqlConn->Close();
			return id;
		}
		else
		{
			MySqlDataReader ^ dbReader = MakeQuery(L"INSERT INTO stock (BranchId, ItemId, Qty, Cost, Plan) VALUES (" + branchId + ", " + itemId + ", " + plan + ", " + price + ", " + plan + ")");
			id = cmd->LastInsertedId;
			mysqlConn->Close();
			return id;
		}
	}

	System::Data::DataTable ^ GetAllStockResults()
	{
		System::Data::DataTable ^ dt = gcnew System::Data::DataTable;
		MySqlDataReader ^ results;
		results = MakeQuery(L"SELECT stock.Id, items.ItemName, branches.BranchName, stock.Qty, stock.Cost, stock.Plan FROM stock INNER JOIN branches ON branches.Id=stock.BranchId INNER JOIN items ON items.Id=stock.ItemId");
		dt->Load(results);
		mysqlConn->Close();
		return dt;
	}

	System::Void DeleteStock(int id)
	{
		MakeQuery(L"DELETE FROM stock WHERE Id=" + id);
		mysqlConn->Close();
	}

	System::Data::DataTable ^ GetAllAPaymentsResults()
	{
		System::Data::DataTable ^ dt = gcnew System::Data::DataTable;
		MySqlDataReader ^ results;
		results = MakeQuery(L"SELECT a.ArticleName AS moveName, -e.suma AS moveSuma" +
			" FROM expenses e LEFT JOIN articles a ON e.ArticleId = a.Id" +
			" UNION ALL" +
			" SELECT c.ClientName AS moveName, p.suma AS moveSuma" +
			" FROM payments p LEFT JOIN sales s ON p.saleId = s.Id" +
			" LEFT JOIN clients c ON s.clientId = c.Id");
		dt->Load(results);
		mysqlConn->Close();
		return dt;
	}

	System::Data::DataTable ^ GetAllAPaymentsResults(int branchId, System::DateTime ^ dateFrom, System::DateTime ^ dateTo)
	{
		System::Data::DataTable ^ dt = gcnew System::Data::DataTable;
		MySqlDataReader ^ results;
		results = MakeQuery(L"SELECT a.ArticleName AS moveName, -e.suma AS moveSuma" +
			" FROM expenses e LEFT JOIN articles a ON e.ArticleId = a.Id" +
			" WHERE e.BranchId = " + branchId + 
			" AND e.DateExpense BETWEEN '" + dateFrom->ToString("yyyy-MM-dd") + "' AND '" + dateTo->ToString("yyyy-MM-dd") + "'" +
			" UNION ALL" +
			" SELECT c.ClientName AS moveName, p.suma AS moveSuma" +
			" FROM payments p LEFT JOIN sales s ON p.saleId = s.Id" +
			" LEFT JOIN clients c ON s.clientId = c.Id" +
			" WHERE s.BranchId = " + branchId + 
			" AND p.DatePay BETWEEN '" + dateFrom->ToString("yyyy-MM-dd") + "' AND '" + dateTo->ToString("yyyy-MM-dd") + "'");
		dt->Load(results);
		mysqlConn->Close();
		return dt;
	}

	System::Data::DataTable ^ GetAllAItemsResults()
	{
		System::Data::DataTable ^ dt = gcnew System::Data::DataTable;
		MySqlDataReader ^ results;
		results = MakeQuery(L"SELECT i.ItemName, st.Plan, ls.CountSale, (st.Plan*st.Cost) AS SumPlan, (ls.CountSale*st.Cost) AS SumSale" +
			" FROM stock st  LEFT JOIN(SELECT si.StockId AS StockId, SUM(si.Qty) AS CountSale" +
			" FROM saleitems si" +
			" LEFT JOIN stock t ON si.StockId = t.Id GROUP BY si.StockId)" +
			" ls ON ls.stockId = st.Id" +
			" LEFT JOIN saleitems si ON si.stockId = st.Id" +
			" LEFT JOIN sales s ON si.saleId = s.Id" +
			" LEFT JOIN items i ON st.itemId = i.Id");
		dt->Load(results);
		mysqlConn->Close();
		return dt;
	}

	System::Data::DataTable ^ GetAllAItemsResults(int branchId, System::DateTime ^ dateFrom, System::DateTime ^ dateTo)
	{
		System::Data::DataTable ^ dt = gcnew System::Data::DataTable;
		MySqlDataReader ^ results;
		results = MakeQuery(L"SELECT i.ItemName, st.Plan, ls.CountSale, (st.Plan*st.Cost) AS SumPlan, (ls.CountSale*st.Cost) AS SumSale" +
			" FROM stock st  LEFT JOIN(SELECT si.StockId AS StockId, SUM(si.Qty) AS CountSale" +
			" FROM saleitems si" +
			" LEFT JOIN stock t ON si.StockId = t.Id GROUP BY si.StockId)" +
			" ls ON ls.stockId = st.Id" +
			" LEFT JOIN saleitems si ON si.stockId = st.Id" +
			" LEFT JOIN sales s ON si.saleId = s.Id" +
			" LEFT JOIN items i ON st.itemId = i.Id" +
			" WHERE st.BranchId = " + branchId + 
			" AND s.DateSale BETWEEN '" + dateFrom->ToString("yyyy-MM-dd") + "' AND '" + dateTo->ToString("yyyy-MM-dd") + "'");
		dt->Load(results);
		mysqlConn->Close();
		return dt;
	}
	
	System::Data::DataTable ^ GetAllAClientsResults()
	{
		System::Data::DataTable ^ dt = gcnew System::Data::DataTable;
		MySqlDataReader ^ results;
		results = MakeQuery(L"SELECT c.ClientName, ls.CountSale, ls.SumSale" +
			" FROM sales s  LEFT JOIN(SELECT si.SaleId AS SaleId, SUM(si.Qty) AS CountSale," +
			" SUM(si.Qty*t.Cost) AS SumSale" +
			" FROM saleitems si" +
			" LEFT JOIN stock t ON si.StockId = t.Id GROUP BY si.StockId)" +
			" ls ON ls.saleId = s.Id" +
			" LEFT JOIN Clients c ON s.ClientId = c.Id");
		dt->Load(results);
		mysqlConn->Close();
		return dt;
	}

	System::Data::DataTable ^ GetAllAClientsResults(int branchId, System::DateTime ^ dateFrom, System::DateTime ^ dateTo)
	{
		System::Data::DataTable ^ dt = gcnew System::Data::DataTable;
		MySqlDataReader ^ results;
		results = MakeQuery(L"SELECT c.ClientName, ls.CountSale, ls.SumSale" +
			" FROM sales s  LEFT JOIN(SELECT si.SaleId AS SaleId, SUM(si.Qty) AS CountSale," +
			" SUM(si.Qty*t.Cost) AS SumSale" +
			" FROM saleitems si" +
			" LEFT JOIN stock t ON si.StockId = t.Id GROUP BY si.StockId)" +
			" ls ON ls.saleId = s.Id" +
			" LEFT JOIN Clients c ON s.ClientId = c.Id" +
			" WHERE s.BranchId = " + branchId +
			" AND s.DateSale BETWEEN '" + dateFrom->ToString("yyyy-MM-dd") + "' AND '" + dateTo->ToString("yyyy-MM-dd") + "'");
		dt->Load(results);
		mysqlConn->Close();
		return dt;
	}

	System::Void DeleteSaleItem(int id)
	{
		MakeQuery(L"UPDATE stock SET Qty=(Qty+(SELECT Qty FROM saleitems WHERE Id=" + id + ")) WHERE Id=(SELECT StockId FROM saleitems WHERE Id=" + id + "); DELETE FROM saleitems WHERE Id=" + id + ";");
		mysqlConn->Close();
	}

	int AddUpdateExpense(int id, int branchId, int articleId, double price, System::DateTime ^ date)
	{
		if (id > 0)
		{
			MySqlDataReader ^ dbReader = MakeQuery(L"UPDATE expenses SET BranchId=" + branchId + ", ArticleId=" + articleId + ", Suma=" + price + ", DateExpense=" + date->ToString("yyyy-MM-dd") + " WHERE Id=" + id);
			mysqlConn->Close();
			return id;
		}
		else
		{
			MySqlDataReader ^ dbReader = MakeQuery(L"INSERT INTO expenses (BranchId, ArticleId, Suma, DateExpense) VALUES (" + branchId + ", " + articleId + ", " + price + ", '" + date->ToString("yyyy-MM-dd") + "')");
			id = cmd->LastInsertedId;
			mysqlConn->Close();
			return id;
		}
	}

	System::Data::DataTable ^ GetAllExpensesResults()
	{
		System::Data::DataTable ^ dt = gcnew System::Data::DataTable;
		MySqlDataReader ^ results;
		results = MakeQuery(L"SELECT branches.BranchName, articles.ArticleName, expenses.DateExpense, expenses.Suma, expenses.Id FROM expenses INNER JOIN branches ON branches.Id=expenses.BranchId INNER JOIN articles ON articles.Id=expenses.ArticleId");
		dt->Load(results);
		mysqlConn->Close();
		return dt;
	}

	System::Data::DataTable ^ GetAllExpensesResults(int branchId, System::DateTime ^ dateFrom, System::DateTime ^ dateTo)
	{
		System::Data::DataTable ^ dt = gcnew System::Data::DataTable;
		MySqlDataReader ^ results;
		results = MakeQuery(L"SELECT branches.BranchName, articles.ArticleName, expenses.DateExpense, expenses.Suma, expenses.Id FROM expenses INNER JOIN branches ON branches.Id=expenses.BranchId INNER JOIN articles ON articles.Id=expenses.ArticleId " + 
			"WHERE expenses.BranchId=" + branchId + " AND expenses.DateExpense >= '" + dateFrom->ToString("yyyy-MM-dd") + "' AND expenses.DateExpense <= '" + dateTo->ToString("yyyy-MM-dd") + "'");
		dt->Load(results);
		mysqlConn->Close();
		return dt;
	}

	System::Void DeleteExpense(int id)
	{
		MakeQuery(L"DELETE FROM expenses WHERE Id=" + id);
		mysqlConn->Close();
	}

	int AddUpdatePayment(int id, int saleId, double price, System::DateTime ^ date)
	{
		if (id > 0)
		{
			MySqlDataReader ^ dbReader = MakeQuery(L"UPDATE payments SET SaleId=" + saleId + ", Suma=" + price + ", DatePay='" + date->ToString("yyyy-MM-dd") + "' WHERE Id=" + id);
			mysqlConn->Close();
			return id;
		}
		else
		{
			MySqlDataReader ^ dbReader = MakeQuery(L"INSERT INTO payments (SaleId, Suma, DatePay) VALUES (" + saleId + ", " + price + ", '" + date->ToString("yyyy-MM-dd") + "')");
			id = cmd->LastInsertedId;
			mysqlConn->Close();
			return id;
		}
	}

	System::Data::DataTable ^ GetAllPaymentsResults()
	{
		System::Data::DataTable ^ dt = gcnew System::Data::DataTable;
		MySqlDataReader ^ results;
		results = MakeQuery(L"SELECT payments.Id, payments.SaleId, clients.ClientName, branches.BranchName, payments.Suma, payments.DatePay FROM payments INNER JOIN clients ON clients.Id=(SELECT sales.ClientId FROM sales WHERE sales.Id=payments.SaleId) INNER JOIN branches ON branches.Id=(SELECT sales.BranchId FROM sales WHERE sales.Id=payments.SaleId)");
		dt->Load(results);
		mysqlConn->Close();
		return dt;
	}

	System::Data::DataTable ^ GetAllPaymentsResults(int branchId, int clientId, System::DateTime ^ dateFrom, System::DateTime ^ dateTo)
	{
		System::Data::DataTable ^ dt = gcnew System::Data::DataTable;
		MySqlDataReader ^ results;
		results = MakeQuery(L"SELECT payments.Id, payments.SaleId, clients.ClientName, branches.BranchName, payments.Suma, payments.DatePay FROM payments INNER JOIN clients ON clients.Id=(SELECT sales.ClientId FROM sales WHERE sales.Id=payments.SaleId) INNER JOIN branches ON branches.Id=(SELECT sales.BranchId FROM sales WHERE sales.Id=payments.SaleId) " +
			"WHERE payments.SaleId=(SELECT sales.Id FROM sales WHERE sales.BranchId=" + branchId + " AND sales.ClientId=" + clientId + ") AND payments.DatePay>='" + dateFrom->ToString("yyyy-MM-dd") + "' AND payments.DatePay<='" + dateTo->ToString("yyyy-MM-dd") + "'");
		dt->Load(results);
		mysqlConn->Close();
		return dt;
	}

	System::Void DeletePayment(int id)
	{
		MakeQuery(L"DELETE FROM payments WHERE Id=" + id);
		mysqlConn->Close();
	}

};

