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
	/// Сводка для ClientForm
	/// </summary>
	public ref class ClientForm : public System::Windows::Forms::Form
	{
	private: int ^ _Id = 0;
	private: System::String ^ _Name;
	public:
		ClientForm(int id, System::String ^ name)
		{
			InitializeComponent();
			this->_Id = id;
			this->_Name = name;

			//
			//TODO: добавьте код конструктора
			//
		}
	public:
		ClientForm(void)
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
		~ClientForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  Id;
	private: System::Windows::Forms::Button^  CancelClientButton;
	protected:

	private: System::Windows::Forms::Button^  SaveClientButton;

	private: System::Windows::Forms::TextBox^  ClientName;

	private: System::Windows::Forms::Label^  ClientTitle;

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
			this->CancelClientButton = (gcnew System::Windows::Forms::Button());
			this->SaveClientButton = (gcnew System::Windows::Forms::Button());
			this->ClientName = (gcnew System::Windows::Forms::TextBox());
			this->ClientTitle = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Id
			// 
			this->Id->Location = System::Drawing::Point(218, 6);
			this->Id->Name = L"Id";
			this->Id->Size = System::Drawing::Size(11, 20);
			this->Id->TabIndex = 9;
			this->Id->Text = L"0";
			this->Id->Visible = false;
			// 
			// CancelClientButton
			// 
			this->CancelClientButton->Location = System::Drawing::Point(126, 51);
			this->CancelClientButton->Name = L"CancelClientButton";
			this->CancelClientButton->Size = System::Drawing::Size(103, 23);
			this->CancelClientButton->TabIndex = 8;
			this->CancelClientButton->Text = L"Отмена";
			this->CancelClientButton->UseVisualStyleBackColor = true;
			this->CancelClientButton->Click += gcnew System::EventHandler(this, &ClientForm::CancelClientButton_Click);
			// 
			// SaveClientButton
			// 
			this->SaveClientButton->Location = System::Drawing::Point(15, 51);
			this->SaveClientButton->Name = L"SaveClientButton";
			this->SaveClientButton->Size = System::Drawing::Size(105, 23);
			this->SaveClientButton->TabIndex = 7;
			this->SaveClientButton->Text = L"Сохранить";
			this->SaveClientButton->UseVisualStyleBackColor = true;
			this->SaveClientButton->Click += gcnew System::EventHandler(this, &ClientForm::SaveClientButton_Click);
			// 
			// ClientName
			// 
			this->ClientName->Location = System::Drawing::Point(15, 25);
			this->ClientName->Name = L"ClientName";
			this->ClientName->Size = System::Drawing::Size(214, 20);
			this->ClientName->TabIndex = 6;
			// 
			// ClientTitle
			// 
			this->ClientTitle->AutoSize = true;
			this->ClientTitle->Location = System::Drawing::Point(12, 9);
			this->ClientTitle->Name = L"ClientTitle";
			this->ClientTitle->Size = System::Drawing::Size(29, 13);
			this->ClientTitle->TabIndex = 5;
			this->ClientTitle->Text = L"Имя";
			// 
			// ClientForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(245, 87);
			this->Controls->Add(this->Id);
			this->Controls->Add(this->CancelClientButton);
			this->Controls->Add(this->SaveClientButton);
			this->Controls->Add(this->ClientName);
			this->Controls->Add(this->ClientTitle);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"ClientForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Добавить клинета";
			this->Load += gcnew System::EventHandler(this, &ClientForm::ClientForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SaveClientButton_Click(System::Object^  sender, System::EventArgs^  e) {
				 MySqlInterface ^ msi;
				 if (!System::String::IsNullOrEmpty(this->ClientName->Text))
				 {
					 msi = gcnew MySqlInterface;
					 msi->AddUpdateСlient(int::Parse(this->Id->Text), this->ClientName->Text);
					 this->Close();
				 }
				 else
				 {
					 MessageBox::Show("Заполните поля");
				 }
	}
private: System::Void ClientForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 if (*this->_Id > 0)
			 {
				 this->Text = "Редактировать клиента";
				 Id->Text = this->_Id->ToString();
				 ClientName->Text = this->_Name;
				 SaveClientButton->Text = "Редактировать";
			 }
}
private: System::Void CancelClientButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
}
};
}
