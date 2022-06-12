#pragma once

namespace Stock {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для SaleItemForm
	/// </summary>
	public ref class SaleItemForm : public System::Windows::Forms::Form
	{
	public: int Qty = -1;
	private: int _Qty = 0;
	public:
		SaleItemForm(int qty)
		{
			InitializeComponent();
			this->_Qty = qty;
			//
			//TODO: добавьте код конструктора
			//
		}
	public:
		SaleItemForm(void)
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
		~SaleItemForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  CountTitle;
	private: System::Windows::Forms::TextBox^  Count;
	private: System::Windows::Forms::Button^  SaveCountButton;
	private: System::Windows::Forms::Button^  CancelCountButton;
	protected:

	protected:




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
			this->CountTitle = (gcnew System::Windows::Forms::Label());
			this->Count = (gcnew System::Windows::Forms::TextBox());
			this->SaveCountButton = (gcnew System::Windows::Forms::Button());
			this->CancelCountButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// CountTitle
			// 
			this->CountTitle->AutoSize = true;
			this->CountTitle->Location = System::Drawing::Point(13, 13);
			this->CountTitle->Name = L"CountTitle";
			this->CountTitle->Size = System::Drawing::Size(66, 13);
			this->CountTitle->TabIndex = 0;
			this->CountTitle->Text = L"Количество";
			// 
			// Count
			// 
			this->Count->Location = System::Drawing::Point(85, 10);
			this->Count->Name = L"Count";
			this->Count->Size = System::Drawing::Size(100, 20);
			this->Count->TabIndex = 1;
			// 
			// SaveCountButton
			// 
			this->SaveCountButton->Location = System::Drawing::Point(12, 36);
			this->SaveCountButton->Name = L"SaveCountButton";
			this->SaveCountButton->Size = System::Drawing::Size(81, 23);
			this->SaveCountButton->TabIndex = 2;
			this->SaveCountButton->Text = L"ОК";
			this->SaveCountButton->UseVisualStyleBackColor = true;
			this->SaveCountButton->Click += gcnew System::EventHandler(this, &SaleItemForm::SaveCountButton_Click);
			// 
			// CancelCountButton
			// 
			this->CancelCountButton->Location = System::Drawing::Point(99, 36);
			this->CancelCountButton->Name = L"CancelCountButton";
			this->CancelCountButton->Size = System::Drawing::Size(86, 23);
			this->CancelCountButton->TabIndex = 3;
			this->CancelCountButton->Text = L"Отмена";
			this->CancelCountButton->UseVisualStyleBackColor = true;
			this->CancelCountButton->Click += gcnew System::EventHandler(this, &SaleItemForm::CancelCountButton_Click);
			// 
			// SaleItemForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(202, 72);
			this->Controls->Add(this->CancelCountButton);
			this->Controls->Add(this->SaveCountButton);
			this->Controls->Add(this->Count);
			this->Controls->Add(this->CountTitle);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"SaleItemForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Единицы товара";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SaveCountButton_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (System::String::IsNullOrEmpty(this->Count->Text))
				 {
					 MessageBox::Show("Введите даные");
				 }
				 else if (int::Parse(this->Count->Text) > this->_Qty)
				 {
					 MessageBox::Show("Число превышает количество оставшихся единиц товара");
				 }
				 else
				 {
					 this->Qty = int::Parse(this->Count->Text);
					 this->Close();
				 }
	}
private: System::Void CancelCountButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
}
};
}
