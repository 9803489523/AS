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
	/// Сводка для PaymentForm
	/// </summary>
	public ref class PaymentForm : public System::Windows::Forms::Form
	{
	private: int _Id = 0;
	private: int _SaleId = 0;
	private: System::String ^ _Date = "";
	private: double _Price = 0.0;
	public:
		PaymentForm(int id, int saleId, System::String ^ date, double price)
		{
			this->_Id = id;
			this->_SaleId = saleId;
			this->_Date = date;
			this->_Price = price;
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	public:
		PaymentForm(void)
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
		~PaymentForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DateTimePicker^  Date;
	protected:
	private: System::Windows::Forms::TextBox^  Id;
	private: System::Windows::Forms::Button^  CancelPaymentButton;

	private: System::Windows::Forms::Button^  SavePaymentButton;

	private: System::Windows::Forms::TextBox^  Price;
	private: System::Windows::Forms::Label^  DateTitle;
	private: System::Windows::Forms::Label^  PriceTitle;
	private: System::Windows::Forms::ComboBox^  SalesSelect;



	private: System::Windows::Forms::Label^  SaleTitle;



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
			this->Date = (gcnew System::Windows::Forms::DateTimePicker());
			this->Id = (gcnew System::Windows::Forms::TextBox());
			this->CancelPaymentButton = (gcnew System::Windows::Forms::Button());
			this->SavePaymentButton = (gcnew System::Windows::Forms::Button());
			this->Price = (gcnew System::Windows::Forms::TextBox());
			this->DateTitle = (gcnew System::Windows::Forms::Label());
			this->PriceTitle = (gcnew System::Windows::Forms::Label());
			this->SalesSelect = (gcnew System::Windows::Forms::ComboBox());
			this->SaleTitle = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Date
			// 
			this->Date->Location = System::Drawing::Point(51, 81);
			this->Date->Name = L"Date";
			this->Date->Size = System::Drawing::Size(121, 20);
			this->Date->TabIndex = 33;
			// 
			// Id
			// 
			this->Id->Location = System::Drawing::Point(162, 7);
			this->Id->Name = L"Id";
			this->Id->Size = System::Drawing::Size(10, 20);
			this->Id->TabIndex = 32;
			this->Id->Text = L"0";
			this->Id->Visible = false;
			// 
			// CancelPaymentButton
			// 
			this->CancelPaymentButton->Location = System::Drawing::Point(97, 107);
			this->CancelPaymentButton->Name = L"CancelPaymentButton";
			this->CancelPaymentButton->Size = System::Drawing::Size(75, 23);
			this->CancelPaymentButton->TabIndex = 31;
			this->CancelPaymentButton->Text = L"Отменить";
			this->CancelPaymentButton->UseVisualStyleBackColor = true;
			this->CancelPaymentButton->Click += gcnew System::EventHandler(this, &PaymentForm::CancelPaymentButton_Click);
			// 
			// SavePaymentButton
			// 
			this->SavePaymentButton->Location = System::Drawing::Point(11, 107);
			this->SavePaymentButton->Name = L"SavePaymentButton";
			this->SavePaymentButton->Size = System::Drawing::Size(75, 23);
			this->SavePaymentButton->TabIndex = 30;
			this->SavePaymentButton->Text = L"Сохранить";
			this->SavePaymentButton->UseVisualStyleBackColor = true;
			this->SavePaymentButton->Click += gcnew System::EventHandler(this, &PaymentForm::SavePaymentButton_Click);
			// 
			// Price
			// 
			this->Price->Location = System::Drawing::Point(59, 54);
			this->Price->Name = L"Price";
			this->Price->Size = System::Drawing::Size(113, 20);
			this->Price->TabIndex = 29;
			// 
			// DateTitle
			// 
			this->DateTitle->AutoSize = true;
			this->DateTitle->Location = System::Drawing::Point(12, 83);
			this->DateTitle->Name = L"DateTitle";
			this->DateTitle->Size = System::Drawing::Size(33, 13);
			this->DateTitle->TabIndex = 28;
			this->DateTitle->Text = L"Дата";
			// 
			// PriceTitle
			// 
			this->PriceTitle->AutoSize = true;
			this->PriceTitle->Location = System::Drawing::Point(12, 57);
			this->PriceTitle->Name = L"PriceTitle";
			this->PriceTitle->Size = System::Drawing::Size(41, 13);
			this->PriceTitle->TabIndex = 27;
			this->PriceTitle->Text = L"Сумма";
			// 
			// SalesSelect
			// 
			this->SalesSelect->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->SalesSelect->FormattingEnabled = true;
			this->SalesSelect->Location = System::Drawing::Point(12, 27);
			this->SalesSelect->Name = L"SalesSelect";
			this->SalesSelect->Size = System::Drawing::Size(160, 21);
			this->SalesSelect->TabIndex = 24;
			// 
			// SaleTitle
			// 
			this->SaleTitle->AutoSize = true;
			this->SaleTitle->Location = System::Drawing::Point(12, 10);
			this->SaleTitle->Name = L"SaleTitle";
			this->SaleTitle->Size = System::Drawing::Size(52, 13);
			this->SaleTitle->TabIndex = 23;
			this->SaleTitle->Text = L"Заказ №";
			// 
			// PaymentForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(187, 144);
			this->Controls->Add(this->Date);
			this->Controls->Add(this->Id);
			this->Controls->Add(this->CancelPaymentButton);
			this->Controls->Add(this->SavePaymentButton);
			this->Controls->Add(this->Price);
			this->Controls->Add(this->DateTitle);
			this->Controls->Add(this->PriceTitle);
			this->Controls->Add(this->SalesSelect);
			this->Controls->Add(this->SaleTitle);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"PaymentForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Добавить платеж";
			this->Load += gcnew System::EventHandler(this, &PaymentForm::PaymentForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SavePaymentButton_Click(System::Object^  sender, System::EventArgs^  e) {
				 MySqlInterface ^ msi = gcnew MySqlInterface;
				 double price = 0.0;
				 if (!System::String::IsNullOrEmpty(this->Id->Text) && int::Parse(this->SalesSelect->SelectedValue->ToString()) > 0 && double::TryParse(this->Price->Text, price))
				 {
					 try
					 {
						 msi->AddUpdatePayment(int::Parse(this->Id->Text), int::Parse(this->SalesSelect->SelectedValue->ToString()), price, this->Date->Value);
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
private: System::Void CancelPaymentButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
}
private: System::Void PaymentForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 MySqlInterface ^ msi = gcnew MySqlInterface;
			 try
			 {
				 if (this->_Id > 0)
				 {
					 this->Id->Text = "" + this->_Id;
					 this->SalesSelect->ValueMember = "Id";
					 this->SalesSelect->DisplayMember = "Id";
					 this->SalesSelect->DataSource = msi->GetAllSalesResults();
					 this->SalesSelect->Text = "" + this->_SaleId;
					 this->Price->Text = "" + this->_Price;
					 this->Date->Text = "" + this->_Date;
					 this->Text = "Редактировать расход";
					 this->SavePaymentButton->Text = "Редактировать";
				 }
				 else
				 {
					 this->SalesSelect->ValueMember = "Id";
					 this->SalesSelect->DisplayMember = "Id";
					 this->SalesSelect->DataSource = msi->GetAllSalesResults();
				 }
			 }
			 catch (Exception ^ e)
			 {
				 MessageBox::Show("Ошибка соединения с базой даных");
			 }
}
};
}
