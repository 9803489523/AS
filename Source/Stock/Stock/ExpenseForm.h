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
	/// Сводка для ExpenseForm
	/// </summary>
	public ref class ExpenseForm : public System::Windows::Forms::Form
	{
	private: int _Id = 0;
	private: System::String ^ _BranchName = "";
	private: System::String ^ _ArticleName = "";
	private: System::String ^ _Date = "";
	private: double _Price = 0.0;
	private: int _Plan = 0;

	public:
		ExpenseForm(int id, System::String ^ branchName, System::String ^ articleName, System::String ^ date, double price)
		{
			this->_Id = id;
			this->_BranchName = branchName;
			this->_ArticleName = articleName;
			this->_Date = date;
			this->_Price = price;
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	public:
		ExpenseForm(void)
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
		~ExpenseForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  Id;
	private: System::Windows::Forms::Button^  CancelExpenceButton;
	protected:

	private: System::Windows::Forms::Button^  SaveExpenceButton;


	private: System::Windows::Forms::TextBox^  Price;
	private: System::Windows::Forms::Label^  DateTitle;

	private: System::Windows::Forms::Label^  PriceTitle;
	private: System::Windows::Forms::ComboBox^  ArticlesSelect;


	private: System::Windows::Forms::Label^  ArticleTitle;


	private: System::Windows::Forms::ComboBox^  BranchSelect;
	private: System::Windows::Forms::Label^  BranchTitle;
	private: System::Windows::Forms::DateTimePicker^  Date;


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
			this->Id = (gcnew System::Windows::Forms::TextBox());
			this->CancelExpenceButton = (gcnew System::Windows::Forms::Button());
			this->SaveExpenceButton = (gcnew System::Windows::Forms::Button());
			this->Price = (gcnew System::Windows::Forms::TextBox());
			this->DateTitle = (gcnew System::Windows::Forms::Label());
			this->PriceTitle = (gcnew System::Windows::Forms::Label());
			this->ArticlesSelect = (gcnew System::Windows::Forms::ComboBox());
			this->ArticleTitle = (gcnew System::Windows::Forms::Label());
			this->BranchSelect = (gcnew System::Windows::Forms::ComboBox());
			this->BranchTitle = (gcnew System::Windows::Forms::Label());
			this->Date = (gcnew System::Windows::Forms::DateTimePicker());
			this->SuspendLayout();
			// 
			// Id
			// 
			this->Id->Location = System::Drawing::Point(162, 9);
			this->Id->Name = L"Id";
			this->Id->Size = System::Drawing::Size(10, 20);
			this->Id->TabIndex = 21;
			this->Id->Text = L"0";
			this->Id->Visible = false;
			// 
			// CancelExpenceButton
			// 
			this->CancelExpenceButton->Location = System::Drawing::Point(97, 146);
			this->CancelExpenceButton->Name = L"CancelExpenceButton";
			this->CancelExpenceButton->Size = System::Drawing::Size(75, 23);
			this->CancelExpenceButton->TabIndex = 20;
			this->CancelExpenceButton->Text = L"Отменить";
			this->CancelExpenceButton->UseVisualStyleBackColor = true;
			this->CancelExpenceButton->Click += gcnew System::EventHandler(this, &ExpenseForm::CancelExpenceButton_Click);
			// 
			// SaveExpenceButton
			// 
			this->SaveExpenceButton->Location = System::Drawing::Point(11, 146);
			this->SaveExpenceButton->Name = L"SaveExpenceButton";
			this->SaveExpenceButton->Size = System::Drawing::Size(75, 23);
			this->SaveExpenceButton->TabIndex = 19;
			this->SaveExpenceButton->Text = L"Сохранить";
			this->SaveExpenceButton->UseVisualStyleBackColor = true;
			this->SaveExpenceButton->Click += gcnew System::EventHandler(this, &ExpenseForm::SaveExpenceButton_Click);
			// 
			// Price
			// 
			this->Price->Location = System::Drawing::Point(51, 94);
			this->Price->Name = L"Price";
			this->Price->Size = System::Drawing::Size(121, 20);
			this->Price->TabIndex = 17;
			// 
			// DateTitle
			// 
			this->DateTitle->AutoSize = true;
			this->DateTitle->Location = System::Drawing::Point(12, 123);
			this->DateTitle->Name = L"DateTitle";
			this->DateTitle->Size = System::Drawing::Size(33, 13);
			this->DateTitle->TabIndex = 16;
			this->DateTitle->Text = L"Дата";
			// 
			// PriceTitle
			// 
			this->PriceTitle->AutoSize = true;
			this->PriceTitle->Location = System::Drawing::Point(12, 97);
			this->PriceTitle->Name = L"PriceTitle";
			this->PriceTitle->Size = System::Drawing::Size(33, 13);
			this->PriceTitle->TabIndex = 15;
			this->PriceTitle->Text = L"Цена";
			// 
			// ArticlesSelect
			// 
			this->ArticlesSelect->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->ArticlesSelect->FormattingEnabled = true;
			this->ArticlesSelect->Location = System::Drawing::Point(12, 70);
			this->ArticlesSelect->Name = L"ArticlesSelect";
			this->ArticlesSelect->Size = System::Drawing::Size(160, 21);
			this->ArticlesSelect->TabIndex = 14;
			// 
			// ArticleTitle
			// 
			this->ArticleTitle->AutoSize = true;
			this->ArticleTitle->Location = System::Drawing::Point(12, 53);
			this->ArticleTitle->Name = L"ArticleTitle";
			this->ArticleTitle->Size = System::Drawing::Size(52, 13);
			this->ArticleTitle->TabIndex = 13;
			this->ArticleTitle->Text = L"Предмет";
			// 
			// BranchSelect
			// 
			this->BranchSelect->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->BranchSelect->FormattingEnabled = true;
			this->BranchSelect->Location = System::Drawing::Point(12, 29);
			this->BranchSelect->Name = L"BranchSelect";
			this->BranchSelect->Size = System::Drawing::Size(160, 21);
			this->BranchSelect->TabIndex = 12;
			// 
			// BranchTitle
			// 
			this->BranchTitle->AutoSize = true;
			this->BranchTitle->Location = System::Drawing::Point(12, 12);
			this->BranchTitle->Name = L"BranchTitle";
			this->BranchTitle->Size = System::Drawing::Size(48, 13);
			this->BranchTitle->TabIndex = 11;
			this->BranchTitle->Text = L"Филиал";
			// 
			// Date
			// 
			this->Date->Location = System::Drawing::Point(52, 121);
			this->Date->Name = L"Date";
			this->Date->Size = System::Drawing::Size(120, 20);
			this->Date->TabIndex = 22;
			// 
			// ExpenseForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(184, 178);
			this->Controls->Add(this->Date);
			this->Controls->Add(this->Id);
			this->Controls->Add(this->CancelExpenceButton);
			this->Controls->Add(this->SaveExpenceButton);
			this->Controls->Add(this->Price);
			this->Controls->Add(this->DateTitle);
			this->Controls->Add(this->PriceTitle);
			this->Controls->Add(this->ArticlesSelect);
			this->Controls->Add(this->ArticleTitle);
			this->Controls->Add(this->BranchSelect);
			this->Controls->Add(this->BranchTitle);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"ExpenseForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Добавить расход";
			this->Load += gcnew System::EventHandler(this, &ExpenseForm::ExpenseForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SaveExpenceButton_Click(System::Object^  sender, System::EventArgs^  e) {
				 MySqlInterface ^ msi = gcnew MySqlInterface;
				 double price = 0.0;
				 if (!System::String::IsNullOrEmpty(this->Id->Text) && int::Parse(this->BranchSelect->SelectedValue->ToString()) > 0 && int::Parse(this->ArticlesSelect->SelectedValue->ToString()) > 0 && double::TryParse(this->Price->Text, price))
				 {
					 try
					 {
						 msi->AddUpdateExpense(int::Parse(this->Id->Text), int::Parse(this->BranchSelect->SelectedValue->ToString()), int::Parse(this->ArticlesSelect->SelectedValue->ToString()), price, this->Date->Value);
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
private: System::Void CancelExpenceButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
}
private: System::Void ExpenseForm_Load(System::Object^  sender, System::EventArgs^  e) {
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
					 this->ArticlesSelect->ValueMember = "Id";
					 this->ArticlesSelect->DisplayMember = "ArticleName";
					 this->ArticlesSelect->DataSource = msi->GetAllExpencesResults();
					 this->ArticlesSelect->Text = this->_ArticleName;
					 this->Price->Text = "" + this->_Price;
					 this->Date->Text = "" + this->_Date;
					 this->Text = "Редактировать расход";
					 this->SaveExpenceButton->Text = "Редактировать";
				 }
				 else
				 {
					 this->BranchSelect->ValueMember = "Id";
					 this->BranchSelect->DisplayMember = "BranchName";
					 this->BranchSelect->DataSource = msi->GetAllBranchesResults();
					 this->ArticlesSelect->ValueMember = "Id";
					 this->ArticlesSelect->DisplayMember = "ArticleName";
					 this->ArticlesSelect->DataSource = msi->GetAllExpencesResults();
				 }
			 }
			 catch (Exception ^ e)
			 {
				 MessageBox::Show("Ошибка соединения с базой даных");
			 }
}
};
}
