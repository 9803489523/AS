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
	/// Сводка для BranchForm
	/// </summary>
	public ref class BranchForm : public System::Windows::Forms::Form
	{
	private: int ^ _Id = 0;
	private: System::String ^ _Name;
	public:
		BranchForm(int id, System::String ^ name)
		{
			InitializeComponent();
			this->_Id = id;
			this->_Name = name;

			//
			//TODO: добавьте код конструктора
			//
		}

	public:
		BranchForm(void)
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
		~BranchForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  BranchTitle;
	private: System::Windows::Forms::TextBox^  BranchName;
	protected:

	private: System::Windows::Forms::Button^  SaveBranchButton;
	private: System::Windows::Forms::Button^  CancelBranchButton;
	private: System::Windows::Forms::TextBox^  Id;



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
			this->BranchName = (gcnew System::Windows::Forms::TextBox());
			this->SaveBranchButton = (gcnew System::Windows::Forms::Button());
			this->CancelBranchButton = (gcnew System::Windows::Forms::Button());
			this->Id = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// BranchTitle
			// 
			this->BranchTitle->AutoSize = true;
			this->BranchTitle->Location = System::Drawing::Point(12, 9);
			this->BranchTitle->Name = L"BranchTitle";
			this->BranchTitle->Size = System::Drawing::Size(83, 13);
			this->BranchTitle->TabIndex = 0;
			this->BranchTitle->Text = L"Наименование";
			// 
			// BranchName
			// 
			this->BranchName->Location = System::Drawing::Point(15, 25);
			this->BranchName->Name = L"BranchName";
			this->BranchName->Size = System::Drawing::Size(214, 20);
			this->BranchName->TabIndex = 1;
			// 
			// SaveBranchButton
			// 
			this->SaveBranchButton->Location = System::Drawing::Point(15, 51);
			this->SaveBranchButton->Name = L"SaveBranchButton";
			this->SaveBranchButton->Size = System::Drawing::Size(105, 23);
			this->SaveBranchButton->TabIndex = 2;
			this->SaveBranchButton->Text = L"Сохранить";
			this->SaveBranchButton->UseVisualStyleBackColor = true;
			this->SaveBranchButton->Click += gcnew System::EventHandler(this, &BranchForm::SaveBranchButton_Click);
			// 
			// CancelBranchButton
			// 
			this->CancelBranchButton->Location = System::Drawing::Point(126, 51);
			this->CancelBranchButton->Name = L"CancelBranchButton";
			this->CancelBranchButton->Size = System::Drawing::Size(103, 23);
			this->CancelBranchButton->TabIndex = 3;
			this->CancelBranchButton->Text = L"Отмена";
			this->CancelBranchButton->UseVisualStyleBackColor = true;
			this->CancelBranchButton->Click += gcnew System::EventHandler(this, &BranchForm::CancelBranchButton_Click);
			// 
			// Id
			// 
			this->Id->Location = System::Drawing::Point(218, 6);
			this->Id->Name = L"Id";
			this->Id->Size = System::Drawing::Size(11, 20);
			this->Id->TabIndex = 4;
			this->Id->Text = L"0";
			this->Id->Visible = false;
			// 
			// BranchForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(250, 99);
			this->Controls->Add(this->Id);
			this->Controls->Add(this->CancelBranchButton);
			this->Controls->Add(this->SaveBranchButton);
			this->Controls->Add(this->BranchName);
			this->Controls->Add(this->BranchTitle);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"BranchForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Добавить филиал";
			this->Load += gcnew System::EventHandler(this, &BranchForm::BranchForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SaveBranchButton_Click(System::Object^  sender, System::EventArgs^  e) {
				 MySqlInterface ^ msi;
				 if (!System::String::IsNullOrEmpty(this->BranchName->Text))
				 {
					 msi = gcnew MySqlInterface;
					 msi->AddUpdateBranch(int::Parse(this->Id->Text), this->BranchName->Text);
					 this->Close();
				 }
				 else
				 {
					 MessageBox::Show("Заполните поля");
				 }
	}
	private: System::Void CancelBranchButton_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
	}
private: System::Void BranchForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 if (*this->_Id > 0)
			 {
				 this->Text = "Редактировать филиал";
				 Id->Text = this->_Id->ToString();
				 BranchName->Text = this->_Name;
				 SaveBranchButton->Text = "Редактировать";
			 }
}
};
}
