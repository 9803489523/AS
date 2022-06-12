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
	/// Сводка для ExpenceForm
	/// </summary>
	public ref class ExpenceForm : public System::Windows::Forms::Form
	{
	private: int ^ _Id = 0;
	private: System::String ^ _Name;
	private: System::Boolean ^ _IsIncome;
	private: double ^ _Plan = 0.0;
	public:
		ExpenceForm(int id, System::String ^ name, System::Boolean ^ isIncome, double plan)
		{
			InitializeComponent();
			this->_Id = id;
			this->_Name = name;
			this->_IsIncome = isIncome;
			this->_Plan = plan;

			//
			//TODO: добавьте код конструктора
			//
		}
	public:
		ExpenceForm(void)
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
		~ExpenceForm()
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


	private: System::Windows::Forms::TextBox^  ExpenceName;

	private: System::Windows::Forms::Label^  ExpenceTitle;

	private: System::Windows::Forms::CheckBox^  IsIncome;
	private: System::Windows::Forms::TextBox^  Plan;

	private: System::Windows::Forms::Label^  PlanTitle;

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
			this->ExpenceName = (gcnew System::Windows::Forms::TextBox());
			this->ExpenceTitle = (gcnew System::Windows::Forms::Label());
			this->IsIncome = (gcnew System::Windows::Forms::CheckBox());
			this->Plan = (gcnew System::Windows::Forms::TextBox());
			this->PlanTitle = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Id
			// 
			this->Id->Location = System::Drawing::Point(215, 5);
			this->Id->Name = L"Id";
			this->Id->Size = System::Drawing::Size(11, 20);
			this->Id->TabIndex = 9;
			this->Id->Text = L"0";
			this->Id->Visible = false;
			// 
			// CancelExpenceButton
			// 
			this->CancelExpenceButton->Location = System::Drawing::Point(123, 73);
			this->CancelExpenceButton->Name = L"CancelExpenceButton";
			this->CancelExpenceButton->Size = System::Drawing::Size(103, 23);
			this->CancelExpenceButton->TabIndex = 8;
			this->CancelExpenceButton->Text = L"Отмена";
			this->CancelExpenceButton->UseVisualStyleBackColor = true;
			this->CancelExpenceButton->Click += gcnew System::EventHandler(this, &ExpenceForm::CancelExpenceButton_Click);
			// 
			// SaveExpenceButton
			// 
			this->SaveExpenceButton->Location = System::Drawing::Point(12, 73);
			this->SaveExpenceButton->Name = L"SaveExpenceButton";
			this->SaveExpenceButton->Size = System::Drawing::Size(105, 23);
			this->SaveExpenceButton->TabIndex = 7;
			this->SaveExpenceButton->Text = L"Сохранить";
			this->SaveExpenceButton->UseVisualStyleBackColor = true;
			this->SaveExpenceButton->Click += gcnew System::EventHandler(this, &ExpenceForm::SaveBranchButton_Click);
			// 
			// ExpenceName
			// 
			this->ExpenceName->Location = System::Drawing::Point(12, 24);
			this->ExpenceName->Name = L"ExpenceName";
			this->ExpenceName->Size = System::Drawing::Size(214, 20);
			this->ExpenceName->TabIndex = 6;
			// 
			// ExpenceTitle
			// 
			this->ExpenceTitle->AutoSize = true;
			this->ExpenceTitle->Location = System::Drawing::Point(9, 8);
			this->ExpenceTitle->Name = L"ExpenceTitle";
			this->ExpenceTitle->Size = System::Drawing::Size(83, 13);
			this->ExpenceTitle->TabIndex = 5;
			this->ExpenceTitle->Text = L"Наименование";
			// 
			// IsIncome
			// 
			this->IsIncome->AutoSize = true;
			this->IsIncome->Location = System::Drawing::Point(168, 50);
			this->IsIncome->Name = L"IsIncome";
			this->IsIncome->Size = System::Drawing::Size(58, 17);
			this->IsIncome->TabIndex = 11;
			this->IsIncome->Text = L"Доход";
			this->IsIncome->UseVisualStyleBackColor = true;
			// 
			// Plan
			// 
			this->Plan->Location = System::Drawing::Point(48, 47);
			this->Plan->Name = L"Plan";
			this->Plan->Size = System::Drawing::Size(114, 20);
			this->Plan->TabIndex = 13;
			// 
			// PlanTitle
			// 
			this->PlanTitle->AutoSize = true;
			this->PlanTitle->Location = System::Drawing::Point(9, 51);
			this->PlanTitle->Name = L"PlanTitle";
			this->PlanTitle->Size = System::Drawing::Size(33, 13);
			this->PlanTitle->TabIndex = 12;
			this->PlanTitle->Text = L"План";
			// 
			// ExpenceForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(241, 105);
			this->Controls->Add(this->Plan);
			this->Controls->Add(this->PlanTitle);
			this->Controls->Add(this->IsIncome);
			this->Controls->Add(this->Id);
			this->Controls->Add(this->CancelExpenceButton);
			this->Controls->Add(this->SaveExpenceButton);
			this->Controls->Add(this->ExpenceName);
			this->Controls->Add(this->ExpenceTitle);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"ExpenceForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Добавить расход";
			this->Load += gcnew System::EventHandler(this, &ExpenceForm::ExpenceForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SaveBranchButton_Click(System::Object^  sender, System::EventArgs^  e) {
				 MySqlInterface ^ msi;
				 if (!System::String::IsNullOrEmpty(this->ExpenceName->Text) && !System::String::IsNullOrEmpty(this->Plan->Text))
				 {
					 msi = gcnew MySqlInterface;
					 msi->AddUpdateExpence(int::Parse(this->Id->Text), this->ExpenceName->Text, this->IsIncome->Checked, double::Parse(this->Plan->Text));
					 this->Close();
				 }
				 else
				 {
					 MessageBox::Show("Заполните поля");
				 }
	}
private: System::Void CancelExpenceButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
}
private: System::Void ExpenceForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 if (*this->_Id > 0)
			 {
				 this->Text = "Редактировать расход";
				 Id->Text = this->_Id->ToString();
				 ExpenceName->Text = this->_Name;
				 IsIncome->Checked = *this->_IsIncome;
				 Plan->Text = this->_Plan->ToString();
				 SaveExpenceButton->Text = "Редактировать";
			 }
}
};
}
