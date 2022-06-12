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
	/// Сводка для ItemForm
	/// </summary>
	public ref class ItemForm : public System::Windows::Forms::Form
	{
	private: int ^ _Id = 0;
	private: System::String ^ _Name;
	public:
		ItemForm(int id, System::String ^ name)
		{
			InitializeComponent();
			this->_Id = id;
			this->_Name = name;

			//
			//TODO: добавьте код конструктора
			//
		}
	public:
		ItemForm(void)
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
		~ItemForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  Id;
	private: System::Windows::Forms::Button^  CancelItemButton;
	protected:

	private: System::Windows::Forms::Button^  SaveItemButton;

	private: System::Windows::Forms::TextBox^  ItemName;

	private: System::Windows::Forms::Label^  ItemTitle;


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
			this->CancelItemButton = (gcnew System::Windows::Forms::Button());
			this->SaveItemButton = (gcnew System::Windows::Forms::Button());
			this->ItemName = (gcnew System::Windows::Forms::TextBox());
			this->ItemTitle = (gcnew System::Windows::Forms::Label());
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
			// CancelItemButton
			// 
			this->CancelItemButton->Location = System::Drawing::Point(126, 51);
			this->CancelItemButton->Name = L"CancelItemButton";
			this->CancelItemButton->Size = System::Drawing::Size(103, 23);
			this->CancelItemButton->TabIndex = 8;
			this->CancelItemButton->Text = L"Отмена";
			this->CancelItemButton->UseVisualStyleBackColor = true;
			this->CancelItemButton->Click += gcnew System::EventHandler(this, &ItemForm::CancelItemButton_Click);
			// 
			// SaveItemButton
			// 
			this->SaveItemButton->Location = System::Drawing::Point(15, 51);
			this->SaveItemButton->Name = L"SaveItemButton";
			this->SaveItemButton->Size = System::Drawing::Size(105, 23);
			this->SaveItemButton->TabIndex = 7;
			this->SaveItemButton->Text = L"Сохранить";
			this->SaveItemButton->UseVisualStyleBackColor = true;
			this->SaveItemButton->Click += gcnew System::EventHandler(this, &ItemForm::SaveItemButton_Click);
			// 
			// ItemName
			// 
			this->ItemName->Location = System::Drawing::Point(15, 25);
			this->ItemName->Name = L"ItemName";
			this->ItemName->Size = System::Drawing::Size(214, 20);
			this->ItemName->TabIndex = 6;
			// 
			// ItemTitle
			// 
			this->ItemTitle->AutoSize = true;
			this->ItemTitle->Location = System::Drawing::Point(12, 9);
			this->ItemTitle->Name = L"ItemTitle";
			this->ItemTitle->Size = System::Drawing::Size(83, 13);
			this->ItemTitle->TabIndex = 5;
			this->ItemTitle->Text = L"Наименование";
			// 
			// ItemForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(245, 83);
			this->Controls->Add(this->Id);
			this->Controls->Add(this->CancelItemButton);
			this->Controls->Add(this->SaveItemButton);
			this->Controls->Add(this->ItemName);
			this->Controls->Add(this->ItemTitle);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"ItemForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Добавить товар";
			this->Load += gcnew System::EventHandler(this, &ItemForm::ItemForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SaveItemButton_Click(System::Object^  sender, System::EventArgs^  e) {
				 MySqlInterface ^ msi;
				 if (!System::String::IsNullOrEmpty(this->ItemName->Text))
				 {
					 msi = gcnew MySqlInterface;
					 msi->AddUpdateItem(int::Parse(this->Id->Text), this->ItemName->Text);
					 this->Close();
				 }
				 else
				 {
					 MessageBox::Show("Заполните поля");
				 }
	}
private: System::Void CancelItemButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
}
private: System::Void ItemForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 if (*this->_Id > 0)
			 {
				 this->Text = "Редактировать товар";
				 Id->Text = this->_Id->ToString();
				 ItemName->Text = this->_Name;
				 SaveItemButton->Text = "Редактировать";
			 }
}
};
}
