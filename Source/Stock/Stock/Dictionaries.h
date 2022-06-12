#pragma once
#include "BranchForm.h"
#include "ItemForm.h"
#include "ExpenceForm.h"
#include "ClientForm.h"

namespace Stock {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Dictionaries
	/// </summary>
	public ref class Dictionaries : public System::Windows::Forms::Form
	{
	public:
		Dictionaries(void)
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
		~Dictionaries()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  DictionariesTab;
	protected:

	private: System::Windows::Forms::TabPage^  Branches;
	private: System::Windows::Forms::TabPage^  Items;
	private: System::Windows::Forms::DataGridView^  ViewBranches;

	private: System::Windows::Forms::Panel^  BranchesPanel;
	private: System::Windows::Forms::Button^  DeleteBranch;
	private: System::Windows::Forms::Button^  EditBranch;
	private: System::Windows::Forms::Button^  AddBranch;
	private: System::Windows::Forms::DataGridView^  ViewItem;
	private: System::Windows::Forms::Panel^  ItemsPanel;


	private: System::Windows::Forms::Button^  DeleteItem;
	private: System::Windows::Forms::Button^  EditItem;
	private: System::Windows::Forms::Button^  AddItem;
	private: System::Windows::Forms::TabPage^  Expences;
	private: System::Windows::Forms::DataGridView^  ViewExpences;
	private: System::Windows::Forms::Panel^  ExpencesPanel;



	private: System::Windows::Forms::Button^  DeleteExpence;

	private: System::Windows::Forms::Button^  EditExpence;

	private: System::Windows::Forms::Button^  AddExpence;
	private: System::Windows::Forms::TabPage^  Client;
	private: System::Windows::Forms::DataGridView^  ViewClients;
	private: System::Windows::Forms::Panel^  ClientsPanel;

	private: System::Windows::Forms::Button^  DeleteClient;

	private: System::Windows::Forms::Button^  EditClient;

	private: System::Windows::Forms::Button^  AddClient;

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
			this->DictionariesTab = (gcnew System::Windows::Forms::TabControl());
			this->Branches = (gcnew System::Windows::Forms::TabPage());
			this->ViewBranches = (gcnew System::Windows::Forms::DataGridView());
			this->BranchesPanel = (gcnew System::Windows::Forms::Panel());
			this->DeleteBranch = (gcnew System::Windows::Forms::Button());
			this->EditBranch = (gcnew System::Windows::Forms::Button());
			this->AddBranch = (gcnew System::Windows::Forms::Button());
			this->Items = (gcnew System::Windows::Forms::TabPage());
			this->ViewItem = (gcnew System::Windows::Forms::DataGridView());
			this->ItemsPanel = (gcnew System::Windows::Forms::Panel());
			this->DeleteItem = (gcnew System::Windows::Forms::Button());
			this->EditItem = (gcnew System::Windows::Forms::Button());
			this->AddItem = (gcnew System::Windows::Forms::Button());
			this->Expences = (gcnew System::Windows::Forms::TabPage());
			this->ViewExpences = (gcnew System::Windows::Forms::DataGridView());
			this->ExpencesPanel = (gcnew System::Windows::Forms::Panel());
			this->DeleteExpence = (gcnew System::Windows::Forms::Button());
			this->EditExpence = (gcnew System::Windows::Forms::Button());
			this->AddExpence = (gcnew System::Windows::Forms::Button());
			this->Client = (gcnew System::Windows::Forms::TabPage());
			this->ViewClients = (gcnew System::Windows::Forms::DataGridView());
			this->ClientsPanel = (gcnew System::Windows::Forms::Panel());
			this->DeleteClient = (gcnew System::Windows::Forms::Button());
			this->EditClient = (gcnew System::Windows::Forms::Button());
			this->AddClient = (gcnew System::Windows::Forms::Button());
			this->DictionariesTab->SuspendLayout();
			this->Branches->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ViewBranches))->BeginInit();
			this->BranchesPanel->SuspendLayout();
			this->Items->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ViewItem))->BeginInit();
			this->ItemsPanel->SuspendLayout();
			this->Expences->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ViewExpences))->BeginInit();
			this->ExpencesPanel->SuspendLayout();
			this->Client->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ViewClients))->BeginInit();
			this->ClientsPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// DictionariesTab
			// 
			this->DictionariesTab->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->DictionariesTab->Controls->Add(this->Branches);
			this->DictionariesTab->Controls->Add(this->Items);
			this->DictionariesTab->Controls->Add(this->Expences);
			this->DictionariesTab->Controls->Add(this->Client);
			this->DictionariesTab->Location = System::Drawing::Point(12, 12);
			this->DictionariesTab->Name = L"DictionariesTab";
			this->DictionariesTab->SelectedIndex = 0;
			this->DictionariesTab->Size = System::Drawing::Size(357, 304);
			this->DictionariesTab->TabIndex = 0;
			this->DictionariesTab->SelectedIndexChanged += gcnew System::EventHandler(this, &Dictionaries::OnSelectedIndexChanged);
			// 
			// Branches
			// 
			this->Branches->Controls->Add(this->ViewBranches);
			this->Branches->Controls->Add(this->BranchesPanel);
			this->Branches->Location = System::Drawing::Point(4, 22);
			this->Branches->Name = L"Branches";
			this->Branches->Padding = System::Windows::Forms::Padding(3);
			this->Branches->Size = System::Drawing::Size(349, 278);
			this->Branches->TabIndex = 0;
			this->Branches->Text = L"Филиалы";
			this->Branches->UseVisualStyleBackColor = true;
			// 
			// ViewBranches
			// 
			this->ViewBranches->AllowUserToAddRows = false;
			this->ViewBranches->AllowUserToDeleteRows = false;
			this->ViewBranches->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ViewBranches->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->ViewBranches->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ViewBranches->Location = System::Drawing::Point(6, 6);
			this->ViewBranches->MultiSelect = false;
			this->ViewBranches->Name = L"ViewBranches";
			this->ViewBranches->ReadOnly = true;
			this->ViewBranches->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->ViewBranches->Size = System::Drawing::Size(336, 223);
			this->ViewBranches->TabIndex = 3;
			// 
			// BranchesPanel
			// 
			this->BranchesPanel->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->BranchesPanel->Controls->Add(this->DeleteBranch);
			this->BranchesPanel->Controls->Add(this->EditBranch);
			this->BranchesPanel->Controls->Add(this->AddBranch);
			this->BranchesPanel->Location = System::Drawing::Point(6, 234);
			this->BranchesPanel->Name = L"BranchesPanel";
			this->BranchesPanel->Size = System::Drawing::Size(336, 38);
			this->BranchesPanel->TabIndex = 0;
			// 
			// DeleteBranch
			// 
			this->DeleteBranch->Location = System::Drawing::Point(224, 3);
			this->DeleteBranch->Name = L"DeleteBranch";
			this->DeleteBranch->Size = System::Drawing::Size(109, 32);
			this->DeleteBranch->TabIndex = 2;
			this->DeleteBranch->Text = L"Удалить";
			this->DeleteBranch->UseVisualStyleBackColor = true;
			this->DeleteBranch->Click += gcnew System::EventHandler(this, &Dictionaries::DeleteBranch_Click);
			// 
			// EditBranch
			// 
			this->EditBranch->Location = System::Drawing::Point(116, 3);
			this->EditBranch->Name = L"EditBranch";
			this->EditBranch->Size = System::Drawing::Size(102, 32);
			this->EditBranch->TabIndex = 1;
			this->EditBranch->Text = L"Редактировать";
			this->EditBranch->UseVisualStyleBackColor = true;
			this->EditBranch->Click += gcnew System::EventHandler(this, &Dictionaries::EditBranch_Click);
			// 
			// AddBranch
			// 
			this->AddBranch->Location = System::Drawing::Point(3, 3);
			this->AddBranch->Name = L"AddBranch";
			this->AddBranch->Size = System::Drawing::Size(107, 32);
			this->AddBranch->TabIndex = 0;
			this->AddBranch->Text = L"Добавить";
			this->AddBranch->UseVisualStyleBackColor = true;
			this->AddBranch->Click += gcnew System::EventHandler(this, &Dictionaries::AddBranch_Click);
			// 
			// Items
			// 
			this->Items->Controls->Add(this->ViewItem);
			this->Items->Controls->Add(this->ItemsPanel);
			this->Items->Location = System::Drawing::Point(4, 22);
			this->Items->Name = L"Items";
			this->Items->Padding = System::Windows::Forms::Padding(3);
			this->Items->Size = System::Drawing::Size(349, 278);
			this->Items->TabIndex = 1;
			this->Items->Text = L"Товары";
			this->Items->UseVisualStyleBackColor = true;
			// 
			// ViewItem
			// 
			this->ViewItem->AllowUserToAddRows = false;
			this->ViewItem->AllowUserToDeleteRows = false;
			this->ViewItem->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ViewItem->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->ViewItem->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ViewItem->Location = System::Drawing::Point(6, 6);
			this->ViewItem->MultiSelect = false;
			this->ViewItem->Name = L"ViewItem";
			this->ViewItem->ReadOnly = true;
			this->ViewItem->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->ViewItem->Size = System::Drawing::Size(336, 223);
			this->ViewItem->TabIndex = 2;
			// 
			// ItemsPanel
			// 
			this->ItemsPanel->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->ItemsPanel->Controls->Add(this->DeleteItem);
			this->ItemsPanel->Controls->Add(this->EditItem);
			this->ItemsPanel->Controls->Add(this->AddItem);
			this->ItemsPanel->Location = System::Drawing::Point(6, 234);
			this->ItemsPanel->Name = L"ItemsPanel";
			this->ItemsPanel->Size = System::Drawing::Size(336, 38);
			this->ItemsPanel->TabIndex = 1;
			// 
			// DeleteItem
			// 
			this->DeleteItem->Location = System::Drawing::Point(224, 3);
			this->DeleteItem->Name = L"DeleteItem";
			this->DeleteItem->Size = System::Drawing::Size(109, 32);
			this->DeleteItem->TabIndex = 2;
			this->DeleteItem->Text = L"Удалить";
			this->DeleteItem->UseVisualStyleBackColor = true;
			this->DeleteItem->Click += gcnew System::EventHandler(this, &Dictionaries::DeleteItem_Click);
			// 
			// EditItem
			// 
			this->EditItem->Location = System::Drawing::Point(116, 3);
			this->EditItem->Name = L"EditItem";
			this->EditItem->Size = System::Drawing::Size(102, 32);
			this->EditItem->TabIndex = 1;
			this->EditItem->Text = L"Редактировать";
			this->EditItem->UseVisualStyleBackColor = true;
			this->EditItem->Click += gcnew System::EventHandler(this, &Dictionaries::EditItem_Click);
			// 
			// AddItem
			// 
			this->AddItem->Location = System::Drawing::Point(3, 3);
			this->AddItem->Name = L"AddItem";
			this->AddItem->Size = System::Drawing::Size(107, 32);
			this->AddItem->TabIndex = 0;
			this->AddItem->Text = L"Добавить";
			this->AddItem->UseVisualStyleBackColor = true;
			this->AddItem->Click += gcnew System::EventHandler(this, &Dictionaries::AddItem_Click);
			// 
			// Expences
			// 
			this->Expences->Controls->Add(this->ViewExpences);
			this->Expences->Controls->Add(this->ExpencesPanel);
			this->Expences->Location = System::Drawing::Point(4, 22);
			this->Expences->Name = L"Expences";
			this->Expences->Size = System::Drawing::Size(349, 278);
			this->Expences->TabIndex = 2;
			this->Expences->Text = L"Расходы";
			this->Expences->UseVisualStyleBackColor = true;
			// 
			// ViewExpences
			// 
			this->ViewExpences->AllowUserToAddRows = false;
			this->ViewExpences->AllowUserToDeleteRows = false;
			this->ViewExpences->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ViewExpences->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->ViewExpences->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ViewExpences->Location = System::Drawing::Point(6, 6);
			this->ViewExpences->MultiSelect = false;
			this->ViewExpences->Name = L"ViewExpences";
			this->ViewExpences->ReadOnly = true;
			this->ViewExpences->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->ViewExpences->Size = System::Drawing::Size(336, 223);
			this->ViewExpences->TabIndex = 5;
			// 
			// ExpencesPanel
			// 
			this->ExpencesPanel->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->ExpencesPanel->Controls->Add(this->DeleteExpence);
			this->ExpencesPanel->Controls->Add(this->EditExpence);
			this->ExpencesPanel->Controls->Add(this->AddExpence);
			this->ExpencesPanel->Location = System::Drawing::Point(6, 234);
			this->ExpencesPanel->Name = L"ExpencesPanel";
			this->ExpencesPanel->Size = System::Drawing::Size(336, 38);
			this->ExpencesPanel->TabIndex = 4;
			// 
			// DeleteExpence
			// 
			this->DeleteExpence->Location = System::Drawing::Point(224, 3);
			this->DeleteExpence->Name = L"DeleteExpence";
			this->DeleteExpence->Size = System::Drawing::Size(109, 32);
			this->DeleteExpence->TabIndex = 2;
			this->DeleteExpence->Text = L"Удалить";
			this->DeleteExpence->UseVisualStyleBackColor = true;
			this->DeleteExpence->Click += gcnew System::EventHandler(this, &Dictionaries::DeleteExpence_Click);
			// 
			// EditExpence
			// 
			this->EditExpence->Location = System::Drawing::Point(116, 3);
			this->EditExpence->Name = L"EditExpence";
			this->EditExpence->Size = System::Drawing::Size(102, 32);
			this->EditExpence->TabIndex = 1;
			this->EditExpence->Text = L"Редактировать";
			this->EditExpence->UseVisualStyleBackColor = true;
			this->EditExpence->Click += gcnew System::EventHandler(this, &Dictionaries::EditExpence_Click);
			// 
			// AddExpence
			// 
			this->AddExpence->Location = System::Drawing::Point(3, 3);
			this->AddExpence->Name = L"AddExpence";
			this->AddExpence->Size = System::Drawing::Size(107, 32);
			this->AddExpence->TabIndex = 0;
			this->AddExpence->Text = L"Добавить";
			this->AddExpence->UseVisualStyleBackColor = true;
			this->AddExpence->Click += gcnew System::EventHandler(this, &Dictionaries::AddExpence_Click);
			// 
			// Client
			// 
			this->Client->Controls->Add(this->ViewClients);
			this->Client->Controls->Add(this->ClientsPanel);
			this->Client->Location = System::Drawing::Point(4, 22);
			this->Client->Name = L"Client";
			this->Client->Size = System::Drawing::Size(349, 278);
			this->Client->TabIndex = 3;
			this->Client->Text = L"Клиенты";
			this->Client->UseVisualStyleBackColor = true;
			// 
			// ViewClients
			// 
			this->ViewClients->AllowUserToAddRows = false;
			this->ViewClients->AllowUserToDeleteRows = false;
			this->ViewClients->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ViewClients->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->ViewClients->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ViewClients->Location = System::Drawing::Point(6, 6);
			this->ViewClients->MultiSelect = false;
			this->ViewClients->Name = L"ViewClients";
			this->ViewClients->ReadOnly = true;
			this->ViewClients->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->ViewClients->Size = System::Drawing::Size(336, 223);
			this->ViewClients->TabIndex = 7;
			// 
			// ClientsPanel
			// 
			this->ClientsPanel->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->ClientsPanel->Controls->Add(this->DeleteClient);
			this->ClientsPanel->Controls->Add(this->EditClient);
			this->ClientsPanel->Controls->Add(this->AddClient);
			this->ClientsPanel->Location = System::Drawing::Point(6, 234);
			this->ClientsPanel->Name = L"ClientsPanel";
			this->ClientsPanel->Size = System::Drawing::Size(336, 38);
			this->ClientsPanel->TabIndex = 6;
			// 
			// DeleteClient
			// 
			this->DeleteClient->Location = System::Drawing::Point(224, 3);
			this->DeleteClient->Name = L"DeleteClient";
			this->DeleteClient->Size = System::Drawing::Size(109, 32);
			this->DeleteClient->TabIndex = 2;
			this->DeleteClient->Text = L"Удалить";
			this->DeleteClient->UseVisualStyleBackColor = true;
			this->DeleteClient->Click += gcnew System::EventHandler(this, &Dictionaries::DeleteClient_Click);
			// 
			// EditClient
			// 
			this->EditClient->Location = System::Drawing::Point(116, 3);
			this->EditClient->Name = L"EditClient";
			this->EditClient->Size = System::Drawing::Size(102, 32);
			this->EditClient->TabIndex = 1;
			this->EditClient->Text = L"Редактировать";
			this->EditClient->UseVisualStyleBackColor = true;
			this->EditClient->Click += gcnew System::EventHandler(this, &Dictionaries::EditClient_Click);
			// 
			// AddClient
			// 
			this->AddClient->Location = System::Drawing::Point(3, 3);
			this->AddClient->Name = L"AddClient";
			this->AddClient->Size = System::Drawing::Size(107, 32);
			this->AddClient->TabIndex = 0;
			this->AddClient->Text = L"Добавить";
			this->AddClient->UseVisualStyleBackColor = true;
			this->AddClient->Click += gcnew System::EventHandler(this, &Dictionaries::AddClient_Click);
			// 
			// Dictionaries
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(381, 328);
			this->Controls->Add(this->DictionariesTab);
			this->MinimumSize = System::Drawing::Size(397, 367);
			this->Name = L"Dictionaries";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Справочники";
			this->Load += gcnew System::EventHandler(this, &Dictionaries::Dictionaries_Load);
			this->DictionariesTab->ResumeLayout(false);
			this->Branches->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ViewBranches))->EndInit();
			this->BranchesPanel->ResumeLayout(false);
			this->Items->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ViewItem))->EndInit();
			this->ItemsPanel->ResumeLayout(false);
			this->Expences->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ViewExpences))->EndInit();
			this->ExpencesPanel->ResumeLayout(false);
			this->Client->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ViewClients))->EndInit();
			this->ClientsPanel->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void AddBranch_Click(System::Object^  sender, System::EventArgs^  e) {
				 BranchForm ^ bf = gcnew BranchForm;
				 bf->ShowDialog();
				 RefreshBranches();
	}
	private:System::Void RefreshBranches()
	{
				MySqlInterface ^ msi = gcnew MySqlInterface;
				this->ViewBranches->DataSource = msi->GetAllBranchesResults();
				this->ViewBranches->Columns["BranchName"]->HeaderText = "Наименование";
				this->ViewBranches->Columns["Id"]->Visible = false;
	}
	private:System::Void RefreshItems()
	{
				MySqlInterface ^ msi = gcnew MySqlInterface;
				this->ViewItem->DataSource = msi->GetAllItemsResults();
				this->ViewItem->Columns["ItemName"]->HeaderText = "Наименование";
				this->ViewItem->Columns["Id"]->Visible = false;
	}
	private:System::Void RefreshExpences()
	{
				MySqlInterface ^ msi = gcnew MySqlInterface;
				this->ViewExpences->DataSource = msi->GetAllExpencesResults();
				this->ViewExpences->Columns["ArticleName"]->HeaderText = "Наименование";
				this->ViewExpences->Columns["isIncome"]->Visible = false;
				this->ViewExpences->Columns["Plan"]->HeaderText = "План";
				this->ViewExpences->Columns["Id"]->Visible = false;

				if (!ViewExpences->Columns->Contains("Income"))
				{
					ViewExpences->Columns->Add("Income", "Доход");
				}
				for (int i = 0; i < ViewExpences->Rows->Count; i++)
				{
					ViewExpences->Rows[i]->Cells["Income"]->Value = ViewExpences->Rows[i]->Cells["isIncome"]->Value->ToString() == "False" ? "Нет" : "Да";
				}
	}
	private:System::Void RefreshClients()
	{
				MySqlInterface ^ msi = gcnew MySqlInterface;
				this->ViewClients->DataSource = msi->GetAllClientsResults();
				this->ViewClients->Columns["ClientName"]->HeaderText = "Имя";
				this->ViewClients->Columns["Id"]->Visible = false;
	}
	private: System::Void Dictionaries_Load(System::Object^  sender, System::EventArgs^  e) {
				 try
				 {
					 RefreshBranches();
				 }
				 catch (Exception ^ e)
				 {
					 MessageBox::Show("Ошибка соединения с базой даных");
				 }
	}

	private: System::Void EditBranch_Click(System::Object^  sender, System::EventArgs^  e) {
				 DataGridViewRow ^ row;
				 try
				 {
					 row = ViewBranches->SelectedRows[0];
					 BranchForm ^ editForm = gcnew BranchForm(System::Int32::Parse(row->Cells["Id"]->Value->ToString()), row->Cells["BranchName"]->Value->ToString());
					 editForm->ShowDialog();
					 RefreshBranches();
				 }
				 catch (Exception ^ ex)
				 {
					 MessageBox::Show("Выберите филиал");
				 }
	}
	private: System::Void DeleteBranch_Click(System::Object^  sender, System::EventArgs^  e) {
				 System::Windows::Forms::DialogResult ^ alert = MessageBox::Show("Вы уверены, что хотите удалить филиал?\r\nТакже будут удалены все данные по этому филиалу.", "Удаление филиала", MessageBoxButtons::YesNo);
				 if (*alert == System::Windows::Forms::DialogResult::Yes)
				 {
					 DataGridViewRow ^ row;
					 MySqlInterface ^ msi = gcnew MySqlInterface;
					 try
					 {
						 row = ViewBranches->SelectedRows[0];
						 msi->DeleteBranch(System::Int32::Parse(row->Cells["Id"]->Value->ToString()));
						 RefreshBranches();
					 }
					 catch (Exception ^ ex)
					 {
						 MessageBox::Show("Возможно, ето объект где-то используется");
					 }
				 }
	}
	private: System::Void AddItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 ItemForm ^ itmf = gcnew ItemForm;
				 itmf->ShowDialog();
				 RefreshItems();
	}
	private: System::Void EditItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 DataGridViewRow ^ row;
				 try
				 {
					 row = ViewItem->SelectedRows[0];
					 ItemForm ^ editForm = gcnew ItemForm(System::Int32::Parse(row->Cells["Id"]->Value->ToString()), row->Cells["ItemName"]->Value->ToString());
					 editForm->ShowDialog();
					 RefreshItems();
				 }
				 catch (Exception ^ ex)
				 {
					 MessageBox::Show("Выберите товар");
				 }
	}
	private: System::Void DeleteItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 System::Windows::Forms::DialogResult ^ alert = MessageBox::Show("Вы уверены, что хотите удалить товар?\r\nТакже будут удалены все данные по этому товару.", "Удаление товара", MessageBoxButtons::YesNo);
				 if (*alert == System::Windows::Forms::DialogResult::Yes)
				 {
					 DataGridViewRow ^ row;
					 MySqlInterface ^ msi = gcnew MySqlInterface;
					 try
					 {
						 row = ViewItem->SelectedRows[0];
						 msi->DeleteItem(System::Int32::Parse(row->Cells["Id"]->Value->ToString()));
						 RefreshItems();
					 }
					 catch (Exception ^ ex)
					 {
						 MessageBox::Show("Возможно, ето объект где-то используется");
					 }
				 }
	}
	private: System::Void Stock::Dictionaries::OnSelectedIndexChanged(System::Object ^sender, System::EventArgs ^e)
	{
				 if (this->ViewItem->RowCount <= 0 && this->DictionariesTab->SelectedIndex == 1)
				 {
					 RefreshItems();
				 }
				 else if (this->ViewExpences->RowCount <= 0 && this->DictionariesTab->SelectedIndex == 2)
				 {
					 RefreshExpences();
				 }
				 else if (this->ViewClients->RowCount <= 0 && this->DictionariesTab->SelectedIndex == 3)
				 {
					 RefreshClients();
				 }
	}
	private: System::Void AddExpence_Click(System::Object^  sender, System::EventArgs^  e) {
				 ExpenceForm ^ ef = gcnew ExpenceForm;
				 ef->ShowDialog();
				 RefreshExpences();
	}
	private: System::Void EditExpence_Click(System::Object^  sender, System::EventArgs^  e) {
				 DataGridViewRow ^ row;
				 try
				 {
					 row = ViewExpences->SelectedRows[0];
					 ExpenceForm ^ editForm = gcnew ExpenceForm(System::Int32::Parse(row->Cells["Id"]->Value->ToString()), row->Cells["ArticleName"]->Value->ToString(), row->Cells["isIncome"]->Value->ToString() == "True", double::Parse(row->Cells["Plan"]->Value->ToString()));
					 editForm->ShowDialog();
					 RefreshExpences();
				 }
				 catch (Exception ^ ex)
				 {
					 MessageBox::Show("Выберите расход");
				 }
	}
	private: System::Void AddClient_Click(System::Object^  sender, System::EventArgs^  e) {
				 ClientForm ^ cf = gcnew ClientForm;
				 cf->ShowDialog();
				 RefreshClients();
	}
	private: System::Void EditClient_Click(System::Object^  sender, System::EventArgs^  e) {
				 DataGridViewRow ^ row;
				 try
				 {
					 row = ViewClients->SelectedRows[0];
					 ClientForm ^ editForm = gcnew ClientForm(System::Int32::Parse(row->Cells["Id"]->Value->ToString()), row->Cells["ClientName"]->Value->ToString());
					 editForm->ShowDialog();
					 RefreshClients();
				 }
				 catch (Exception ^ ex)
				 {
					 MessageBox::Show("Выберите клиента");
				 }
	}
	private: System::Void DeleteExpence_Click(System::Object^  sender, System::EventArgs^  e) {
				 System::Windows::Forms::DialogResult ^ alert = MessageBox::Show("Вы уверены, что хотите удалить расход?\r\nТакже будут удалены все данные по этому расходу.", "Удаление расхода", MessageBoxButtons::YesNo);
				 if (*alert == System::Windows::Forms::DialogResult::Yes)
				 {
					 DataGridViewRow ^ row;
					 MySqlInterface ^ msi = gcnew MySqlInterface;
					 try
					 {
						 row = ViewExpences->SelectedRows[0];
						 msi->DeleteExpence(System::Int32::Parse(row->Cells["Id"]->Value->ToString()));
						 RefreshExpences();
					 }
					 catch (Exception ^ ex)
					 {
						 MessageBox::Show("Возможно, ето объект где-то используется");
					 }
				 }
	};
	private: System::Void DeleteClient_Click(System::Object^  sender, System::EventArgs^  e) {
				 System::Windows::Forms::DialogResult ^ alert = MessageBox::Show("Вы уверены, что хотите удалить клиента?\r\nТакже будут удалены все данные по этому клиенту.", "Удаление клиента", MessageBoxButtons::YesNo);
				 if (*alert == System::Windows::Forms::DialogResult::Yes)
				 {
					 DataGridViewRow ^ row;
					 MySqlInterface ^ msi = gcnew MySqlInterface;
					 try
					 {
						 row = ViewClients->SelectedRows[0];
						 msi->DeleteClient(System::Int32::Parse(row->Cells["Id"]->Value->ToString()));
						 RefreshClients();
					 }
					 catch (Exception ^ ex)
					 {
						 MessageBox::Show("Возможно, ето объект где-то используется");
					 }
				 }
	}
	};
}
	


