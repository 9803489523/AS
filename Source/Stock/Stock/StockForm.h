#pragma once
#include "MySqlInterface.h"

namespace Stock {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для StockForm
	/// </summary>
	public ref class StockForm : public System::Windows::Forms::Form
	{
	private: int _Id = 0;
	private: System::String ^ _BranchName = "";
	private: System::String ^ _ItemName = "";
	private: double _Price = 0.0;
	private: System::Windows::Forms::TextBox^  Id;
	private: int _Plan = 0;

	public:
		StockForm(int id, System::String ^ branchName, System::String ^ itemName, double price, int plan)
		{
			this->_Id = id;
			this->_BranchName = branchName;
			this->_ItemName = itemName;
			this->_Price = price;
			this->_Plan = plan;
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	public:
		StockForm(void)
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
		~StockForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  BranchTitle;
	private: System::Windows::Forms::ComboBox^  BranchSelect;
	private: System::Windows::Forms::ComboBox^  ItemsSelect;


	private: System::Windows::Forms::Label^  ItemTitle;



	private: System::Windows::Forms::Label^  PriceTitle;
	private: System::Windows::Forms::Label^  TitlePlan;


	private: System::Windows::Forms::TextBox^  Price;
	private: System::Windows::Forms::TextBox^  Plan;


	private: System::Windows::Forms::Button^  SaveStockButton;
	private: System::Windows::Forms::Button^  CancelStockButton;

	protected:

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
			this->BranchTitle = (gcnew System::Windows::Forms::Label());
			this->BranchSelect = (gcnew System::Windows::Forms::ComboBox());
			this->ItemsSelect = (gcnew System::Windows::Forms::ComboBox());
			this->ItemTitle = (gcnew System::Windows::Forms::Label());
			this->PriceTitle = (gcnew System::Windows::Forms::Label());
			this->TitlePlan = (gcnew System::Windows::Forms::Label());
			this->Price = (gcnew System::Windows::Forms::TextBox());
			this->Plan = (gcnew System::Windows::Forms::TextBox());
			this->SaveStockButton = (gcnew System::Windows::Forms::Button());
			this->CancelStockButton = (gcnew System::Windows::Forms::Button());
			this->Id = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// BranchTitle
			// 
			this->BranchTitle->AutoSize = true;
			this->BranchTitle->Location = System::Drawing::Point(13, 13);
			this->BranchTitle->Name = L"BranchTitle";
			this->BranchTitle->Size = System::Drawing::Size(48, 13);
			this->BranchTitle->TabIndex = 0;
			this->BranchTitle->Text = L"Филиал";
			// 
			// BranchSelect
			// 
			this->BranchSelect->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->BranchSelect->FormattingEnabled = true;
			this->BranchSelect->Location = System::Drawing::Point(13, 30);
			this->BranchSelect->Name = L"BranchSelect";
			this->BranchSelect->Size = System::Drawing::Size(160, 21);
			this->BranchSelect->TabIndex = 1;
			// 
			// ItemsSelect
			// 
			this->ItemsSelect->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->ItemsSelect->FormattingEnabled = true;
			this->ItemsSelect->Location = System::Drawing::Point(13, 71);
			this->ItemsSelect->Name = L"ItemsSelect";
			this->ItemsSelect->Size = System::Drawing::Size(160, 21);
			this->ItemsSelect->TabIndex = 3;
			// 
			// ItemTitle
			// 
			this->ItemTitle->AutoSize = true;
			this->ItemTitle->Location = System::Drawing::Point(13, 54);
			this->ItemTitle->Name = L"ItemTitle";
			this->ItemTitle->Size = System::Drawing::Size(38, 13);
			this->ItemTitle->TabIndex = 2;
			this->ItemTitle->Text = L"Товар";
			// 
			// PriceTitle
			// 
			this->PriceTitle->AutoSize = true;
			this->PriceTitle->Location = System::Drawing::Point(13, 98);
			this->PriceTitle->Name = L"PriceTitle";
			this->PriceTitle->Size = System::Drawing::Size(33, 13);
			this->PriceTitle->TabIndex = 4;
			this->PriceTitle->Text = L"Цена";
			// 
			// TitlePlan
			// 
			this->TitlePlan->AutoSize = true;
			this->TitlePlan->Location = System::Drawing::Point(13, 124);
			this->TitlePlan->Name = L"TitlePlan";
			this->TitlePlan->Size = System::Drawing::Size(66, 13);
			this->TitlePlan->TabIndex = 5;
			this->TitlePlan->Text = L"Количество";
			// 
			// Price
			// 
			this->Price->Location = System::Drawing::Point(85, 95);
			this->Price->Name = L"Price";
			this->Price->Size = System::Drawing::Size(88, 20);
			this->Price->TabIndex = 6;
			// 
			// Plan
			// 
			this->Plan->Location = System::Drawing::Point(85, 121);
			this->Plan->Name = L"Plan";
			this->Plan->Size = System::Drawing::Size(88, 20);
			this->Plan->TabIndex = 7;
			// 
			// SaveStockButton
			// 
			this->SaveStockButton->Location = System::Drawing::Point(12, 147);
			this->SaveStockButton->Name = L"SaveStockButton";
			this->SaveStockButton->Size = System::Drawing::Size(75, 23);
			this->SaveStockButton->TabIndex = 8;
			this->SaveStockButton->Text = L"Сохранить";
			this->SaveStockButton->UseVisualStyleBackColor = true;
			this->SaveStockButton->Click += gcnew System::EventHandler(this, &StockForm::SaveStockButton_Click);
			// 
			// CancelStockButton
			// 
			this->CancelStockButton->Location = System::Drawing::Point(98, 147);
			this->CancelStockButton->Name = L"CancelStockButton";
			this->CancelStockButton->Size = System::Drawing::Size(75, 23);
			this->CancelStockButton->TabIndex = 9;
			this->CancelStockButton->Text = L"Отменить";
			this->CancelStockButton->UseVisualStyleBackColor = true;
			this->CancelStockButton->Click += gcnew System::EventHandler(this, &StockForm::CancelStockButton_Click);
			// 
			// Id
			// 
			this->Id->Location = System::Drawing::Point(163, 10);
			this->Id->Name = L"Id";
			this->Id->Size = System::Drawing::Size(10, 20);
			this->Id->TabIndex = 10;
			this->Id->Text = L"0";
			this->Id->Visible = false;
			// 
			// StockForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(190, 184);
			this->Controls->Add(this->Id);
			this->Controls->Add(this->CancelStockButton);
			this->Controls->Add(this->SaveStockButton);
			this->Controls->Add(this->Plan);
			this->Controls->Add(this->Price);
			this->Controls->Add(this->TitlePlan);
			this->Controls->Add(this->PriceTitle);
			this->Controls->Add(this->ItemsSelect);
			this->Controls->Add(this->ItemTitle);
			this->Controls->Add(this->BranchSelect);
			this->Controls->Add(this->BranchTitle);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"StockForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Добавить товар";
			this->Load += gcnew System::EventHandler(this, &StockForm::StockForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SaveStockButton_Click(System::Object^  sender, System::EventArgs^  e) {
				 MySqlInterface ^ msi = gcnew MySqlInterface;
				 double price = 0.0;
				 int plan = 0;
				 if (!System::String::IsNullOrEmpty(this->Id->Text) && int::Parse(this->BranchSelect->SelectedValue->ToString()) > 0 && int::Parse(this->ItemsSelect->SelectedValue->ToString()) > 0 && double::TryParse(this->Price->Text, price) && int::TryParse(this->Plan->Text, plan))
				 {
					 try
					 {
						 msi->AddUpdateStock(int::Parse(this->Id->Text), int::Parse(this->BranchSelect->SelectedValue->ToString()), int::Parse(this->ItemsSelect->SelectedValue->ToString()), price, plan);
						 this->Close();
					 }
					 catch (Exception ^ e)
					 {
						 MessageBox::Show("Ошибка соединения с базой даных");
					 }
				 }
				 else
				 {
					 MessageBox::Show("Заполните данные или введите верный формат данных");
				 }
				 
	}
private: System::Void StockForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 MySqlInterface ^ msi = gcnew MySqlInterface;
			 try
			 {
				 if (this->_Id > 0)
				 {
					 this->Id->Text = "" + this->_Id;
					 this->BranchSelect->ValueMember = "Id";
					 this->BranchSelect->DisplayMember = "BranchName";
					 this->BranchSelect->DataSource = msi->GetAllBranchesResults();
					 this->BranchSelect->Text = this->_BranchName;
					 this->ItemsSelect->ValueMember = "Id";
					 this->ItemsSelect->DisplayMember = "ItemName";
					 this->ItemsSelect->DataSource = msi->GetAllItemsResults();
					 this->ItemsSelect->Text = this->_ItemName;
					 this->Price->Text = "" + this->_Price;
					 this->Plan->Text = "" + this->_Plan;
					 this->Text = "Редактировать товар";
					 this->SaveStockButton->Text = "Редактировать";
				 }
				 else
				 {
					 this->BranchSelect->ValueMember = "Id";
					 this->BranchSelect->DisplayMember = "BranchName";
					 this->BranchSelect->DataSource = msi->GetAllBranchesResults();
					 this->ItemsSelect->ValueMember = "Id";
					 this->ItemsSelect->DisplayMember = "ItemName";
					 this->ItemsSelect->DataSource = msi->GetAllItemsResults();
				 }
			 }
			 catch (Exception ^ e)
			 {
				 MessageBox::Show("Ошибка соединения с базой даных");
			 }
}
private: System::Void CancelStockButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
}
};
}
