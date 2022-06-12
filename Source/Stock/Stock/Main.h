#pragma once
#include "Dictionaries.h"
#include "Stock.h"
#include "SaleForm.h"
#include "MySqlInterface.h"
#include "ExpenseForm.h"
#include "PaymentForm.h"

namespace Stock {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
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
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  MainTab;
	private: System::Windows::Forms::TabPage^  SaleItems;




	protected:

	protected:




	private: System::Windows::Forms::Panel^  MainPanel;
	private: System::Windows::Forms::Button^  DictionariesButton;





	private: System::Windows::Forms::Button^  Exit;
	private: System::Windows::Forms::TabPage^  Expences;
	private: System::Windows::Forms::Panel^  ItemsPanel;
	private: System::Windows::Forms::Label^  SaleItemsTitle;




	private: System::Windows::Forms::Panel^  SalesPanel;
	private: System::Windows::Forms::Label^  SalesTitle;


	private: System::Windows::Forms::Panel^  FilterPanel;
	private: System::Windows::Forms::Button^  StockButton;
	private: System::Windows::Forms::Button^  DeleteSaleItem;



	private: System::Windows::Forms::Button^  EditSaleButton;

	private: System::Windows::Forms::Button^  AddSaleButton;

	private: System::Windows::Forms::DataGridView^  ViewItems;




	private: System::Windows::Forms::DataGridView^  ViewSales;
	private: System::Windows::Forms::Label^  ToTitle;
	private: System::Windows::Forms::DateTimePicker^  DateTo;




	private: System::Windows::Forms::Label^  FromTitle;
	private: System::Windows::Forms::DateTimePicker^  DateFrom;


	private: System::Windows::Forms::ComboBox^  BranchesList;


	private: System::Windows::Forms::TabPage^  Analitics;
	private: System::Windows::Forms::TabControl^  AnaliticsTabs;
	private: System::Windows::Forms::TabPage^  Payments;
	private: System::Windows::Forms::DataGridView^  PaymanesView;
	private: System::Windows::Forms::TabPage^  Items;
	private: System::Windows::Forms::TabPage^  Clients;
	private: System::Windows::Forms::Label^  APBranchTitle;
	private: System::Windows::Forms::DateTimePicker^  APDateTo;


	private: System::Windows::Forms::DateTimePicker^  APDateFrom;


	private: System::Windows::Forms::ComboBox^  APBranchesSelect;
	private: System::Windows::Forms::Label^  APDateFromTo;



	private: System::Windows::Forms::Label^  APDateFromTitle;


	private: System::Windows::Forms::DataGridView^  ItemsView;
	private: System::Windows::Forms::DataGridView^  ClientsView;
	private: System::Windows::Forms::Label^  EDateToTitle;
	private: System::Windows::Forms::DateTimePicker^  EDateTo;


private: System::Windows::Forms::Label^  EDateFromTitle;
private: System::Windows::Forms::DateTimePicker^  EDateFrom;



private: System::Windows::Forms::ComboBox^  EBranchesList;

	private: System::Windows::Forms::Panel^  panel1;
private: System::Windows::Forms::DataGridView^  ViewExpences;
private: System::Windows::Forms::Button^  DeleteExpenceButton;


private: System::Windows::Forms::Button^  EditExpenceButton;


private: System::Windows::Forms::Button^  AddExpenceButton;

private: System::Windows::Forms::TabPage^  MPayments;
private: System::Windows::Forms::ComboBox^  PClientsList;
private: System::Windows::Forms::Label^  PDateToTitle;
private: System::Windows::Forms::DateTimePicker^  PDateTo;



private: System::Windows::Forms::Label^  PDateFromTitle;
private: System::Windows::Forms::DateTimePicker^  PDateFrom;


private: System::Windows::Forms::ComboBox^  PBranchesList;


private: System::Windows::Forms::DataGridView^  ViewPayments;

private: System::Windows::Forms::Button^  DeletePaymentButton;

private: System::Windows::Forms::Button^  EditPaymentButton;

private: System::Windows::Forms::Button^  AddPaymentButton;

private: System::Windows::Forms::Label^  SBranchTitle;
private: System::Windows::Forms::Label^  ClientTitle;
private: System::Windows::Forms::ComboBox^  ClientsList;


private: System::Windows::Forms::Button^  SAllButton;


private: System::Windows::Forms::Button^  SAcceptFiltersButton;
private: System::Windows::Forms::Label^  EBranchTitle;
private: System::Windows::Forms::Button^  EAllExpences;


private: System::Windows::Forms::Button^  EAcceptFiltersButton;
private: System::Windows::Forms::Label^  PBranchTitle;
private: System::Windows::Forms::Label^  PClientTitle;
private: System::Windows::Forms::Button^  PAllPaymentsButton;




private: System::Windows::Forms::Button^  PAcceptFiltersButton;
private: System::Windows::Forms::Button^  AcceptAPaymentsFiltersButton;
private: System::Windows::Forms::Button^  AcceptAItemsFiltersButton;


private: System::Windows::Forms::Label^  AIDateFromTo;

private: System::Windows::Forms::Label^  AIDateFromTitle;

private: System::Windows::Forms::Label^  AIBranchTitle;
private: System::Windows::Forms::DateTimePicker^  AIDateTo;


private: System::Windows::Forms::DateTimePicker^  AIDateFrom;

private: System::Windows::Forms::ComboBox^  AIBranchesSelect;
private: System::Windows::Forms::Button^  AcceptAClientsFiltersButton;
private: System::Windows::Forms::Label^  ACDateFromTo;




private: System::Windows::Forms::Label^  ACDateFromTitle;
private: System::Windows::Forms::Label^  ACBranchTitle;
private: System::Windows::Forms::DateTimePicker^  ACDateTo;




private: System::Windows::Forms::DateTimePicker^  ACDateFrom;
private: System::Windows::Forms::ComboBox^  ACBranchesSelect;


private: System::Windows::Forms::Button^  AllAPaymentsButton;
private: System::Windows::Forms::Button^  AllAItemsButton;
private: System::Windows::Forms::Button^  AllAClientsButton;
private: System::Windows::Forms::Label^  AllAPSummaTitle;

private: System::Windows::Forms::Label^  AllAPSumma;
private: System::Windows::Forms::Label^  AllAICountByPlan;

private: System::Windows::Forms::Label^  AllAICountByPlanTitle;
private: System::Windows::Forms::Label^  AllAISummaryBySaled;




private: System::Windows::Forms::Label^  AllAICountBySaledTitle;
private: System::Windows::Forms::Label^  AllAISummaryByPlan;



private: System::Windows::Forms::Label^  AllAISummaryByPlanTitle;

private: System::Windows::Forms::Label^  AllAICountBySaled;
private: System::Windows::Forms::Label^  AllAISummaryBySaledTitle;



private: System::Windows::Forms::Label^  AllAISummaryTitle;
private: System::Windows::Forms::Label^  AllACCountBySaled;

private: System::Windows::Forms::Label^  AllACCountBySaledTitle;
private: System::Windows::Forms::Label^  AllACSummaryBySaledTItle;
private: System::Windows::Forms::Label^  AllACSummaryBySaled;



private: System::Windows::Forms::Label^  AllACSummaryTitle;












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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
			this->MainTab = (gcnew System::Windows::Forms::TabControl());
			this->SaleItems = (gcnew System::Windows::Forms::TabPage());
			this->ItemsPanel = (gcnew System::Windows::Forms::Panel());
			this->ViewItems = (gcnew System::Windows::Forms::DataGridView());
			this->SaleItemsTitle = (gcnew System::Windows::Forms::Label());
			this->SalesPanel = (gcnew System::Windows::Forms::Panel());
			this->ViewSales = (gcnew System::Windows::Forms::DataGridView());
			this->DeleteSaleItem = (gcnew System::Windows::Forms::Button());
			this->EditSaleButton = (gcnew System::Windows::Forms::Button());
			this->AddSaleButton = (gcnew System::Windows::Forms::Button());
			this->SalesTitle = (gcnew System::Windows::Forms::Label());
			this->FilterPanel = (gcnew System::Windows::Forms::Panel());
			this->SAllButton = (gcnew System::Windows::Forms::Button());
			this->SAcceptFiltersButton = (gcnew System::Windows::Forms::Button());
			this->ClientTitle = (gcnew System::Windows::Forms::Label());
			this->ClientsList = (gcnew System::Windows::Forms::ComboBox());
			this->SBranchTitle = (gcnew System::Windows::Forms::Label());
			this->ToTitle = (gcnew System::Windows::Forms::Label());
			this->DateTo = (gcnew System::Windows::Forms::DateTimePicker());
			this->FromTitle = (gcnew System::Windows::Forms::Label());
			this->DateFrom = (gcnew System::Windows::Forms::DateTimePicker());
			this->BranchesList = (gcnew System::Windows::Forms::ComboBox());
			this->Expences = (gcnew System::Windows::Forms::TabPage());
			this->EAllExpences = (gcnew System::Windows::Forms::Button());
			this->EAcceptFiltersButton = (gcnew System::Windows::Forms::Button());
			this->EBranchTitle = (gcnew System::Windows::Forms::Label());
			this->EDateToTitle = (gcnew System::Windows::Forms::Label());
			this->EDateTo = (gcnew System::Windows::Forms::DateTimePicker());
			this->EDateFromTitle = (gcnew System::Windows::Forms::Label());
			this->EDateFrom = (gcnew System::Windows::Forms::DateTimePicker());
			this->EBranchesList = (gcnew System::Windows::Forms::ComboBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->ViewExpences = (gcnew System::Windows::Forms::DataGridView());
			this->DeleteExpenceButton = (gcnew System::Windows::Forms::Button());
			this->EditExpenceButton = (gcnew System::Windows::Forms::Button());
			this->AddExpenceButton = (gcnew System::Windows::Forms::Button());
			this->MPayments = (gcnew System::Windows::Forms::TabPage());
			this->PAllPaymentsButton = (gcnew System::Windows::Forms::Button());
			this->PAcceptFiltersButton = (gcnew System::Windows::Forms::Button());
			this->PClientTitle = (gcnew System::Windows::Forms::Label());
			this->PBranchTitle = (gcnew System::Windows::Forms::Label());
			this->PClientsList = (gcnew System::Windows::Forms::ComboBox());
			this->PDateToTitle = (gcnew System::Windows::Forms::Label());
			this->PDateTo = (gcnew System::Windows::Forms::DateTimePicker());
			this->PDateFromTitle = (gcnew System::Windows::Forms::Label());
			this->PDateFrom = (gcnew System::Windows::Forms::DateTimePicker());
			this->PBranchesList = (gcnew System::Windows::Forms::ComboBox());
			this->ViewPayments = (gcnew System::Windows::Forms::DataGridView());
			this->DeletePaymentButton = (gcnew System::Windows::Forms::Button());
			this->EditPaymentButton = (gcnew System::Windows::Forms::Button());
			this->AddPaymentButton = (gcnew System::Windows::Forms::Button());
			this->Analitics = (gcnew System::Windows::Forms::TabPage());
			this->AnaliticsTabs = (gcnew System::Windows::Forms::TabControl());
			this->Payments = (gcnew System::Windows::Forms::TabPage());
			this->AllAPSumma = (gcnew System::Windows::Forms::Label());
			this->AllAPSummaTitle = (gcnew System::Windows::Forms::Label());
			this->AllAPaymentsButton = (gcnew System::Windows::Forms::Button());
			this->AcceptAPaymentsFiltersButton = (gcnew System::Windows::Forms::Button());
			this->APDateFromTo = (gcnew System::Windows::Forms::Label());
			this->APDateFromTitle = (gcnew System::Windows::Forms::Label());
			this->APBranchTitle = (gcnew System::Windows::Forms::Label());
			this->APDateTo = (gcnew System::Windows::Forms::DateTimePicker());
			this->APDateFrom = (gcnew System::Windows::Forms::DateTimePicker());
			this->APBranchesSelect = (gcnew System::Windows::Forms::ComboBox());
			this->PaymanesView = (gcnew System::Windows::Forms::DataGridView());
			this->Items = (gcnew System::Windows::Forms::TabPage());
			this->AllAICountByPlan = (gcnew System::Windows::Forms::Label());
			this->AllAICountByPlanTitle = (gcnew System::Windows::Forms::Label());
			this->AllAISummaryBySaled = (gcnew System::Windows::Forms::Label());
			this->AllAICountBySaledTitle = (gcnew System::Windows::Forms::Label());
			this->AllAISummaryByPlan = (gcnew System::Windows::Forms::Label());
			this->AllAISummaryByPlanTitle = (gcnew System::Windows::Forms::Label());
			this->AllAICountBySaled = (gcnew System::Windows::Forms::Label());
			this->AllAISummaryBySaledTitle = (gcnew System::Windows::Forms::Label());
			this->AllAISummaryTitle = (gcnew System::Windows::Forms::Label());
			this->AllAItemsButton = (gcnew System::Windows::Forms::Button());
			this->AcceptAItemsFiltersButton = (gcnew System::Windows::Forms::Button());
			this->AIDateFromTo = (gcnew System::Windows::Forms::Label());
			this->AIDateFromTitle = (gcnew System::Windows::Forms::Label());
			this->AIBranchTitle = (gcnew System::Windows::Forms::Label());
			this->AIDateTo = (gcnew System::Windows::Forms::DateTimePicker());
			this->AIDateFrom = (gcnew System::Windows::Forms::DateTimePicker());
			this->AIBranchesSelect = (gcnew System::Windows::Forms::ComboBox());
			this->ItemsView = (gcnew System::Windows::Forms::DataGridView());
			this->Clients = (gcnew System::Windows::Forms::TabPage());
			this->AllACCountBySaled = (gcnew System::Windows::Forms::Label());
			this->AllACCountBySaledTitle = (gcnew System::Windows::Forms::Label());
			this->AllACSummaryBySaledTItle = (gcnew System::Windows::Forms::Label());
			this->AllACSummaryBySaled = (gcnew System::Windows::Forms::Label());
			this->AllACSummaryTitle = (gcnew System::Windows::Forms::Label());
			this->AllAClientsButton = (gcnew System::Windows::Forms::Button());
			this->AcceptAClientsFiltersButton = (gcnew System::Windows::Forms::Button());
			this->ACDateFromTo = (gcnew System::Windows::Forms::Label());
			this->ACDateFromTitle = (gcnew System::Windows::Forms::Label());
			this->ACBranchTitle = (gcnew System::Windows::Forms::Label());
			this->ACDateTo = (gcnew System::Windows::Forms::DateTimePicker());
			this->ACDateFrom = (gcnew System::Windows::Forms::DateTimePicker());
			this->ACBranchesSelect = (gcnew System::Windows::Forms::ComboBox());
			this->ClientsView = (gcnew System::Windows::Forms::DataGridView());
			this->MainPanel = (gcnew System::Windows::Forms::Panel());
			this->StockButton = (gcnew System::Windows::Forms::Button());
			this->DictionariesButton = (gcnew System::Windows::Forms::Button());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->MainTab->SuspendLayout();
			this->SaleItems->SuspendLayout();
			this->ItemsPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ViewItems))->BeginInit();
			this->SalesPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ViewSales))->BeginInit();
			this->FilterPanel->SuspendLayout();
			this->Expences->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ViewExpences))->BeginInit();
			this->MPayments->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ViewPayments))->BeginInit();
			this->Analitics->SuspendLayout();
			this->AnaliticsTabs->SuspendLayout();
			this->Payments->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PaymanesView))->BeginInit();
			this->Items->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ItemsView))->BeginInit();
			this->Clients->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ClientsView))->BeginInit();
			this->MainPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// MainTab
			// 
			this->MainTab->Controls->Add(this->SaleItems);
			this->MainTab->Controls->Add(this->Expences);
			this->MainTab->Controls->Add(this->MPayments);
			this->MainTab->Controls->Add(this->Analitics);
			this->MainTab->ItemSize = System::Drawing::Size(58, 60);
			this->MainTab->Location = System::Drawing::Point(12, 12);
			this->MainTab->Name = L"MainTab";
			this->MainTab->SelectedIndex = 0;
			this->MainTab->Size = System::Drawing::Size(967, 499);
			this->MainTab->TabIndex = 0;
			this->MainTab->SelectedIndexChanged += gcnew System::EventHandler(this, &Main::OnSelectedIndexChanged);
			// 
			// SaleItems
			// 
			this->SaleItems->Controls->Add(this->ItemsPanel);
			this->SaleItems->Controls->Add(this->SalesPanel);
			this->SaleItems->Controls->Add(this->FilterPanel);
			this->SaleItems->Location = System::Drawing::Point(4, 64);
			this->SaleItems->Name = L"SaleItems";
			this->SaleItems->Padding = System::Windows::Forms::Padding(3);
			this->SaleItems->Size = System::Drawing::Size(959, 431);
			this->SaleItems->TabIndex = 0;
			this->SaleItems->Text = L"Продажи";
			this->SaleItems->UseVisualStyleBackColor = true;
			// 
			// ItemsPanel
			// 
			this->ItemsPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ItemsPanel->Controls->Add(this->ViewItems);
			this->ItemsPanel->Controls->Add(this->SaleItemsTitle);
			this->ItemsPanel->Location = System::Drawing::Point(452, 44);
			this->ItemsPanel->Name = L"ItemsPanel";
			this->ItemsPanel->Size = System::Drawing::Size(501, 381);
			this->ItemsPanel->TabIndex = 3;
			// 
			// ViewItems
			// 
			this->ViewItems->AllowUserToAddRows = false;
			this->ViewItems->AllowUserToDeleteRows = false;
			this->ViewItems->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ViewItems->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->ViewItems->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ViewItems->Location = System::Drawing::Point(6, 20);
			this->ViewItems->MultiSelect = false;
			this->ViewItems->Name = L"ViewItems";
			this->ViewItems->ReadOnly = true;
			this->ViewItems->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->ViewItems->Size = System::Drawing::Size(492, 357);
			this->ViewItems->TabIndex = 5;
			// 
			// SaleItemsTitle
			// 
			this->SaleItemsTitle->AutoSize = true;
			this->SaleItemsTitle->Location = System::Drawing::Point(3, 4);
			this->SaleItemsTitle->Name = L"SaleItemsTitle";
			this->SaleItemsTitle->Size = System::Drawing::Size(46, 13);
			this->SaleItemsTitle->TabIndex = 1;
			this->SaleItemsTitle->Text = L"Товары";
			// 
			// SalesPanel
			// 
			this->SalesPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->SalesPanel->Controls->Add(this->ViewSales);
			this->SalesPanel->Controls->Add(this->DeleteSaleItem);
			this->SalesPanel->Controls->Add(this->EditSaleButton);
			this->SalesPanel->Controls->Add(this->AddSaleButton);
			this->SalesPanel->Controls->Add(this->SalesTitle);
			this->SalesPanel->Location = System::Drawing::Point(6, 44);
			this->SalesPanel->Name = L"SalesPanel";
			this->SalesPanel->Size = System::Drawing::Size(440, 381);
			this->SalesPanel->TabIndex = 1;
			// 
			// ViewSales
			// 
			this->ViewSales->AllowUserToAddRows = false;
			this->ViewSales->AllowUserToDeleteRows = false;
			this->ViewSales->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ViewSales->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->ViewSales->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ViewSales->Location = System::Drawing::Point(6, 20);
			this->ViewSales->MultiSelect = false;
			this->ViewSales->Name = L"ViewSales";
			this->ViewSales->ReadOnly = true;
			this->ViewSales->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->ViewSales->Size = System::Drawing::Size(431, 329);
			this->ViewSales->TabIndex = 4;
			this->ViewSales->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Main::OnCellClick);
			// 
			// DeleteSaleItem
			// 
			this->DeleteSaleItem->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->DeleteSaleItem->Location = System::Drawing::Point(311, 354);
			this->DeleteSaleItem->Name = L"DeleteSaleItem";
			this->DeleteSaleItem->Size = System::Drawing::Size(126, 23);
			this->DeleteSaleItem->TabIndex = 3;
			this->DeleteSaleItem->Text = L"Удалить";
			this->DeleteSaleItem->UseVisualStyleBackColor = true;
			this->DeleteSaleItem->Click += gcnew System::EventHandler(this, &Main::DeleteSaleItem_Click);
			// 
			// EditSaleButton
			// 
			this->EditSaleButton->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->EditSaleButton->Location = System::Drawing::Point(154, 354);
			this->EditSaleButton->Name = L"EditSaleButton";
			this->EditSaleButton->Size = System::Drawing::Size(122, 23);
			this->EditSaleButton->TabIndex = 2;
			this->EditSaleButton->Text = L"Редактировать";
			this->EditSaleButton->UseVisualStyleBackColor = true;
			this->EditSaleButton->Click += gcnew System::EventHandler(this, &Main::EditSaleButton_Click);
			// 
			// AddSaleButton
			// 
			this->AddSaleButton->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->AddSaleButton->Location = System::Drawing::Point(6, 354);
			this->AddSaleButton->Name = L"AddSaleButton";
			this->AddSaleButton->Size = System::Drawing::Size(121, 23);
			this->AddSaleButton->TabIndex = 1;
			this->AddSaleButton->Text = L"Добавить";
			this->AddSaleButton->UseVisualStyleBackColor = true;
			this->AddSaleButton->Click += gcnew System::EventHandler(this, &Main::AddSaleButton_Click);
			// 
			// SalesTitle
			// 
			this->SalesTitle->AutoSize = true;
			this->SalesTitle->Location = System::Drawing::Point(4, 4);
			this->SalesTitle->Name = L"SalesTitle";
			this->SalesTitle->Size = System::Drawing::Size(46, 13);
			this->SalesTitle->TabIndex = 0;
			this->SalesTitle->Text = L"Заказы";
			// 
			// FilterPanel
			// 
			this->FilterPanel->Controls->Add(this->SAllButton);
			this->FilterPanel->Controls->Add(this->SAcceptFiltersButton);
			this->FilterPanel->Controls->Add(this->ClientTitle);
			this->FilterPanel->Controls->Add(this->ClientsList);
			this->FilterPanel->Controls->Add(this->SBranchTitle);
			this->FilterPanel->Controls->Add(this->ToTitle);
			this->FilterPanel->Controls->Add(this->DateTo);
			this->FilterPanel->Controls->Add(this->FromTitle);
			this->FilterPanel->Controls->Add(this->DateFrom);
			this->FilterPanel->Controls->Add(this->BranchesList);
			this->FilterPanel->Location = System::Drawing::Point(6, 6);
			this->FilterPanel->Name = L"FilterPanel";
			this->FilterPanel->Size = System::Drawing::Size(947, 32);
			this->FilterPanel->TabIndex = 0;
			// 
			// SAllButton
			// 
			this->SAllButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->SAllButton->Location = System::Drawing::Point(857, 3);
			this->SAllButton->Name = L"SAllButton";
			this->SAllButton->Size = System::Drawing::Size(75, 23);
			this->SAllButton->TabIndex = 9;
			this->SAllButton->Text = L"Все";
			this->SAllButton->UseVisualStyleBackColor = true;
			this->SAllButton->Click += gcnew System::EventHandler(this, &Main::SAllButton_Click);
			// 
			// SAcceptFiltersButton
			// 
			this->SAcceptFiltersButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->SAcceptFiltersButton->Location = System::Drawing::Point(776, 3);
			this->SAcceptFiltersButton->Name = L"SAcceptFiltersButton";
			this->SAcceptFiltersButton->Size = System::Drawing::Size(75, 23);
			this->SAcceptFiltersButton->TabIndex = 8;
			this->SAcceptFiltersButton->Text = L"Применить";
			this->SAcceptFiltersButton->UseVisualStyleBackColor = true;
			this->SAcceptFiltersButton->Click += gcnew System::EventHandler(this, &Main::SAcceptFiltersButton_Click);
			// 
			// ClientTitle
			// 
			this->ClientTitle->AutoSize = true;
			this->ClientTitle->Location = System::Drawing::Point(211, 9);
			this->ClientTitle->Name = L"ClientTitle";
			this->ClientTitle->Size = System::Drawing::Size(43, 13);
			this->ClientTitle->TabIndex = 7;
			this->ClientTitle->Text = L"Клиент";
			// 
			// ClientsList
			// 
			this->ClientsList->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->ClientsList->FormattingEnabled = true;
			this->ClientsList->Location = System::Drawing::Point(265, 6);
			this->ClientsList->Name = L"ClientsList";
			this->ClientsList->Size = System::Drawing::Size(147, 21);
			this->ClientsList->TabIndex = 6;
			// 
			// SBranchTitle
			// 
			this->SBranchTitle->AutoSize = true;
			this->SBranchTitle->Location = System::Drawing::Point(4, 9);
			this->SBranchTitle->Name = L"SBranchTitle";
			this->SBranchTitle->Size = System::Drawing::Size(48, 13);
			this->SBranchTitle->TabIndex = 5;
			this->SBranchTitle->Text = L"Филиал";
			// 
			// ToTitle
			// 
			this->ToTitle->AutoSize = true;
			this->ToTitle->Location = System::Drawing::Point(597, 9);
			this->ToTitle->Name = L"ToTitle";
			this->ToTitle->Size = System::Drawing::Size(22, 13);
			this->ToTitle->TabIndex = 4;
			this->ToTitle->Text = L"До";
			// 
			// DateTo
			// 
			this->DateTo->Location = System::Drawing::Point(625, 6);
			this->DateTo->Name = L"DateTo";
			this->DateTo->Size = System::Drawing::Size(144, 20);
			this->DateTo->TabIndex = 3;
			// 
			// FromTitle
			// 
			this->FromTitle->AutoSize = true;
			this->FromTitle->Location = System::Drawing::Point(418, 9);
			this->FromTitle->Name = L"FromTitle";
			this->FromTitle->Size = System::Drawing::Size(20, 13);
			this->FromTitle->TabIndex = 2;
			this->FromTitle->Text = L"От";
			// 
			// DateFrom
			// 
			this->DateFrom->Location = System::Drawing::Point(444, 6);
			this->DateFrom->Name = L"DateFrom";
			this->DateFrom->Size = System::Drawing::Size(147, 20);
			this->DateFrom->TabIndex = 1;
			// 
			// BranchesList
			// 
			this->BranchesList->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->BranchesList->FormattingEnabled = true;
			this->BranchesList->Location = System::Drawing::Point(58, 6);
			this->BranchesList->Name = L"BranchesList";
			this->BranchesList->Size = System::Drawing::Size(147, 21);
			this->BranchesList->TabIndex = 0;
			// 
			// Expences
			// 
			this->Expences->Controls->Add(this->EAllExpences);
			this->Expences->Controls->Add(this->EAcceptFiltersButton);
			this->Expences->Controls->Add(this->EBranchTitle);
			this->Expences->Controls->Add(this->EDateToTitle);
			this->Expences->Controls->Add(this->EDateTo);
			this->Expences->Controls->Add(this->EDateFromTitle);
			this->Expences->Controls->Add(this->EDateFrom);
			this->Expences->Controls->Add(this->EBranchesList);
			this->Expences->Controls->Add(this->panel1);
			this->Expences->Location = System::Drawing::Point(4, 64);
			this->Expences->Name = L"Expences";
			this->Expences->Padding = System::Windows::Forms::Padding(3);
			this->Expences->Size = System::Drawing::Size(959, 431);
			this->Expences->TabIndex = 2;
			this->Expences->Text = L"Расходы";
			this->Expences->UseVisualStyleBackColor = true;
			// 
			// EAllExpences
			// 
			this->EAllExpences->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->EAllExpences->Location = System::Drawing::Point(875, 6);
			this->EAllExpences->Name = L"EAllExpences";
			this->EAllExpences->Size = System::Drawing::Size(75, 23);
			this->EAllExpences->TabIndex = 13;
			this->EAllExpences->Text = L"Все";
			this->EAllExpences->UseVisualStyleBackColor = true;
			this->EAllExpences->Click += gcnew System::EventHandler(this, &Main::EAllExpences_Click);
			// 
			// EAcceptFiltersButton
			// 
			this->EAcceptFiltersButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->EAcceptFiltersButton->Location = System::Drawing::Point(794, 6);
			this->EAcceptFiltersButton->Name = L"EAcceptFiltersButton";
			this->EAcceptFiltersButton->Size = System::Drawing::Size(75, 23);
			this->EAcceptFiltersButton->TabIndex = 12;
			this->EAcceptFiltersButton->Text = L"Применить";
			this->EAcceptFiltersButton->UseVisualStyleBackColor = true;
			this->EAcceptFiltersButton->Click += gcnew System::EventHandler(this, &Main::EAcceptFiltersButton_Click);
			// 
			// EBranchTitle
			// 
			this->EBranchTitle->AutoSize = true;
			this->EBranchTitle->Location = System::Drawing::Point(6, 10);
			this->EBranchTitle->Name = L"EBranchTitle";
			this->EBranchTitle->Size = System::Drawing::Size(48, 13);
			this->EBranchTitle->TabIndex = 11;
			this->EBranchTitle->Text = L"Филиал";
			// 
			// EDateToTitle
			// 
			this->EDateToTitle->AutoSize = true;
			this->EDateToTitle->Location = System::Drawing::Point(392, 11);
			this->EDateToTitle->Name = L"EDateToTitle";
			this->EDateToTitle->Size = System::Drawing::Size(22, 13);
			this->EDateToTitle->TabIndex = 10;
			this->EDateToTitle->Text = L"До";
			// 
			// EDateTo
			// 
			this->EDateTo->Location = System::Drawing::Point(418, 7);
			this->EDateTo->Name = L"EDateTo";
			this->EDateTo->Size = System::Drawing::Size(145, 20);
			this->EDateTo->TabIndex = 9;
			// 
			// EDateFromTitle
			// 
			this->EDateFromTitle->AutoSize = true;
			this->EDateFromTitle->Location = System::Drawing::Point(214, 11);
			this->EDateFromTitle->Name = L"EDateFromTitle";
			this->EDateFromTitle->Size = System::Drawing::Size(20, 13);
			this->EDateFromTitle->TabIndex = 8;
			this->EDateFromTitle->Text = L"От";
			// 
			// EDateFrom
			// 
			this->EDateFrom->Location = System::Drawing::Point(240, 7);
			this->EDateFrom->Name = L"EDateFrom";
			this->EDateFrom->Size = System::Drawing::Size(146, 20);
			this->EDateFrom->TabIndex = 6;
			// 
			// EBranchesList
			// 
			this->EBranchesList->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->EBranchesList->FormattingEnabled = true;
			this->EBranchesList->Location = System::Drawing::Point(60, 7);
			this->EBranchesList->Name = L"EBranchesList";
			this->EBranchesList->Size = System::Drawing::Size(147, 21);
			this->EBranchesList->TabIndex = 5;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->ViewExpences);
			this->panel1->Controls->Add(this->DeleteExpenceButton);
			this->panel1->Controls->Add(this->EditExpenceButton);
			this->panel1->Controls->Add(this->AddExpenceButton);
			this->panel1->Location = System::Drawing::Point(6, 34);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(944, 394);
			this->panel1->TabIndex = 7;
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
			this->ViewExpences->Location = System::Drawing::Point(3, 3);
			this->ViewExpences->MultiSelect = false;
			this->ViewExpences->Name = L"ViewExpences";
			this->ViewExpences->ReadOnly = true;
			this->ViewExpences->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->ViewExpences->Size = System::Drawing::Size(935, 362);
			this->ViewExpences->TabIndex = 4;
			// 
			// DeleteExpenceButton
			// 
			this->DeleteExpenceButton->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->DeleteExpenceButton->Location = System::Drawing::Point(594, 368);
			this->DeleteExpenceButton->Name = L"DeleteExpenceButton";
			this->DeleteExpenceButton->Size = System::Drawing::Size(126, 23);
			this->DeleteExpenceButton->TabIndex = 3;
			this->DeleteExpenceButton->Text = L"Удалить";
			this->DeleteExpenceButton->UseVisualStyleBackColor = true;
			this->DeleteExpenceButton->Click += gcnew System::EventHandler(this, &Main::DeleteExpenceButton_Click);
			// 
			// EditExpenceButton
			// 
			this->EditExpenceButton->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->EditExpenceButton->Location = System::Drawing::Point(428, 368);
			this->EditExpenceButton->Name = L"EditExpenceButton";
			this->EditExpenceButton->Size = System::Drawing::Size(122, 23);
			this->EditExpenceButton->TabIndex = 2;
			this->EditExpenceButton->Text = L"Редактировать";
			this->EditExpenceButton->UseVisualStyleBackColor = true;
			this->EditExpenceButton->Click += gcnew System::EventHandler(this, &Main::EditExpenceButton_Click);
			// 
			// AddExpenceButton
			// 
			this->AddExpenceButton->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->AddExpenceButton->Location = System::Drawing::Point(259, 368);
			this->AddExpenceButton->Name = L"AddExpenceButton";
			this->AddExpenceButton->Size = System::Drawing::Size(121, 23);
			this->AddExpenceButton->TabIndex = 1;
			this->AddExpenceButton->Text = L"Добавить";
			this->AddExpenceButton->UseVisualStyleBackColor = true;
			this->AddExpenceButton->Click += gcnew System::EventHandler(this, &Main::AddExpenceButton_Click);
			// 
			// MPayments
			// 
			this->MPayments->Controls->Add(this->PAllPaymentsButton);
			this->MPayments->Controls->Add(this->PAcceptFiltersButton);
			this->MPayments->Controls->Add(this->PClientTitle);
			this->MPayments->Controls->Add(this->PBranchTitle);
			this->MPayments->Controls->Add(this->PClientsList);
			this->MPayments->Controls->Add(this->PDateToTitle);
			this->MPayments->Controls->Add(this->PDateTo);
			this->MPayments->Controls->Add(this->PDateFromTitle);
			this->MPayments->Controls->Add(this->PDateFrom);
			this->MPayments->Controls->Add(this->PBranchesList);
			this->MPayments->Controls->Add(this->ViewPayments);
			this->MPayments->Controls->Add(this->DeletePaymentButton);
			this->MPayments->Controls->Add(this->EditPaymentButton);
			this->MPayments->Controls->Add(this->AddPaymentButton);
			this->MPayments->Location = System::Drawing::Point(4, 64);
			this->MPayments->Name = L"MPayments";
			this->MPayments->Size = System::Drawing::Size(959, 431);
			this->MPayments->TabIndex = 4;
			this->MPayments->Text = L"Платежи";
			this->MPayments->UseVisualStyleBackColor = true;
			// 
			// PAllPaymentsButton
			// 
			this->PAllPaymentsButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->PAllPaymentsButton->Location = System::Drawing::Point(870, 9);
			this->PAllPaymentsButton->Name = L"PAllPaymentsButton";
			this->PAllPaymentsButton->Size = System::Drawing::Size(75, 23);
			this->PAllPaymentsButton->TabIndex = 24;
			this->PAllPaymentsButton->Text = L"Все";
			this->PAllPaymentsButton->UseVisualStyleBackColor = true;
			this->PAllPaymentsButton->Click += gcnew System::EventHandler(this, &Main::PAllPaymentsButton_Click);
			// 
			// PAcceptFiltersButton
			// 
			this->PAcceptFiltersButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->PAcceptFiltersButton->Location = System::Drawing::Point(789, 9);
			this->PAcceptFiltersButton->Name = L"PAcceptFiltersButton";
			this->PAcceptFiltersButton->Size = System::Drawing::Size(75, 23);
			this->PAcceptFiltersButton->TabIndex = 23;
			this->PAcceptFiltersButton->Text = L"Применить";
			this->PAcceptFiltersButton->UseVisualStyleBackColor = true;
			this->PAcceptFiltersButton->Click += gcnew System::EventHandler(this, &Main::PAcceptFiltersButton_Click);
			// 
			// PClientTitle
			// 
			this->PClientTitle->AutoSize = true;
			this->PClientTitle->Location = System::Drawing::Point(214, 13);
			this->PClientTitle->Name = L"PClientTitle";
			this->PClientTitle->Size = System::Drawing::Size(43, 13);
			this->PClientTitle->TabIndex = 22;
			this->PClientTitle->Text = L"Клиент";
			// 
			// PBranchTitle
			// 
			this->PBranchTitle->AutoSize = true;
			this->PBranchTitle->Location = System::Drawing::Point(7, 11);
			this->PBranchTitle->Name = L"PBranchTitle";
			this->PBranchTitle->Size = System::Drawing::Size(48, 13);
			this->PBranchTitle->TabIndex = 21;
			this->PBranchTitle->Text = L"Филиал";
			// 
			// PClientsList
			// 
			this->PClientsList->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->PClientsList->FormattingEnabled = true;
			this->PClientsList->Location = System::Drawing::Point(263, 10);
			this->PClientsList->Name = L"PClientsList";
			this->PClientsList->Size = System::Drawing::Size(147, 21);
			this->PClientsList->TabIndex = 20;
			// 
			// PDateToTitle
			// 
			this->PDateToTitle->AutoSize = true;
			this->PDateToTitle->Location = System::Drawing::Point(603, 14);
			this->PDateToTitle->Name = L"PDateToTitle";
			this->PDateToTitle->Size = System::Drawing::Size(22, 13);
			this->PDateToTitle->TabIndex = 19;
			this->PDateToTitle->Text = L"До";
			// 
			// PDateTo
			// 
			this->PDateTo->Location = System::Drawing::Point(631, 11);
			this->PDateTo->Name = L"PDateTo";
			this->PDateTo->Size = System::Drawing::Size(152, 20);
			this->PDateTo->TabIndex = 18;
			// 
			// PDateFromTitle
			// 
			this->PDateFromTitle->AutoSize = true;
			this->PDateFromTitle->Location = System::Drawing::Point(423, 14);
			this->PDateFromTitle->Name = L"PDateFromTitle";
			this->PDateFromTitle->Size = System::Drawing::Size(20, 13);
			this->PDateFromTitle->TabIndex = 17;
			this->PDateFromTitle->Text = L"От";
			// 
			// PDateFrom
			// 
			this->PDateFrom->Location = System::Drawing::Point(449, 11);
			this->PDateFrom->Name = L"PDateFrom";
			this->PDateFrom->Size = System::Drawing::Size(148, 20);
			this->PDateFrom->TabIndex = 16;
			// 
			// PBranchesList
			// 
			this->PBranchesList->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->PBranchesList->FormattingEnabled = true;
			this->PBranchesList->Location = System::Drawing::Point(61, 8);
			this->PBranchesList->Name = L"PBranchesList";
			this->PBranchesList->Size = System::Drawing::Size(147, 21);
			this->PBranchesList->TabIndex = 15;
			// 
			// ViewPayments
			// 
			this->ViewPayments->AllowUserToAddRows = false;
			this->ViewPayments->AllowUserToDeleteRows = false;
			this->ViewPayments->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ViewPayments->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->ViewPayments->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ViewPayments->Location = System::Drawing::Point(10, 37);
			this->ViewPayments->MultiSelect = false;
			this->ViewPayments->Name = L"ViewPayments";
			this->ViewPayments->ReadOnly = true;
			this->ViewPayments->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->ViewPayments->Size = System::Drawing::Size(935, 362);
			this->ViewPayments->TabIndex = 14;
			// 
			// DeletePaymentButton
			// 
			this->DeletePaymentButton->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->DeletePaymentButton->Location = System::Drawing::Point(602, 405);
			this->DeletePaymentButton->Name = L"DeletePaymentButton";
			this->DeletePaymentButton->Size = System::Drawing::Size(126, 23);
			this->DeletePaymentButton->TabIndex = 13;
			this->DeletePaymentButton->Text = L"Удалить";
			this->DeletePaymentButton->UseVisualStyleBackColor = true;
			this->DeletePaymentButton->Click += gcnew System::EventHandler(this, &Main::DeletePaymentButton_Click);
			// 
			// EditPaymentButton
			// 
			this->EditPaymentButton->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->EditPaymentButton->Location = System::Drawing::Point(435, 405);
			this->EditPaymentButton->Name = L"EditPaymentButton";
			this->EditPaymentButton->Size = System::Drawing::Size(122, 23);
			this->EditPaymentButton->TabIndex = 12;
			this->EditPaymentButton->Text = L"Редактировать";
			this->EditPaymentButton->UseVisualStyleBackColor = true;
			this->EditPaymentButton->Click += gcnew System::EventHandler(this, &Main::EditPaymentButton_Click);
			// 
			// AddPaymentButton
			// 
			this->AddPaymentButton->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->AddPaymentButton->Location = System::Drawing::Point(268, 405);
			this->AddPaymentButton->Name = L"AddPaymentButton";
			this->AddPaymentButton->Size = System::Drawing::Size(121, 23);
			this->AddPaymentButton->TabIndex = 11;
			this->AddPaymentButton->Text = L"Добавить";
			this->AddPaymentButton->UseVisualStyleBackColor = true;
			this->AddPaymentButton->Click += gcnew System::EventHandler(this, &Main::AddPaymentButton_Click);
			// 
			// Analitics
			// 
			this->Analitics->Controls->Add(this->AnaliticsTabs);
			this->Analitics->Location = System::Drawing::Point(4, 64);
			this->Analitics->Name = L"Analitics";
			this->Analitics->Size = System::Drawing::Size(959, 431);
			this->Analitics->TabIndex = 3;
			this->Analitics->Text = L"Аналитика";
			this->Analitics->UseVisualStyleBackColor = true;
			// 
			// AnaliticsTabs
			// 
			this->AnaliticsTabs->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->AnaliticsTabs->Controls->Add(this->Payments);
			this->AnaliticsTabs->Controls->Add(this->Items);
			this->AnaliticsTabs->Controls->Add(this->Clients);
			this->AnaliticsTabs->Location = System::Drawing::Point(3, 3);
			this->AnaliticsTabs->Name = L"AnaliticsTabs";
			this->AnaliticsTabs->SelectedIndex = 0;
			this->AnaliticsTabs->Size = System::Drawing::Size(956, 425);
			this->AnaliticsTabs->TabIndex = 0;
			// 
			// Payments
			// 
			this->Payments->Controls->Add(this->AllAPSumma);
			this->Payments->Controls->Add(this->AllAPSummaTitle);
			this->Payments->Controls->Add(this->AllAPaymentsButton);
			this->Payments->Controls->Add(this->AcceptAPaymentsFiltersButton);
			this->Payments->Controls->Add(this->APDateFromTo);
			this->Payments->Controls->Add(this->APDateFromTitle);
			this->Payments->Controls->Add(this->APBranchTitle);
			this->Payments->Controls->Add(this->APDateTo);
			this->Payments->Controls->Add(this->APDateFrom);
			this->Payments->Controls->Add(this->APBranchesSelect);
			this->Payments->Controls->Add(this->PaymanesView);
			this->Payments->Location = System::Drawing::Point(4, 22);
			this->Payments->Name = L"Payments";
			this->Payments->Padding = System::Windows::Forms::Padding(3);
			this->Payments->Size = System::Drawing::Size(948, 399);
			this->Payments->TabIndex = 0;
			this->Payments->Text = L"Платежи";
			this->Payments->UseVisualStyleBackColor = true;
			// 
			// AllAPSumma
			// 
			this->AllAPSumma->AutoSize = true;
			this->AllAPSumma->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AllAPSumma->Location = System::Drawing::Point(120, 380);
			this->AllAPSumma->Name = L"AllAPSumma";
			this->AllAPSumma->Size = System::Drawing::Size(14, 13);
			this->AllAPSumma->TabIndex = 12;
			this->AllAPSumma->Text = L"0";
			// 
			// AllAPSummaTitle
			// 
			this->AllAPSummaTitle->AutoSize = true;
			this->AllAPSummaTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AllAPSummaTitle->Location = System::Drawing::Point(4, 380);
			this->AllAPSummaTitle->Name = L"AllAPSummaTitle";
			this->AllAPSummaTitle->Size = System::Drawing::Size(116, 13);
			this->AllAPSummaTitle->TabIndex = 11;
			this->AllAPSummaTitle->Text = L"Валовая прибыль:";
			// 
			// AllAPaymentsButton
			// 
			this->AllAPaymentsButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->AllAPaymentsButton->Location = System::Drawing::Point(867, 6);
			this->AllAPaymentsButton->Name = L"AllAPaymentsButton";
			this->AllAPaymentsButton->Size = System::Drawing::Size(75, 23);
			this->AllAPaymentsButton->TabIndex = 10;
			this->AllAPaymentsButton->Text = L"Все";
			this->AllAPaymentsButton->UseVisualStyleBackColor = true;
			this->AllAPaymentsButton->Click += gcnew System::EventHandler(this, &Main::AllAPaymentsButton_Click);
			// 
			// AcceptAPaymentsFiltersButton
			// 
			this->AcceptAPaymentsFiltersButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->AcceptAPaymentsFiltersButton->Location = System::Drawing::Point(786, 6);
			this->AcceptAPaymentsFiltersButton->Name = L"AcceptAPaymentsFiltersButton";
			this->AcceptAPaymentsFiltersButton->Size = System::Drawing::Size(75, 23);
			this->AcceptAPaymentsFiltersButton->TabIndex = 9;
			this->AcceptAPaymentsFiltersButton->Text = L"Применить";
			this->AcceptAPaymentsFiltersButton->UseVisualStyleBackColor = true;
			this->AcceptAPaymentsFiltersButton->Click += gcnew System::EventHandler(this, &Main::AcceptAPaymentsFiltersButton_Click);
			// 
			// APDateFromTo
			// 
			this->APDateFromTo->AutoSize = true;
			this->APDateFromTo->Location = System::Drawing::Point(477, 9);
			this->APDateFromTo->Name = L"APDateFromTo";
			this->APDateFromTo->Size = System::Drawing::Size(22, 13);
			this->APDateFromTo->TabIndex = 6;
			this->APDateFromTo->Text = L"До";
			// 
			// APDateFromTitle
			// 
			this->APDateFromTitle->AutoSize = true;
			this->APDateFromTitle->Location = System::Drawing::Point(245, 9);
			this->APDateFromTitle->Name = L"APDateFromTitle";
			this->APDateFromTitle->Size = System::Drawing::Size(20, 13);
			this->APDateFromTitle->TabIndex = 5;
			this->APDateFromTitle->Text = L"От";
			// 
			// APBranchTitle
			// 
			this->APBranchTitle->AutoSize = true;
			this->APBranchTitle->Location = System::Drawing::Point(6, 9);
			this->APBranchTitle->Name = L"APBranchTitle";
			this->APBranchTitle->Size = System::Drawing::Size(48, 13);
			this->APBranchTitle->TabIndex = 4;
			this->APBranchTitle->Text = L"Филиал";
			// 
			// APDateTo
			// 
			this->APDateTo->Location = System::Drawing::Point(505, 7);
			this->APDateTo->Name = L"APDateTo";
			this->APDateTo->Size = System::Drawing::Size(200, 20);
			this->APDateTo->TabIndex = 3;
			// 
			// APDateFrom
			// 
			this->APDateFrom->Location = System::Drawing::Point(271, 6);
			this->APDateFrom->Name = L"APDateFrom";
			this->APDateFrom->Size = System::Drawing::Size(200, 20);
			this->APDateFrom->TabIndex = 2;
			// 
			// APBranchesSelect
			// 
			this->APBranchesSelect->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->APBranchesSelect->FormattingEnabled = true;
			this->APBranchesSelect->Location = System::Drawing::Point(54, 6);
			this->APBranchesSelect->Name = L"APBranchesSelect";
			this->APBranchesSelect->Size = System::Drawing::Size(185, 21);
			this->APBranchesSelect->TabIndex = 1;
			// 
			// PaymanesView
			// 
			this->PaymanesView->AllowUserToAddRows = false;
			this->PaymanesView->AllowUserToDeleteRows = false;
			this->PaymanesView->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->PaymanesView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->PaymanesView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->PaymanesView->Location = System::Drawing::Point(3, 33);
			this->PaymanesView->MultiSelect = false;
			this->PaymanesView->Name = L"PaymanesView";
			this->PaymanesView->ReadOnly = true;
			this->PaymanesView->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->PaymanesView->Size = System::Drawing::Size(939, 343);
			this->PaymanesView->TabIndex = 0;
			// 
			// Items
			// 
			this->Items->Controls->Add(this->AllAICountByPlan);
			this->Items->Controls->Add(this->AllAICountByPlanTitle);
			this->Items->Controls->Add(this->AllAISummaryBySaled);
			this->Items->Controls->Add(this->AllAICountBySaledTitle);
			this->Items->Controls->Add(this->AllAISummaryByPlan);
			this->Items->Controls->Add(this->AllAISummaryByPlanTitle);
			this->Items->Controls->Add(this->AllAICountBySaled);
			this->Items->Controls->Add(this->AllAISummaryBySaledTitle);
			this->Items->Controls->Add(this->AllAISummaryTitle);
			this->Items->Controls->Add(this->AllAItemsButton);
			this->Items->Controls->Add(this->AcceptAItemsFiltersButton);
			this->Items->Controls->Add(this->AIDateFromTo);
			this->Items->Controls->Add(this->AIDateFromTitle);
			this->Items->Controls->Add(this->AIBranchTitle);
			this->Items->Controls->Add(this->AIDateTo);
			this->Items->Controls->Add(this->AIDateFrom);
			this->Items->Controls->Add(this->AIBranchesSelect);
			this->Items->Controls->Add(this->ItemsView);
			this->Items->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Items->Location = System::Drawing::Point(4, 22);
			this->Items->Name = L"Items";
			this->Items->Padding = System::Windows::Forms::Padding(3);
			this->Items->Size = System::Drawing::Size(948, 399);
			this->Items->TabIndex = 1;
			this->Items->Text = L"Товары";
			this->Items->UseVisualStyleBackColor = true;
			// 
			// AllAICountByPlan
			// 
			this->AllAICountByPlan->AutoSize = true;
			this->AllAICountByPlan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AllAICountByPlan->Location = System::Drawing::Point(329, 383);
			this->AllAICountByPlan->Name = L"AllAICountByPlan";
			this->AllAICountByPlan->Size = System::Drawing::Size(14, 13);
			this->AllAICountByPlan->TabIndex = 27;
			this->AllAICountByPlan->Text = L"0";
			// 
			// AllAICountByPlanTitle
			// 
			this->AllAICountByPlanTitle->AutoSize = true;
			this->AllAICountByPlanTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->AllAICountByPlanTitle->Location = System::Drawing::Point(188, 383);
			this->AllAICountByPlanTitle->Name = L"AllAICountByPlanTitle";
			this->AllAICountByPlanTitle->Size = System::Drawing::Size(144, 13);
			this->AllAICountByPlanTitle->TabIndex = 26;
			this->AllAICountByPlanTitle->Text = L"Количество по плану - ";
			// 
			// AllAISummaryBySaled
			// 
			this->AllAISummaryBySaled->AutoSize = true;
			this->AllAISummaryBySaled->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->AllAISummaryBySaled->Location = System::Drawing::Point(905, 383);
			this->AllAISummaryBySaled->Name = L"AllAISummaryBySaled";
			this->AllAISummaryBySaled->Size = System::Drawing::Size(14, 13);
			this->AllAISummaryBySaled->TabIndex = 25;
			this->AllAISummaryBySaled->Text = L"0";
			// 
			// AllAICountBySaledTitle
			// 
			this->AllAICountBySaledTitle->AutoSize = true;
			this->AllAICountBySaledTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->AllAICountBySaledTitle->Location = System::Drawing::Point(384, 383);
			this->AllAICountBySaledTitle->Name = L"AllAICountBySaledTitle";
			this->AllAICountBySaledTitle->Size = System::Drawing::Size(156, 13);
			this->AllAICountBySaledTitle->TabIndex = 24;
			this->AllAICountBySaledTitle->Text = L"Количество проданных - ";
			// 
			// AllAISummaryByPlan
			// 
			this->AllAISummaryByPlan->AutoSize = true;
			this->AllAISummaryByPlan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AllAISummaryByPlan->Location = System::Drawing::Point(709, 383);
			this->AllAISummaryByPlan->Name = L"AllAISummaryByPlan";
			this->AllAISummaryByPlan->Size = System::Drawing::Size(14, 13);
			this->AllAISummaryByPlan->TabIndex = 23;
			this->AllAISummaryByPlan->Text = L"0";
			// 
			// AllAISummaryByPlanTitle
			// 
			this->AllAISummaryByPlanTitle->AutoSize = true;
			this->AllAISummaryByPlanTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->AllAISummaryByPlanTitle->Location = System::Drawing::Point(600, 383);
			this->AllAISummaryByPlanTitle->Name = L"AllAISummaryByPlanTitle";
			this->AllAISummaryByPlanTitle->Size = System::Drawing::Size(114, 13);
			this->AllAISummaryByPlanTitle->TabIndex = 22;
			this->AllAISummaryByPlanTitle->Text = L"Сумма по плану - ";
			// 
			// AllAICountBySaled
			// 
			this->AllAICountBySaled->AutoSize = true;
			this->AllAICountBySaled->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AllAICountBySaled->Location = System::Drawing::Point(537, 383);
			this->AllAICountBySaled->Name = L"AllAICountBySaled";
			this->AllAICountBySaled->Size = System::Drawing::Size(14, 13);
			this->AllAICountBySaled->TabIndex = 21;
			this->AllAICountBySaled->Text = L"0";
			// 
			// AllAISummaryBySaledTitle
			// 
			this->AllAISummaryBySaledTitle->AutoSize = true;
			this->AllAISummaryBySaledTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->AllAISummaryBySaledTitle->Location = System::Drawing::Point(783, 383);
			this->AllAISummaryBySaledTitle->Name = L"AllAISummaryBySaledTitle";
			this->AllAISummaryBySaledTitle->Size = System::Drawing::Size(126, 13);
			this->AllAISummaryBySaledTitle->TabIndex = 20;
			this->AllAISummaryBySaledTitle->Text = L"Сумма проданных - ";
			// 
			// AllAISummaryTitle
			// 
			this->AllAISummaryTitle->AutoSize = true;
			this->AllAISummaryTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AllAISummaryTitle->Location = System::Drawing::Point(6, 383);
			this->AllAISummaryTitle->Name = L"AllAISummaryTitle";
			this->AllAISummaryTitle->Size = System::Drawing::Size(139, 13);
			this->AllAISummaryTitle->TabIndex = 18;
			this->AllAISummaryTitle->Text = L"Суммарные значения:";
			// 
			// AllAItemsButton
			// 
			this->AllAItemsButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->AllAItemsButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AllAItemsButton->Location = System::Drawing::Point(867, 11);
			this->AllAItemsButton->Name = L"AllAItemsButton";
			this->AllAItemsButton->Size = System::Drawing::Size(75, 23);
			this->AllAItemsButton->TabIndex = 17;
			this->AllAItemsButton->Text = L"Все";
			this->AllAItemsButton->UseVisualStyleBackColor = true;
			this->AllAItemsButton->Click += gcnew System::EventHandler(this, &Main::AllAItemsButton_Click);
			// 
			// AcceptAItemsFiltersButton
			// 
			this->AcceptAItemsFiltersButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->AcceptAItemsFiltersButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->AcceptAItemsFiltersButton->Location = System::Drawing::Point(786, 11);
			this->AcceptAItemsFiltersButton->Name = L"AcceptAItemsFiltersButton";
			this->AcceptAItemsFiltersButton->Size = System::Drawing::Size(75, 23);
			this->AcceptAItemsFiltersButton->TabIndex = 16;
			this->AcceptAItemsFiltersButton->Text = L"Применить";
			this->AcceptAItemsFiltersButton->UseVisualStyleBackColor = true;
			this->AcceptAItemsFiltersButton->Click += gcnew System::EventHandler(this, &Main::AcceptAItemsFiltersButton_Click);
			// 
			// AIDateFromTo
			// 
			this->AIDateFromTo->AutoSize = true;
			this->AIDateFromTo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AIDateFromTo->Location = System::Drawing::Point(475, 13);
			this->AIDateFromTo->Name = L"AIDateFromTo";
			this->AIDateFromTo->Size = System::Drawing::Size(22, 13);
			this->AIDateFromTo->TabIndex = 15;
			this->AIDateFromTo->Text = L"До";
			// 
			// AIDateFromTitle
			// 
			this->AIDateFromTitle->AutoSize = true;
			this->AIDateFromTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AIDateFromTitle->Location = System::Drawing::Point(243, 13);
			this->AIDateFromTitle->Name = L"AIDateFromTitle";
			this->AIDateFromTitle->Size = System::Drawing::Size(20, 13);
			this->AIDateFromTitle->TabIndex = 14;
			this->AIDateFromTitle->Text = L"От";
			// 
			// AIBranchTitle
			// 
			this->AIBranchTitle->AutoSize = true;
			this->AIBranchTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AIBranchTitle->Location = System::Drawing::Point(4, 13);
			this->AIBranchTitle->Name = L"AIBranchTitle";
			this->AIBranchTitle->Size = System::Drawing::Size(48, 13);
			this->AIBranchTitle->TabIndex = 13;
			this->AIBranchTitle->Text = L"Филиал";
			// 
			// AIDateTo
			// 
			this->AIDateTo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AIDateTo->Location = System::Drawing::Point(503, 11);
			this->AIDateTo->Name = L"AIDateTo";
			this->AIDateTo->Size = System::Drawing::Size(200, 20);
			this->AIDateTo->TabIndex = 12;
			// 
			// AIDateFrom
			// 
			this->AIDateFrom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AIDateFrom->Location = System::Drawing::Point(269, 10);
			this->AIDateFrom->Name = L"AIDateFrom";
			this->AIDateFrom->Size = System::Drawing::Size(200, 20);
			this->AIDateFrom->TabIndex = 11;
			// 
			// AIBranchesSelect
			// 
			this->AIBranchesSelect->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->AIBranchesSelect->FormattingEnabled = true;
			this->AIBranchesSelect->Location = System::Drawing::Point(52, 10);
			this->AIBranchesSelect->Name = L"AIBranchesSelect";
			this->AIBranchesSelect->Size = System::Drawing::Size(185, 21);
			this->AIBranchesSelect->TabIndex = 10;
			// 
			// ItemsView
			// 
			this->ItemsView->AllowUserToAddRows = false;
			this->ItemsView->AllowUserToDeleteRows = false;
			this->ItemsView->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ItemsView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->ItemsView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ItemsView->Location = System::Drawing::Point(4, 36);
			this->ItemsView->MultiSelect = false;
			this->ItemsView->Name = L"ItemsView";
			this->ItemsView->ReadOnly = true;
			this->ItemsView->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->ItemsView->Size = System::Drawing::Size(939, 344);
			this->ItemsView->TabIndex = 1;
			// 
			// Clients
			// 
			this->Clients->Controls->Add(this->AllACCountBySaled);
			this->Clients->Controls->Add(this->AllACCountBySaledTitle);
			this->Clients->Controls->Add(this->AllACSummaryBySaledTItle);
			this->Clients->Controls->Add(this->AllACSummaryBySaled);
			this->Clients->Controls->Add(this->AllACSummaryTitle);
			this->Clients->Controls->Add(this->AllAClientsButton);
			this->Clients->Controls->Add(this->AcceptAClientsFiltersButton);
			this->Clients->Controls->Add(this->ACDateFromTo);
			this->Clients->Controls->Add(this->ACDateFromTitle);
			this->Clients->Controls->Add(this->ACBranchTitle);
			this->Clients->Controls->Add(this->ACDateTo);
			this->Clients->Controls->Add(this->ACDateFrom);
			this->Clients->Controls->Add(this->ACBranchesSelect);
			this->Clients->Controls->Add(this->ClientsView);
			this->Clients->Location = System::Drawing::Point(4, 22);
			this->Clients->Name = L"Clients";
			this->Clients->Size = System::Drawing::Size(948, 399);
			this->Clients->TabIndex = 2;
			this->Clients->Text = L"Клиенты";
			this->Clients->UseVisualStyleBackColor = true;
			// 
			// AllACCountBySaled
			// 
			this->AllACCountBySaled->AutoSize = true;
			this->AllACCountBySaled->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AllACCountBySaled->Location = System::Drawing::Point(496, 382);
			this->AllACCountBySaled->Name = L"AllACCountBySaled";
			this->AllACCountBySaled->Size = System::Drawing::Size(14, 13);
			this->AllACCountBySaled->TabIndex = 32;
			this->AllACCountBySaled->Text = L"0";
			// 
			// AllACCountBySaledTitle
			// 
			this->AllACCountBySaledTitle->AutoSize = true;
			this->AllACCountBySaledTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->AllACCountBySaledTitle->Location = System::Drawing::Point(343, 382);
			this->AllACCountBySaledTitle->Name = L"AllACCountBySaledTitle";
			this->AllACCountBySaledTitle->Size = System::Drawing::Size(156, 13);
			this->AllACCountBySaledTitle->TabIndex = 31;
			this->AllACCountBySaledTitle->Text = L"Количество проданных - ";
			// 
			// AllACSummaryBySaledTItle
			// 
			this->AllACSummaryBySaledTItle->AutoSize = true;
			this->AllACSummaryBySaledTItle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->AllACSummaryBySaledTItle->Location = System::Drawing::Point(674, 382);
			this->AllACSummaryBySaledTItle->Name = L"AllACSummaryBySaledTItle";
			this->AllACSummaryBySaledTItle->Size = System::Drawing::Size(126, 13);
			this->AllACSummaryBySaledTItle->TabIndex = 30;
			this->AllACSummaryBySaledTItle->Text = L"Сумма проданных - ";
			// 
			// AllACSummaryBySaled
			// 
			this->AllACSummaryBySaled->AutoSize = true;
			this->AllACSummaryBySaled->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->AllACSummaryBySaled->Location = System::Drawing::Point(797, 382);
			this->AllACSummaryBySaled->Name = L"AllACSummaryBySaled";
			this->AllACSummaryBySaled->Size = System::Drawing::Size(14, 13);
			this->AllACSummaryBySaled->TabIndex = 29;
			this->AllACSummaryBySaled->Text = L"0";
			// 
			// AllACSummaryTitle
			// 
			this->AllACSummaryTitle->AutoSize = true;
			this->AllACSummaryTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AllACSummaryTitle->Location = System::Drawing::Point(3, 382);
			this->AllACSummaryTitle->Name = L"AllACSummaryTitle";
			this->AllACSummaryTitle->Size = System::Drawing::Size(139, 13);
			this->AllACSummaryTitle->TabIndex = 28;
			this->AllACSummaryTitle->Text = L"Суммарные значения:";
			// 
			// AllAClientsButton
			// 
			this->AllAClientsButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->AllAClientsButton->Location = System::Drawing::Point(868, 9);
			this->AllAClientsButton->Name = L"AllAClientsButton";
			this->AllAClientsButton->Size = System::Drawing::Size(75, 23);
			this->AllAClientsButton->TabIndex = 18;
			this->AllAClientsButton->Text = L"Все";
			this->AllAClientsButton->UseVisualStyleBackColor = true;
			this->AllAClientsButton->Click += gcnew System::EventHandler(this, &Main::AllAClientsButton_Click);
			// 
			// AcceptAClientsFiltersButton
			// 
			this->AcceptAClientsFiltersButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->AcceptAClientsFiltersButton->Location = System::Drawing::Point(787, 9);
			this->AcceptAClientsFiltersButton->Name = L"AcceptAClientsFiltersButton";
			this->AcceptAClientsFiltersButton->Size = System::Drawing::Size(75, 23);
			this->AcceptAClientsFiltersButton->TabIndex = 16;
			this->AcceptAClientsFiltersButton->Text = L"Применить";
			this->AcceptAClientsFiltersButton->UseVisualStyleBackColor = true;
			this->AcceptAClientsFiltersButton->Click += gcnew System::EventHandler(this, &Main::AcceptAClientsFiltersButton_Click);
			// 
			// ACDateFromTo
			// 
			this->ACDateFromTo->AutoSize = true;
			this->ACDateFromTo->Location = System::Drawing::Point(477, 12);
			this->ACDateFromTo->Name = L"ACDateFromTo";
			this->ACDateFromTo->Size = System::Drawing::Size(22, 13);
			this->ACDateFromTo->TabIndex = 15;
			this->ACDateFromTo->Text = L"До";
			// 
			// ACDateFromTitle
			// 
			this->ACDateFromTitle->AutoSize = true;
			this->ACDateFromTitle->Location = System::Drawing::Point(245, 12);
			this->ACDateFromTitle->Name = L"ACDateFromTitle";
			this->ACDateFromTitle->Size = System::Drawing::Size(20, 13);
			this->ACDateFromTitle->TabIndex = 14;
			this->ACDateFromTitle->Text = L"От";
			// 
			// ACBranchTitle
			// 
			this->ACBranchTitle->AutoSize = true;
			this->ACBranchTitle->Location = System::Drawing::Point(6, 12);
			this->ACBranchTitle->Name = L"ACBranchTitle";
			this->ACBranchTitle->Size = System::Drawing::Size(48, 13);
			this->ACBranchTitle->TabIndex = 13;
			this->ACBranchTitle->Text = L"Филиал";
			// 
			// ACDateTo
			// 
			this->ACDateTo->Location = System::Drawing::Point(505, 10);
			this->ACDateTo->Name = L"ACDateTo";
			this->ACDateTo->Size = System::Drawing::Size(200, 20);
			this->ACDateTo->TabIndex = 12;
			// 
			// ACDateFrom
			// 
			this->ACDateFrom->Location = System::Drawing::Point(271, 9);
			this->ACDateFrom->Name = L"ACDateFrom";
			this->ACDateFrom->Size = System::Drawing::Size(200, 20);
			this->ACDateFrom->TabIndex = 11;
			// 
			// ACBranchesSelect
			// 
			this->ACBranchesSelect->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->ACBranchesSelect->FormattingEnabled = true;
			this->ACBranchesSelect->Location = System::Drawing::Point(54, 9);
			this->ACBranchesSelect->Name = L"ACBranchesSelect";
			this->ACBranchesSelect->Size = System::Drawing::Size(185, 21);
			this->ACBranchesSelect->TabIndex = 10;
			// 
			// ClientsView
			// 
			this->ClientsView->AllowUserToAddRows = false;
			this->ClientsView->AllowUserToDeleteRows = false;
			this->ClientsView->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ClientsView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->ClientsView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ClientsView->Location = System::Drawing::Point(4, 36);
			this->ClientsView->MultiSelect = false;
			this->ClientsView->Name = L"ClientsView";
			this->ClientsView->ReadOnly = true;
			this->ClientsView->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->ClientsView->Size = System::Drawing::Size(939, 343);
			this->ClientsView->TabIndex = 1;
			// 
			// MainPanel
			// 
			this->MainPanel->Controls->Add(this->StockButton);
			this->MainPanel->Controls->Add(this->DictionariesButton);
			this->MainPanel->Controls->Add(this->Exit);
			this->MainPanel->Location = System::Drawing::Point(576, 12);
			this->MainPanel->Name = L"MainPanel";
			this->MainPanel->Size = System::Drawing::Size(399, 58);
			this->MainPanel->TabIndex = 0;
			// 
			// StockButton
			// 
			this->StockButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"StockButton.Image")));
			this->StockButton->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->StockButton->Location = System::Drawing::Point(106, 3);
			this->StockButton->Name = L"StockButton";
			this->StockButton->Size = System::Drawing::Size(91, 52);
			this->StockButton->TabIndex = 2;
			this->StockButton->Text = L"Склад";
			this->StockButton->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->StockButton->UseVisualStyleBackColor = true;
			this->StockButton->Click += gcnew System::EventHandler(this, &Main::StockButton_Click);
			// 
			// DictionariesButton
			// 
			this->DictionariesButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DictionariesButton.Image")));
			this->DictionariesButton->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->DictionariesButton->Location = System::Drawing::Point(203, 3);
			this->DictionariesButton->Name = L"DictionariesButton";
			this->DictionariesButton->Size = System::Drawing::Size(91, 52);
			this->DictionariesButton->TabIndex = 1;
			this->DictionariesButton->Text = L"Справочники";
			this->DictionariesButton->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->DictionariesButton->UseVisualStyleBackColor = true;
			this->DictionariesButton->Click += gcnew System::EventHandler(this, &Main::DuctionariesButton_Click);
			// 
			// Exit
			// 
			this->Exit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Exit.Image")));
			this->Exit->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->Exit->Location = System::Drawing::Point(300, 3);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(90, 52);
			this->Exit->TabIndex = 0;
			this->Exit->Text = L"Выйти";
			this->Exit->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->Exit->UseVisualStyleBackColor = true;
			this->Exit->Click += gcnew System::EventHandler(this, &Main::Exit_Click);
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(986, 523);
			this->Controls->Add(this->MainPanel);
			this->Controls->Add(this->MainTab);
			this->MinimumSize = System::Drawing::Size(1002, 562);
			this->Name = L"Main";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Main";
			this->Load += gcnew System::EventHandler(this, &Main::Main_Load);
			this->MainTab->ResumeLayout(false);
			this->SaleItems->ResumeLayout(false);
			this->ItemsPanel->ResumeLayout(false);
			this->ItemsPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ViewItems))->EndInit();
			this->SalesPanel->ResumeLayout(false);
			this->SalesPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ViewSales))->EndInit();
			this->FilterPanel->ResumeLayout(false);
			this->FilterPanel->PerformLayout();
			this->Expences->ResumeLayout(false);
			this->Expences->PerformLayout();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ViewExpences))->EndInit();
			this->MPayments->ResumeLayout(false);
			this->MPayments->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ViewPayments))->EndInit();
			this->Analitics->ResumeLayout(false);
			this->AnaliticsTabs->ResumeLayout(false);
			this->Payments->ResumeLayout(false);
			this->Payments->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PaymanesView))->EndInit();
			this->Items->ResumeLayout(false);
			this->Items->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ItemsView))->EndInit();
			this->Clients->ResumeLayout(false);
			this->Clients->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ClientsView))->EndInit();
			this->MainPanel->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void RefreshAnalitics()
	{
				 MySqlInterface ^ msi = gcnew MySqlInterface;
				 RefreshAnaliticsPayments();
				 RefreshAnaliticsItems();
				 RefreshAnaliticsClients();
	}
			 private: System::Void RefreshAnaliticsPayments()
			 {
						  MySqlInterface ^ msi = gcnew MySqlInterface;
						  PaymanesView->DataSource = msi->GetAllAPaymentsResults();
						  PaymanesView->Columns["moveName"]->HeaderText = "Наименование";
						  PaymanesView->Columns["moveSuma"]->HeaderText = "Общая сумма";
						  APBranchesSelect->ValueMember = "Id";
						  APBranchesSelect->DisplayMember = "BranchName";
						  APBranchesSelect->DataSource = msi->GetAllBranchesResults();
						  APBranchesSelect->Text = "";
						  double sum = 0;
						  for (int i = 0; i < PaymanesView->Rows->Count; i++)
						  {
							  sum += double::Parse(String::IsNullOrEmpty(PaymanesView->Rows[i]->Cells["moveSuma"]->Value->ToString()) ? "0" : PaymanesView->Rows[i]->Cells["moveSuma"]->Value->ToString());
						  }
						  this->AllAPSumma->Text = "" + sum;
			 }
					  private: System::Void RefreshAnaliticsPayments(int branchId, System::DateTime ^ dateFrom, System::DateTime ^ dateTo)
					  {
								   MySqlInterface ^ msi = gcnew MySqlInterface;
								   PaymanesView->DataSource = msi->GetAllAPaymentsResults(branchId, dateFrom, dateTo);
								   PaymanesView->Columns["moveName"]->HeaderText = "Наименование";
								   PaymanesView->Columns["moveSuma"]->HeaderText = "Общая сумма";
								   double sum = 0;
								   for (int i = 0; i < PaymanesView->Rows->Count; i++)
								   {
									   sum += double::Parse(String::IsNullOrEmpty(PaymanesView->Rows[i]->Cells["moveSuma"]->Value->ToString()) ? "0" : PaymanesView->Rows[i]->Cells["moveSuma"]->Value->ToString());
								   }
								   this->AllAPSumma->Text = "" + sum;

					  }
			 private: System::Void RefreshAnaliticsItems()
			 {
						  MySqlInterface ^ msi = gcnew MySqlInterface;
						  ItemsView->DataSource = msi->GetAllAItemsResults();
						  ItemsView->Columns["ItemName"]->HeaderText = "Наименование";
						  ItemsView->Columns["Plan"]->HeaderText = "Количество по плану";
						  ItemsView->Columns["CountSale"]->HeaderText = "Количество проданных";
						  ItemsView->Columns["SumPlan"]->HeaderText = "Сумма по плану";
						  ItemsView->Columns["SumSale"]->HeaderText = "Сумма проданных";
						  AIBranchesSelect->ValueMember = "Id";
						  AIBranchesSelect->DisplayMember = "BranchName";
						  AIBranchesSelect->DataSource = msi->GetAllBranchesResults();
						  AIBranchesSelect->Text = "";
						  int sumCP = 0;
						  int sumCS = 0;
						  double sumSP = 0;
						  double sumSS = 0;
						  for (int i = 0; i < ItemsView->Rows->Count; i++)
						  {
							  sumCP += int::Parse(String::IsNullOrEmpty(ItemsView->Rows[i]->Cells["Plan"]->Value->ToString()) ? "0" : ItemsView->Rows[i]->Cells["Plan"]->Value->ToString());
							  sumCS += int::Parse(String::IsNullOrEmpty(ItemsView->Rows[i]->Cells["CountSale"]->Value->ToString()) ? "0" : ItemsView->Rows[i]->Cells["CountSale"]->Value->ToString());
							  sumSP += double::Parse(String::IsNullOrEmpty(ItemsView->Rows[i]->Cells["SumPlan"]->Value->ToString()) ? "0" : ItemsView->Rows[i]->Cells["SumPlan"]->Value->ToString());
							  sumCP += double::Parse(String::IsNullOrEmpty(ItemsView->Rows[i]->Cells["SumSale"]->Value->ToString()) ? "0" : ItemsView->Rows[i]->Cells["SumSale"]->Value->ToString());
						  }
						  this->AllAICountByPlan->Text = "" + sumCP;
						  this->AllAICountBySaled->Text = "" + sumCS;
						  this->AllAISummaryByPlan->Text = "" + sumSP;
						  this->AllAISummaryBySaled->Text = "" + sumSS;

			 }
					  private: System::Void RefreshAnaliticsItems(int branchId, System::DateTime ^ dateFrom, System::DateTime ^ dateTo)
					  {
								   MySqlInterface ^ msi = gcnew MySqlInterface;
								   ItemsView->DataSource = msi->GetAllAItemsResults(branchId, dateFrom, dateTo);
								   ItemsView->Columns["ItemName"]->HeaderText = "Наименование";
								   ItemsView->Columns["Plan"]->HeaderText = "Количество по плану";
								   ItemsView->Columns["CountSale"]->HeaderText = "Количество проданных";
								   ItemsView->Columns["SumPlan"]->HeaderText = "Сумма по плану";
								   ItemsView->Columns["SumSale"]->HeaderText = "Сумма проданных";
								   int sumCP = 0;
								   int sumCS = 0;
								   double sumSP = 0;
								   double sumSS = 0;
								   for (int i = 0; i < ItemsView->Rows->Count; i++)
								   {
									   sumCP += int::Parse(String::IsNullOrEmpty(ItemsView->Rows[i]->Cells["Plan"]->Value->ToString()) ? "0" : ItemsView->Rows[i]->Cells["Plan"]->Value->ToString());
									   sumCS += int::Parse(String::IsNullOrEmpty(ItemsView->Rows[i]->Cells["CountSale"]->Value->ToString()) ? "0" : ItemsView->Rows[i]->Cells["CountSale"]->Value->ToString());
									   sumSP += double::Parse(String::IsNullOrEmpty(ItemsView->Rows[i]->Cells["SumPlan"]->Value->ToString()) ? "0" : ItemsView->Rows[i]->Cells["SumPlan"]->Value->ToString());
									   sumCP += double::Parse(String::IsNullOrEmpty(ItemsView->Rows[i]->Cells["SumSale"]->Value->ToString()) ? "0" : ItemsView->Rows[i]->Cells["SumSale"]->Value->ToString());
								   }
								   this->AllAICountByPlan->Text = "" + sumCP;
								   this->AllAICountBySaled->Text = "" + sumCS;
								   this->AllAISummaryByPlan->Text = "" + sumSP;
								   this->AllAISummaryBySaled->Text = "" + sumSS;
					  }
			 private: System::Void RefreshAnaliticsClients()
			 {
						  MySqlInterface ^ msi = gcnew MySqlInterface;
						  ClientsView->DataSource = msi->GetAllAClientsResults();
						  ClientsView->Columns["ClientName"]->HeaderText = "Имя";
						  ClientsView->Columns["CountSale"]->HeaderText = "Количество проданных";
						  ClientsView->Columns["SumSale"]->HeaderText = "Сумма проданных";
						  ACBranchesSelect->ValueMember = "Id";
						  ACBranchesSelect->DisplayMember = "BranchName";
						  ACBranchesSelect->DataSource = msi->GetAllBranchesResults();
						  ACBranchesSelect->Text = "";
						  int sumCS = 0;
						  double sumSS = 0;
						  for (int i = 0; i < ClientsView->Rows->Count; i++)
						  {
							  sumCS += int::Parse(String::IsNullOrEmpty(ClientsView->Rows[i]->Cells["CountSale"]->Value->ToString()) ? "0" : ClientsView->Rows[i]->Cells["CountSale"]->Value->ToString());
							  sumSS += double::Parse(String::IsNullOrEmpty(ClientsView->Rows[i]->Cells["SumSale"]->Value->ToString()) ? "0" : ClientsView->Rows[i]->Cells["SumSale"]->Value->ToString());
						  }
						  this->AllACCountBySaled->Text = "" + sumCS;
						  this->AllACSummaryBySaled->Text = "" + sumSS;
			 }
					  private: System::Void RefreshAnaliticsClients(int branchId, System::DateTime ^ dateFrom, System::DateTime ^ dateTo)
					  {
								   MySqlInterface ^ msi = gcnew MySqlInterface;
								   ClientsView->DataSource = msi->GetAllAClientsResults(branchId, dateFrom, dateTo);
								   ClientsView->Columns["ClientName"]->HeaderText = "Имя";
								   ClientsView->Columns["CountSale"]->HeaderText = "Количество проданных";
								   ClientsView->Columns["SumSale"]->HeaderText = "Сумма проданных";
								   int sumCS = 0;
								   double sumSS = 0;
								   for (int i = 0; i < ClientsView->Rows->Count; i++)
								   {
									   sumCS += int::Parse(String::IsNullOrEmpty(ClientsView->Rows[i]->Cells["CountSale"]->Value->ToString()) ? "0" : ClientsView->Rows[i]->Cells["CountSale"]->Value->ToString());
									   sumSS += double::Parse(String::IsNullOrEmpty(ClientsView->Rows[i]->Cells["SumSale"]->Value->ToString()) ? "0" : ClientsView->Rows[i]->Cells["SumSale"]->Value->ToString());
								   }
								   this->AllACCountBySaled->Text = "" + sumCS;
								   this->AllACSummaryBySaled->Text = "" + sumSS;
					  }
			 private: System::Void RefreshSales()
			 {
						  MySqlInterface ^ msi = gcnew MySqlInterface;
						  ViewSales->DataSource = msi->GetAllSalesResults();
						  ViewSales->Columns["Id"]->HeaderText = "Заказ №";
						  ViewSales->Columns["BranchName"]->HeaderText = "Филиал";
						  ViewSales->Columns["ClientName"]->HeaderText = "Клиент";
						  ViewSales->Columns["DateSale"]->HeaderText = "Дата";
						  ViewSales->Columns["Status"]->Visible = false;
						  if (!ViewSales->Columns->Contains("IsPayed"))
						  {
							  ViewSales->Columns->Add("IsPayed", "Оплачен");
						  }
						  for (int i = 0; i < ViewSales->Rows->Count; i++)
						  {
							  ViewSales->Rows[i]->Cells["IsPayed"]->Value = ViewSales->Rows[i]->Cells["Status"]->Value->ToString() == "0" ? "Нет" : "Да";
						  }
						  BranchesList->ValueMember = "Id";
						  BranchesList->DisplayMember = "BranchName";
						  BranchesList->DataSource = msi->GetAllBranchesResults();
						  BranchesList->Text = "";
						  ClientsList->ValueMember = "Id";
						  ClientsList->DisplayMember = "ClientName";
						  ClientsList->DataSource = msi->GetAllClientsResults();
						  ClientsList->Text = "";
			 }

					  private: System::Void RefreshSales(int branchId, int clientId, System::DateTime ^ dateFrom, System::DateTime ^ dateTo)
					  {
								   MySqlInterface ^ msi = gcnew MySqlInterface;
								   ViewSales->DataSource = msi->GetAllSalesResults(branchId, clientId, dateFrom, dateTo);
								   ViewSales->Columns["Id"]->HeaderText = "Заказ №";
								   ViewSales->Columns["BranchName"]->HeaderText = "Филиал";
								   ViewSales->Columns["ClientName"]->HeaderText = "Клиент";
								   ViewSales->Columns["DateSale"]->HeaderText = "Дата";
								   ViewSales->Columns["Status"]->Visible = false;
								   if (!ViewSales->Columns->Contains("IsPayed"))
								   {
									   ViewSales->Columns->Add("IsPayed", "Оплачен");
								   }
								   for (int i = 0; i < ViewSales->Rows->Count; i++)
								   {
									   ViewSales->Rows[i]->Cells["IsPayed"]->Value = ViewSales->Rows[i]->Cells["Status"]->Value->ToString() == "0" ? "Нет" : "Да";
								   }
					  }
					  private: System::Void RefreshSaleItems(int id)
					  {
								   MySqlInterface ^ msi = gcnew MySqlInterface;
								   ViewItems->DataSource = msi->GetAllSaleItemsResults(id);
								   ViewItems->Columns["BranchName"]->HeaderText = "Филиал";
								   ViewItems->Columns["ItemName"]->HeaderText = "Товар";
								   ViewItems->Columns["Qty"]->HeaderText = "Количество";
								   ViewItems->Columns["Cost"]->HeaderText = "Цена";
								   ViewItems->Columns["Id"]->Visible = false;
					  }
								private: System::Void RefreshExpenses()
								{
											 MySqlInterface ^ msi = gcnew MySqlInterface;
											 ViewExpences->DataSource = msi->GetAllExpensesResults();
											 ViewExpences->Columns["BranchName"]->HeaderText = "Филиал";
											 ViewExpences->Columns["ArticleName"]->HeaderText = "Предмет";
											 ViewExpences->Columns["DateExpense"]->HeaderText = "Дата";
											 ViewExpences->Columns["Suma"]->HeaderText = "Цена";
											 ViewExpences->Columns["Id"]->Visible = false;
											 EBranchesList->ValueMember = "Id";
											 EBranchesList->DisplayMember = "BranchName";
											 EBranchesList->DataSource = msi->GetAllBranchesResults();
											 EBranchesList->Text = "";
								}
										 private: System::Void RefreshExpenses(int branchId, System::DateTime ^ dateFrom, System::DateTime ^ dateTo)
										 {
													  MySqlInterface ^ msi = gcnew MySqlInterface;
													  ViewExpences->DataSource = msi->GetAllExpensesResults(branchId, dateFrom, dateTo);
													  ViewExpences->Columns["BranchName"]->HeaderText = "Филиал";
													  ViewExpences->Columns["ArticleName"]->HeaderText = "Предмет";
													  ViewExpences->Columns["DateExpense"]->HeaderText = "Дата";
													  ViewExpences->Columns["Suma"]->HeaderText = "Цена";
													  ViewExpences->Columns["Id"]->Visible = false;
										 }
										 private: System::Void RefreshPayments()
										 {
													  MySqlInterface ^ msi = gcnew MySqlInterface;
													  ViewPayments->DataSource = msi->GetAllPaymentsResults();
													  ViewPayments->Columns["SaleId"]->HeaderText = "Заказ №";
													  ViewPayments->Columns["ClientName"]->HeaderText = "Клиент";
													  ViewPayments->Columns["BranchName"]->HeaderText = "Филиал";
													  ViewPayments->Columns["DatePay"]->HeaderText = "Дата";
													  ViewPayments->Columns["Suma"]->HeaderText = "Сумма";
													  ViewPayments->Columns["Id"]->Visible = false;
													  PBranchesList->ValueMember = "Id";
													  PBranchesList->DisplayMember = "BranchName";
													  PBranchesList->DataSource = msi->GetAllBranchesResults();
													  PBranchesList->Text = "";
													  PClientsList->ValueMember = "Id";
													  PClientsList->DisplayMember = "ClientName";
													  PClientsList->DataSource = msi->GetAllClientsResults();
													  PClientsList->Text = "";
										 }
												  private: System::Void RefreshPayments(int branchId, int clientId, System::DateTime ^ dateFrom, System::DateTime ^ dateTo)
												  {
															   MySqlInterface ^ msi = gcnew MySqlInterface;
															   ViewPayments->DataSource = msi->GetAllPaymentsResults(branchId, clientId, dateFrom, dateTo);
															   ViewPayments->Columns["SaleId"]->HeaderText = "Заказ №";
															   ViewPayments->Columns["ClientName"]->HeaderText = "Клиент";
															   ViewPayments->Columns["BranchName"]->HeaderText = "Филиал";
															   ViewPayments->Columns["DatePay"]->HeaderText = "Дата";
															   ViewPayments->Columns["Suma"]->HeaderText = "Сумма";
															   ViewPayments->Columns["Id"]->Visible = false;
												  }
	private: System::Void DuctionariesButton_Click(System::Object^  sender, System::EventArgs^  e) {
				 Dictionaries ^ dics = gcnew Dictionaries;
				 dics->ShowDialog();
	}
private: System::Void Exit_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
}
private: System::Void StockButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 Stock ^ st = gcnew Stock;
			 st->ShowDialog();
}
private: System::Void AddSaleButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 SaleForm ^ sf = gcnew SaleForm;
			 sf->ShowDialog();
			 RefreshSales();
}
private: System::Void PaymentsButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Ошибка соединения с базой даных");
}
private: System::Void Main_Load(System::Object^  sender, System::EventArgs^  e) {
			 try
			 {
				 RefreshSales();
			 }
			 catch (Exception ^ e)
			 {
				 MessageBox::Show("Ошибка соединения с базой даных");
			 }
}
private: System::Void EditSaleButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 DataGridViewRow ^ row;
			 try
			 {
				 row = ViewSales->SelectedRows[0];
				 SaleForm ^ sf = gcnew SaleForm(int::Parse(row->Cells["Id"]->Value->ToString()), row->Cells["BranchName"]->Value->ToString(), row->Cells["ClientName"]->Value->ToString(), row->Cells["DateSale"]->Value->ToString());
				 sf->ShowDialog();
				 RefreshSales();
			 }
			 catch (Exception ^ e)
			 {
				 MessageBox::Show("Выберите заказ");
			 }
}
		 private: System::Void OnCellClick(System::Object ^sender, System::Windows::Forms::DataGridViewCellEventArgs ^e) {
					  DataGridViewRow ^ row;
					  try
					  {
						  row = ViewSales->SelectedRows[0];
						  RefreshSaleItems(int::Parse(row->Cells["Id"]->Value->ToString()));
					  }
					  catch (Exception ^ e)
					  {
						  MessageBox::Show("Ошибка соединения с базой даных");
					  }
		 }
private: System::Void AddExpenceButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 ExpenseForm ^ ef = gcnew ExpenseForm();
			 ef->ShowDialog();
			 RefreshExpenses();
}
private: System::Void EditExpenceButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 DataGridViewRow ^ row;
			 try
			 {
				 row = ViewExpences->SelectedRows[0];
				 ExpenseForm ^ sf = gcnew ExpenseForm(int::Parse(row->Cells["Id"]->Value->ToString()), row->Cells["BranchName"]->Value->ToString(), row->Cells["ArticleName"]->Value->ToString(), row->Cells["DateExpense"]->Value->ToString(), double::Parse(row->Cells["Suma"]->Value->ToString()));
				 sf->ShowDialog();
				 RefreshExpenses();
			 }
			 catch (Exception ^ e)
			 {
				 MessageBox::Show("Выберите расход");
			 }
}
private: System::Void AddPaymentButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 PaymentForm ^ pf = gcnew PaymentForm();
			 pf->ShowDialog();
			 RefreshPayments();
}
private: System::Void EditPaymentButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 DataGridViewRow ^ row;
			 try
			 {
				 row = ViewPayments->SelectedRows[0];
				 PaymentForm ^ sf = gcnew PaymentForm(int::Parse(row->Cells["Id"]->Value->ToString()), int::Parse(row->Cells["SaleId"]->Value->ToString()), row->Cells["DatePay"]->Value->ToString(), double::Parse(row->Cells["Suma"]->Value->ToString()));
				 sf->ShowDialog();
				 RefreshPayments();
			 }
			 catch (Exception ^ e)
			 {
				 MessageBox::Show("Выберите платеж");
			 }
}
		 private: System::Void OnSelectedIndexChanged(System::Object ^sender, System::EventArgs ^e){
			 if (this->ViewExpences->Rows->Count <= 0 && this->MainTab->SelectedIndex == 1)
			 {
				 RefreshExpenses();
			 }
			 else if (this->ViewPayments->Rows->Count <= 0 && this->MainTab->SelectedIndex == 2)
			 {
				 RefreshPayments();
			 }
			 else if (this->MainTab->SelectedIndex == 3)
			 {
				 RefreshAnalitics();
			 }
		 }
private: System::Void SAllButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 RefreshSales();
}
private: System::Void SAcceptFiltersButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 RefreshSales(int::Parse(this->BranchesList->SelectedValue->ToString()), int::Parse(this->ClientsList->SelectedValue->ToString()), this->DateFrom->Value, this->DateTo->Value);
}
private: System::Void EAllExpences_Click(System::Object^  sender, System::EventArgs^  e) {
			 RefreshExpenses();
}
private: System::Void EAcceptFiltersButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 RefreshExpenses(int::Parse(this->EBranchesList->SelectedValue->ToString()), this->EDateFrom->Value, this->EDateTo->Value);
}
private: System::Void PAllPaymentsButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 RefreshPayments();
}
private: System::Void PAcceptFiltersButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 RefreshPayments(int::Parse(this->PBranchesList->SelectedValue->ToString()), int::Parse(this->PClientsList->SelectedValue->ToString()), this->PDateFrom->Value, this->PDateTo->Value);
}
private: System::Void DeleteSaleItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 System::Windows::Forms::DialogResult ^ alert = MessageBox::Show("Вы уверены, что хотите удалить заказ?\r\nТакже будут удалены все данные по этому заказу.", "Удаление заказа", MessageBoxButtons::YesNo);
			 if (*alert == System::Windows::Forms::DialogResult::Yes)
			 {
				 DataGridViewRow ^ row;
				 MySqlInterface ^ msi = gcnew MySqlInterface;
				 try
				 {
					 row = ViewSales->SelectedRows[0];
					 msi->DeleteSale(System::Int32::Parse(row->Cells["Id"]->Value->ToString()));
					 RefreshSales();
				 }
				 catch (Exception ^ ex)
				 {
					 MessageBox::Show("Возможно, ето объект где-то используется");
				 }
			 }
}
private: System::Void DeleteExpenceButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 System::Windows::Forms::DialogResult ^ alert = MessageBox::Show("Вы уверены, что хотите удалить расход?\r\nТакже будут удалены все данные по этому расходу.", "Удаление расхода", MessageBoxButtons::YesNo);
			 if (*alert == System::Windows::Forms::DialogResult::Yes)
			 {
				 DataGridViewRow ^ row;
				 MySqlInterface ^ msi = gcnew MySqlInterface;
				 try
				 {
					 row = ViewExpences->SelectedRows[0];
					 msi->DeleteExpense(System::Int32::Parse(row->Cells["Id"]->Value->ToString()));
					 RefreshExpenses();
				 }
				 catch (Exception ^ ex)
				 {
					 MessageBox::Show("Возможно, ето объект где-то используется");
				 }
			 }
}
private: System::Void DeletePaymentButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 System::Windows::Forms::DialogResult ^ alert = MessageBox::Show("Вы уверены, что хотите удалить платеж?\r\nТакже будут удалены все данные по этому платежу.", "Удаление платеж", MessageBoxButtons::YesNo);
			 if (*alert == System::Windows::Forms::DialogResult::Yes)
			 {
				 DataGridViewRow ^ row;
				 MySqlInterface ^ msi = gcnew MySqlInterface;
				 try
				 {
					 row = ViewPayments->SelectedRows[0];
					 msi->DeletePayment(System::Int32::Parse(row->Cells["Id"]->Value->ToString()));
					 RefreshPayments();
				 }
				 catch (Exception ^ ex)
				 {
					 MessageBox::Show("Возможно, ето объект где-то используется");
				 }
			 }
}
private: System::Void AcceptAPaymentsFiltersButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 RefreshAnaliticsPayments(int::Parse(this->APBranchesSelect->SelectedValue->ToString()), this->APDateFrom->Value, this->APDateTo->Value);
}
private: System::Void AllAPaymentsButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 RefreshAnaliticsPayments();
}
private: System::Void AcceptAItemsFiltersButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 RefreshAnaliticsItems(int::Parse(this->AIBranchesSelect->SelectedValue->ToString()), this->AIDateFrom->Value, this->AIDateTo->Value);
}
private: System::Void AllAItemsButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 RefreshAnaliticsItems();
}
private: System::Void AcceptAClientsFiltersButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 RefreshAnaliticsClients(int::Parse(this->ACBranchesSelect->SelectedValue->ToString()), this->ACDateFrom->Value, this->ACDateTo->Value);
}
private: System::Void AllAClientsButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 RefreshAnaliticsClients();
}
};
}
