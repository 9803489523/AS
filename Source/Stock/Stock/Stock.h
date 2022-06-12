#pragma once
#include "MySqlInterface.h"
#include "StockForm.h"

namespace Stock {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Stock
	/// </summary>
	public ref class Stock : public System::Windows::Forms::Form
	{
	public:
		Stock(void)
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
		~Stock()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  ViewStock;
	protected:

	protected:
	private: System::Windows::Forms::Button^  AddStockButton;
	private: System::Windows::Forms::Button^  EditStockButton;
	private: System::Windows::Forms::Button^  DeleteStockButton;



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
			this->ViewStock = (gcnew System::Windows::Forms::DataGridView());
			this->AddStockButton = (gcnew System::Windows::Forms::Button());
			this->EditStockButton = (gcnew System::Windows::Forms::Button());
			this->DeleteStockButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ViewStock))->BeginInit();
			this->SuspendLayout();
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
			this->ViewStock->Location = System::Drawing::Point(12, 12);
			this->ViewStock->MultiSelect = false;
			this->ViewStock->Name = L"ViewStock";
			this->ViewStock->ReadOnly = true;
			this->ViewStock->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->ViewStock->Size = System::Drawing::Size(566, 405);
			this->ViewStock->TabIndex = 0;
			// 
			// AddStockButton
			// 
			this->AddStockButton->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->AddStockButton->Location = System::Drawing::Point(11, 423);
			this->AddStockButton->Name = L"AddStockButton";
			this->AddStockButton->Size = System::Drawing::Size(177, 35);
			this->AddStockButton->TabIndex = 1;
			this->AddStockButton->Text = L"Добавить";
			this->AddStockButton->UseVisualStyleBackColor = true;
			this->AddStockButton->Click += gcnew System::EventHandler(this, &Stock::AddStockButton_Click);
			// 
			// EditStockButton
			// 
			this->EditStockButton->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->EditStockButton->Location = System::Drawing::Point(204, 423);
			this->EditStockButton->Name = L"EditStockButton";
			this->EditStockButton->Size = System::Drawing::Size(182, 35);
			this->EditStockButton->TabIndex = 2;
			this->EditStockButton->Text = L"Редактировать";
			this->EditStockButton->UseVisualStyleBackColor = true;
			this->EditStockButton->Click += gcnew System::EventHandler(this, &Stock::EditStockButton_Click);
			// 
			// DeleteStockButton
			// 
			this->DeleteStockButton->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->DeleteStockButton->Location = System::Drawing::Point(402, 423);
			this->DeleteStockButton->Name = L"DeleteStockButton";
			this->DeleteStockButton->Size = System::Drawing::Size(177, 35);
			this->DeleteStockButton->TabIndex = 3;
			this->DeleteStockButton->Text = L"Удалить";
			this->DeleteStockButton->UseVisualStyleBackColor = true;
			this->DeleteStockButton->Click += gcnew System::EventHandler(this, &Stock::DeleteStockButton_Click);
			// 
			// Stock
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(590, 471);
			this->Controls->Add(this->DeleteStockButton);
			this->Controls->Add(this->EditStockButton);
			this->Controls->Add(this->AddStockButton);
			this->Controls->Add(this->ViewStock);
			this->MinimumSize = System::Drawing::Size(606, 509);
			this->Name = L"Stock";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Склад";
			this->Load += gcnew System::EventHandler(this, &Stock::Stock_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ViewStock))->EndInit();
			this->ResumeLayout(false);

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
	private: System::Void AddStockButton_Click(System::Object^  sender, System::EventArgs^  e) {
				 StockForm ^ sf = gcnew StockForm;
				 sf->ShowDialog();
				 RefreshStock();
	}
private: System::Void Stock_Load(System::Object^  sender, System::EventArgs^  e) {
			 try
			 {
				 RefreshStock();
			 }
			 catch (Exception ^ e)
			 {
				 MessageBox::Show("Ошибка соединения с базой даных");
			 }
}
private: System::Void EditStockButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 DataGridViewRow ^ row;
			 try
			 {
				 row = ViewStock->SelectedRows[0];
				 StockForm ^ sf = gcnew StockForm(int::Parse(row->Cells["Id"]->Value->ToString()), row->Cells["BranchName"]->Value->ToString(), row->Cells["ItemName"]->Value->ToString(), double::Parse(row->Cells["Cost"]->Value->ToString()), int::Parse(row->Cells["Plan"]->Value->ToString()));
				 sf->ShowDialog();
				 RefreshStock();
			 }
			 catch (Exception ^ e)
			 {
				 MessageBox::Show("Выберите товар");
			 }
}
private: System::Void DeleteStockButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 System::Windows::Forms::DialogResult ^ alert = MessageBox::Show("Вы уверены, что хотите удалить товар?\r\nТакже будут удалены все данные по этому товару.", "Удаление товара", MessageBoxButtons::YesNo);
			 if (*alert == System::Windows::Forms::DialogResult::Yes)
			 {
				 DataGridViewRow ^ row;
				 MySqlInterface ^ msi = gcnew MySqlInterface;
				 try
				 {
					 row = ViewStock->SelectedRows[0];
					 msi->DeleteStock(System::Int32::Parse(row->Cells["Id"]->Value->ToString()));
					 RefreshStock();
				 }
				 catch (Exception ^ ex)
				 {
					 MessageBox::Show("Возможно, ето объект где-то используется");
				 }
			 }
}
};
}
