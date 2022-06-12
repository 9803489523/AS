#pragma once
#include "SaleItemForm.h"
#include "MySqlInterface.h"

namespace Stock {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для SaleForm
	/// </summary>
	public ref class SaleForm : public System::Windows::Forms::Form
	{
	private: int _Id = 0;
	private: System::String ^ _ClientName = "";
	private: System::String ^ _BranchName = "";
	private: System::String ^ _Date;

	public:
		SaleForm(int id, System::String ^ branchName, System::String ^ clientName, System::String ^ date)
		{
			InitializeComponent();
			this->_Id = id;
			this->_ClientName = clientName;
			this->_BranchName = branchName;
			this->_Date = date;
			//
			//TODO: добавьте код конструктора
			//
		}

	public:
		SaleForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~SaleForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  ClientsSelect;
	protected:

	protected:
	private: System::Windows::Forms::Label^  ClientTitle;
	private: System::Windows::Forms::DateTimePicker^  Date;

	private: System::Windows::Forms::Label^  DateTitle;
	private: System::Windows::Forms::DataGridView^  ViewStock;
	private: System::Windows::Forms::DataGridView^  ViewSaleItems;
	private: System::Windows::Forms::Button^  ChooseStockButton;
	private: System::Windows::Forms::Button^  DeleteSaleItemButton;




	private: System::Windows::Forms::Label^  SummaryCostTitle;
	private: System::Windows::Forms::Label^  SummaryCost;
	private: System::Windows::Forms::Button^  SaveSaleButton;
	private: System::Windows::Forms::Button^  CancelSaleButton;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::TextBox^  Id;
	private: System::Windows::Forms::Label^  BranchTitle;
	private: System::Windows::Forms::ComboBox^  BranchesList;






	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->ClientsSelect = (gcnew System::Windows::Forms::ComboBox());
			this->ClientTitle = (gcnew System::Windows::Forms::Label());
			this->Date = (gcnew System::Windows::Forms::DateTimePicker());
			this->DateTitle = (gcnew System::Windows::Forms::Label());
			this->ViewStock = (gcnew System::Windows::Forms::DataGridView());
			this->ViewSaleItems = (gcnew System::Windows::Forms::DataGridView());
			this->ChooseStockButton = (gcnew System::Windows::Forms::Button());
			this->DeleteSaleItemButton = (gcnew System::Windows::Forms::Button());
			this->SummaryCostTitle = (gcnew System::Windows::Forms::Label());
			this->SummaryCost = (gcnew System::Windows::Forms::Label());
			this->SaveSaleButton = (gcnew System::Windows::Forms::Button());
			this->CancelSaleButton = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->Id = (gcnew System::Windows::Forms::TextBox());
			this->BranchTitle = (gcnew System::Windows::Forms::Label());
			this->BranchesList = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ViewStock))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ViewSaleItems))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// ClientsSelect
			// 
			this->ClientsSelect->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->ClientsSelect->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->ClientsSelect->FormattingEnabled = true;
			this->ClientsSelect->Location = System::Drawing::Point(61, 6);
			this->ClientsSelect->Name = L"ClientsSelect";
			this->ClientsSelect->Size = System::Drawing::Size(178, 21);
			this->ClientsSelect->TabIndex = 0;
			// 
			// ClientTitle
			// 
			this->ClientTitle->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->ClientTitle->AutoSize = true;
			this->ClientTitle->Location = System::Drawing::Point(12, 9);
			this->ClientTitle->Name = L"ClientTitle";
			this->ClientTitle->Size = System::Drawing::Size(43, 13);
			this->ClientTitle->TabIndex = 1;
			this->ClientTitle->Text = L"Клиент";
			// 
			// Date
			// 
			this->Date->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Date->Location = System::Drawing::Point(250, 26);
			this->Date->Name = L"Date";
			this->Date->Size = System::Drawing::Size(147, 20);
			this->Date->TabIndex = 2;
			// 
			// DateTitle
			// 
			this->DateTitle->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->DateTitle->AutoSize = true;
			this->DateTitle->Location = System::Drawing::Point(247, 10);
			this->DateTitle->Name = L"DateTitle";
			this->DateTitle->Size = System::Drawing::Size(33, 13);
			this->DateTitle->TabIndex = 3;
			this->DateTitle->Text = L"Дата";
			// 
			// ViewStock
			// 
			this->ViewStock->AllowUserToAddRows = false;
			this->ViewStock->AllowUserToDeleteRows = false;
			this->ViewStock->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ViewStock->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->ViewStock->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ViewStock->Location = System::Drawing::Point(4, 3);
			this->ViewStock->MultiSelect = false;
			this->ViewStock->Name = L"ViewStock";
			this->ViewStock->ReadOnly = true;
			this->ViewStock->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->ViewStock->Size = System::Drawing::Size(381, 485);
			this->ViewStock->TabIndex = 4;
			// 
			// ViewSaleItems
			// 
			this->ViewSaleItems->AllowUserToAddRows = false;
			this->ViewSaleItems->AllowUserToDeleteRows = false;
			this->ViewSaleItems->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ViewSaleItems->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->ViewSaleItems->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ViewSaleItems->Location = System::Drawing::Point(3, 3);
			this->ViewSaleItems->MultiSelect = false;
			this->ViewSaleItems->Name = L"ViewSaleItems";
			this->ViewSaleItems->ReadOnly = true;
			this->ViewSaleItems->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->ViewSaleItems->Size = System::Drawing::Size(398, 485);
			this->ViewSaleItems->TabIndex = 5;
			// 
			// ChooseStockButton
			// 
			this->ChooseStockButton->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->ChooseStockButton->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ChooseStockButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ChooseStockButton->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->ChooseStockButton->Location = System::Drawing::Point(4, 491);
			this->ChooseStockButton->Name = L"ChooseStockButton";
			this->ChooseStockButton->Size = System::Drawing::Size(381, 32);
			this->ChooseStockButton->TabIndex = 6;
			this->ChooseStockButton->Text = L"Выбрать >>";
			this->ChooseStockButton->UseVisualStyleBackColor = false;
			this->ChooseStockButton->Click += gcnew System::EventHandler(this, &SaleForm::ChooseStockButton_Click);
			// 
			// DeleteSaleItemButton
			// 
			this->DeleteSaleItemButton->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->DeleteSaleItemButton->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->DeleteSaleItemButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->DeleteSaleItemButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->DeleteSaleItemButton->Location = System::Drawing::Point(3, 491);
			this->DeleteSaleItemButton->Name = L"DeleteSaleItemButton";
			this->DeleteSaleItemButton->Size = System::Drawing::Size(398, 32);
			this->DeleteSaleItemButton->TabIndex = 7;
			this->DeleteSaleItemButton->Text = L"<< Убрать";
			this->DeleteSaleItemButton->UseVisualStyleBackColor = false;
			this->DeleteSaleItemButton->Click += gcnew System::EventHandler(this, &SaleForm::DeleteSaleItemButton_Click);
			// 
			// SummaryCostTitle
			// 
			this->SummaryCostTitle->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->SummaryCostTitle->AutoSize = true;
			this->SummaryCostTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SummaryCostTitle->Location = System::Drawing::Point(403, 16);
			this->SummaryCostTitle->Name = L"SummaryCostTitle";
			this->SummaryCostTitle->Size = System::Drawing::Size(179, 31);
			this->SummaryCostTitle->TabIndex = 8;
			this->SummaryCostTitle->Text = L"Общая сумма:";
			// 
			// SummaryCost
			// 
			this->SummaryCost->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->SummaryCost->AutoSize = true;
			this->SummaryCost->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SummaryCost->Location = System::Drawing::Point(580, 16);
			this->SummaryCost->Name = L"SummaryCost";
			this->SummaryCost->Size = System::Drawing::Size(29, 31);
			this->SummaryCost->TabIndex = 9;
			this->SummaryCost->Text = L"0";
			// 
			// SaveSaleButton
			// 
			this->SaveSaleButton->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->SaveSaleButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SaveSaleButton->Location = System::Drawing::Point(13, 585);
			this->SaveSaleButton->Name = L"SaveSaleButton";
			this->SaveSaleButton->Size = System::Drawing::Size(385, 32);
			this->SaveSaleButton->TabIndex = 10;
			this->SaveSaleButton->Text = L"Сохранить";
			this->SaveSaleButton->UseVisualStyleBackColor = true;
			this->SaveSaleButton->Click += gcnew System::EventHandler(this, &SaleForm::SaveSaleButton_Click);
			// 
			// CancelSaleButton
			// 
			this->CancelSaleButton->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->CancelSaleButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->CancelSaleButton->Location = System::Drawing::Point(403, 585);
			this->CancelSaleButton->Name = L"CancelSaleButton";
			this->CancelSaleButton->Size = System::Drawing::Size(404, 32);
			this->CancelSaleButton->TabIndex = 11;
			this->CancelSaleButton->Text = L"Отмена";
			this->CancelSaleButton->UseVisualStyleBackColor = true;
			this->CancelSaleButton->Click += gcnew System::EventHandler(this, &SaleForm::CancelSaleButton_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->ViewSaleItems);
			this->panel1->Controls->Add(this->DeleteSaleItemButton);
			this->panel1->Location = System::Drawing::Point(403, 50);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(404, 526);
			this->panel1->TabIndex = 12;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->ViewStock);
			this->panel2->Controls->Add(this->ChooseStockButton);
			this->panel2->Location = System::Drawing::Point(12, 50);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(388, 526);
			this->panel2->TabIndex = 13;
			// 
			// Id
			// 
			this->Id->Location = System::Drawing::Point(783, 27);
			this->Id->Name = L"Id";
			this->Id->Size = System::Drawing::Size(21, 20);
			this->Id->TabIndex = 14;
			this->Id->Text = L"0";
			this->Id->Visible = false;
			// 
			// BranchTitle
			// 
			this->BranchTitle->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->BranchTitle->AutoSize = true;
			this->BranchTitle->Location = System::Drawing::Point(12, 31);
			this->BranchTitle->Name = L"BranchTitle";
			this->BranchTitle->Size = System::Drawing::Size(48, 13);
			this->BranchTitle->TabIndex = 16;
			this->BranchTitle->Text = L"Филиал";
			// 
			// BranchesList
			// 
			this->BranchesList->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->BranchesList->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->BranchesList->FormattingEnabled = true;
			this->BranchesList->Location = System::Drawing::Point(61, 29);
			this->BranchesList->Name = L"BranchesList";
			this->BranchesList->Size = System::Drawing::Size(178, 21);
			this->BranchesList->TabIndex = 15;
			// 
			// SaleForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(819, 629);
			this->Controls->Add(this->BranchTitle);
			this->Controls->Add(this->BranchesList);
			this->Controls->Add(this->Id);
			this->Controls->Add(this->CancelSaleButton);
			this->Controls->Add(this->SaveSaleButton);
			this->Controls->Add(this->SummaryCost);
			this->Controls->Add(this->SummaryCostTitle);
			this->Controls->Add(this->DateTitle);
			this->Controls->Add(this->Date);
			this->Controls->Add(this->ClientTitle);
			this->Controls->Add(this->ClientsSelect);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MinimumSize = System::Drawing::Size(835, 668);
			this->Name = L"SaleForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Добавить заказ";
			this->Load += gcnew System::EventHandler(this, &SaleForm::SaleForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ViewStock))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ViewSaleItems))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void RefreshStock()
		{
					 MySqlInterface ^ msi = gcnew MySqlInterface;
					 this->ViewStock->DataSource = msi->GetAllStockResults();
					 this->ViewStock->Columns["ItemName"]->HeaderText = "Товар";
					 this->ViewStock->Columns["BranchName"]->HeaderText = "Филиал";
					 this->ViewStock->Columns["Qty"]->HeaderText = "Осталось";
					 this->ViewStock->Columns["Cost"]->HeaderText = "Цена";
					 this->ViewStock->Columns["Plan"]->HeaderText = "Количество";
					 this->ViewStock->Columns["Id"]->Visible = false;

		}
	private: System::Void RefreshSaleItems()
	{
				 MySqlInterface ^ msi = gcnew MySqlInterface;
				 DataTable ^ dt = msi->GetAllSaleItemsResults(this->_Id);
				 if (!this->ViewSaleItems->Columns->Contains("ItemName"))
				 {
					 this->ViewSaleItems->Columns->Add("ItemName", "Товар");
				 }
				 if (!this->ViewSaleItems->Columns->Contains("BranchName"))
				 {
					 this->ViewSaleItems->Columns->Add("BranchName", "Филиал");
				 }
				 if (!this->ViewSaleItems->Columns->Contains("Cost"))
				 {
					 this->ViewSaleItems->Columns->Add("Cost", "Цена");
				 }
				 if (!this->ViewSaleItems->Columns->Contains("Qty"))
				 {
					 this->ViewSaleItems->Columns->Add("Qty", "Количество");
				 }
				 if (!this->ViewSaleItems->Columns->Contains("OldRowIndex"))
				 {
					 this->ViewSaleItems->Columns->Add("OldRowIndex", "OldRowIndex");
					 this->ViewSaleItems->Columns["OldRowIndex"]->Visible = false;
				 }
				 if (!this->ViewSaleItems->Columns->Contains("Id"))
				 {
					 this->ViewSaleItems->Columns->Add("Id", "Id");
					 this->ViewSaleItems->Columns["Id"]->Visible = false;
				 }
				 int ix = 0;
				 int sum = 0;
				 for each (DataRow ^ row in dt->Select())
				 {
					 ix = this->ViewSaleItems->Rows->Add();
					 this->ViewSaleItems->Rows[ix]->Cells["ItemName"]->Value = row["ItemName"]->ToString();
					 this->ViewSaleItems->Rows[ix]->Cells["BranchName"]->Value = row["BranchName"]->ToString();
					 this->ViewSaleItems->Rows[ix]->Cells["Qty"]->Value = row["Qty"]->ToString();
					 this->ViewSaleItems->Rows[ix]->Cells["Cost"]->Value = row["Cost"]->ToString();
					 sum += double::Parse(row["Cost"]->ToString()) * int::Parse(row["Qty"]->ToString());
					 this->ViewSaleItems->Rows[ix]->Cells["Id"]->Value = row["Id"]->ToString();
					 this->ViewSaleItems->Rows[ix]->Cells["OldRowIndex"]->Value = "-1";
				 }
				 this->SummaryCost->Text = "" + sum;
	}
	private: System::Void ChooseStockButton_Click(System::Object^  sender, System::EventArgs^  e) {
				 DataGridViewRow ^ row;
				 try
				 {
					 row = ViewStock->SelectedRows[0];
					 SaleItemForm ^ sif = gcnew SaleItemForm(int::Parse(row->Cells["Qty"]->Value->ToString()));
					 sif->ShowDialog();
					 if (sif->Qty >= 0)
					 {
						 ViewStock->Rows[ViewStock->SelectedRows[0]->Index]->Cells["Qty"]->Value = int::Parse(ViewStock->Rows[ViewStock->SelectedRows[0]->Index]->Cells["Qty"]->Value->ToString()) - sif->Qty;
						 int rowIndex = ViewSaleItems->Rows->Add();
						 ViewSaleItems->Rows[rowIndex]->Cells["ItemName"]->Value = row->Cells["ItemName"]->Value;
						 ViewSaleItems->Rows[rowIndex]->Cells["BranchName"]->Value = row->Cells["BranchName"]->Value;
						 ViewSaleItems->Rows[rowIndex]->Cells["Cost"]->Value = row->Cells["Cost"]->Value;
						 ViewSaleItems->Rows[rowIndex]->Cells["Qty"]->Value = sif->Qty;
						 ViewSaleItems->Rows[rowIndex]->Cells["OldRowIndex"]->Value = row->Index;
						 ViewSaleItems->Rows[rowIndex]->Cells["Id"]->Value = row->Cells["Id"]->Value;
						 double sumCost = int::Parse(SummaryCost->Text->ToString()) + int::Parse(ViewSaleItems->Rows[rowIndex]->Cells["Qty"]->Value->ToString()) * double::Parse(ViewSaleItems->Rows[rowIndex]->Cells["Cost"]->Value->ToString());
						 SummaryCost->Text = "" + sumCost;
					 }
				 }
				 catch (Exception ^ e)
				 {
					 MessageBox::Show("Выберите товар");
				 }
	}
private: System::Void SaleForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 MySqlInterface ^ msi = gcnew MySqlInterface;
			 try
			 {
				 RefreshStock();
				 RefreshSaleItems();
				 ClientsSelect->ValueMember = "Id";
				 ClientsSelect->DisplayMember = "ClientName";
				 ClientsSelect->DataSource = msi->GetAllClientsResults();
				 BranchesList->ValueMember = "Id";
				 BranchesList->DisplayMember = "BranchName";
				 BranchesList->DataSource = msi->GetAllBranchesResults();
				 if (this->_Id > 0)
				 {
					 ClientsSelect->Text = this->_ClientName;
					 BranchesList->Text = this->_BranchName;
					 Date->Text = this->_Date;
				 }
			 }
			 catch (Exception ^ e)
			 {
				 MessageBox::Show("Ошибка соединения с базой даных");
			 }
}
private: System::Void DeleteSaleItemButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 DataGridViewRow ^ row;
			 try
			 {
				 row = ViewSaleItems->SelectedRows[0];
				 if (row->Cells["OldRowIndex"]->Value->ToString() != "-1")
				 {
					 ViewStock->Rows[int::Parse(row->Cells["OldRowIndex"]->Value->ToString())]->Cells["Qty"]->Value = int::Parse(ViewStock->Rows[int::Parse(row->Cells["OldRowIndex"]->Value->ToString())]->Cells["Qty"]->Value->ToString()) + int::Parse(row->Cells["Qty"]->Value->ToString());
				 }
				 else
				 {
					 MySqlInterface ^ msi = gcnew MySqlInterface;
					 msi->DeleteSaleItem(int::Parse(row->Cells["Id"]->Value->ToString()));
					 RefreshStock();
				 }
				 double sumCost = double::Parse(SummaryCost->Text) - int::Parse(row->Cells["Qty"]->Value->ToString()) * double::Parse(row->Cells["Cost"]->Value->ToString());
				 SummaryCost->Text = "" + sumCost;
				 ViewSaleItems->Rows->RemoveAt(row->Index);
			 }
			 catch (Exception ^ e)
			 {
				 MessageBox::Show("Выберите товар");
			 }
}
private: System::Void CancelSaleButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
}
private: System::Void SaveSaleButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 MySqlInterface ^ msi = gcnew MySqlInterface;
			 if (this->ViewSaleItems->Rows->Count > 0)
			 {
				 try
				 {
					 msi->AddUpdateSale(this->_Id, int::Parse(this->BranchesList->SelectedValue->ToString()), int::Parse(this->ClientsSelect->SelectedValue->ToString()), this->Date->Value, this->ViewSaleItems->Rows);
					 this->Close();
				 }
				 catch (Exception ^ e)
				 {
					 MessageBox::Show("Ошибка соединения с базой даных");
				 }
			 }
			 else
			 {
				 MessageBox::Show("Добавте товары");
			 }
}
};
}
