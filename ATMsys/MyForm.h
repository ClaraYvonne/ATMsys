#pragma once

namespace ATMsys {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		int pinNo;
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ btnblank2;


	private: System::Windows::Forms::Button^ btncancel;

	private: System::Windows::Forms::Button^ btnclear;
	private: System::Windows::Forms::Button^ btnenter;
	private: System::Windows::Forms::Button^ btn0;

	private: System::Windows::Forms::Button^ btn8;

	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btnblank3;




	private: System::Windows::Forms::Button^ btn7;

	private: System::Windows::Forms::Button^ btn4;

	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btnblank;
	private: System::Windows::Forms::Button^ btn9;



	private: System::Windows::Forms::Button^ btn6;

	private: System::Windows::Forms::Button^ btn3;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ btnPrintStatement;
	private: System::Windows::Forms::Button^ btnBalance;








	private: System::Windows::Forms::Button^ btnDeposit;

	private: System::Windows::Forms::Button^ btnLoan;
	private: System::Windows::Forms::Button^ btnMiniStatement;

	private: System::Windows::Forms::Button^ btnRequestNewPin;

	private: System::Windows::Forms::Button^ btnReceipt;











	private: System::Windows::Forms::Button^ btnCash;

	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::RichTextBox^ rtDisplay;

	private: System::Windows::Forms::TextBox^ txtEnterPin;
	private: System::Drawing::Printing::PrintDocument^ printDocument1;
	private: System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog1;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->btnblank2 = (gcnew System::Windows::Forms::Button());
			this->btncancel = (gcnew System::Windows::Forms::Button());
			this->btnclear = (gcnew System::Windows::Forms::Button());
			this->btnenter = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btnblank3 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btnblank = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btnPrintStatement = (gcnew System::Windows::Forms::Button());
			this->btnBalance = (gcnew System::Windows::Forms::Button());
			this->btnDeposit = (gcnew System::Windows::Forms::Button());
			this->btnLoan = (gcnew System::Windows::Forms::Button());
			this->btnMiniStatement = (gcnew System::Windows::Forms::Button());
			this->btnRequestNewPin = (gcnew System::Windows::Forms::Button());
			this->btnReceipt = (gcnew System::Windows::Forms::Button());
			this->btnCash = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->txtEnterPin = (gcnew System::Windows::Forms::TextBox());
			this->rtDisplay = (gcnew System::Windows::Forms::RichTextBox());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Maroon;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(787, 768);
			this->panel1->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->btnblank2);
			this->panel3->Controls->Add(this->btncancel);
			this->panel3->Controls->Add(this->btnclear);
			this->panel3->Controls->Add(this->btnenter);
			this->panel3->Controls->Add(this->btn0);
			this->panel3->Controls->Add(this->btn8);
			this->panel3->Controls->Add(this->btn2);
			this->panel3->Controls->Add(this->btn5);
			this->panel3->Controls->Add(this->btnblank3);
			this->panel3->Controls->Add(this->btn7);
			this->panel3->Controls->Add(this->btn4);
			this->panel3->Controls->Add(this->btn1);
			this->panel3->Controls->Add(this->btnblank);
			this->panel3->Controls->Add(this->btn9);
			this->panel3->Controls->Add(this->btn6);
			this->panel3->Controls->Add(this->btn3);
			this->panel3->Location = System::Drawing::Point(18, 372);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(747, 376);
			this->panel3->TabIndex = 2;
			// 
			// btnblank2
			// 
			this->btnblank2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnblank2.BackgroundImage")));
			this->btnblank2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnblank2->Location = System::Drawing::Point(370, 279);
			this->btnblank2->Name = L"btnblank2";
			this->btnblank2->Size = System::Drawing::Size(162, 86);
			this->btnblank2->TabIndex = 19;
			this->btnblank2->UseVisualStyleBackColor = true;
			// 
			// btncancel
			// 
			this->btncancel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btncancel.BackgroundImage")));
			this->btncancel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btncancel->Location = System::Drawing::Point(580, 187);
			this->btncancel->Name = L"btncancel";
			this->btncancel->Size = System::Drawing::Size(162, 86);
			this->btncancel->TabIndex = 21;
			this->btncancel->UseVisualStyleBackColor = true;
			this->btncancel->Click += gcnew System::EventHandler(this, &MyForm::btncancel_Click);
			// 
			// btnclear
			// 
			this->btnclear->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnclear.BackgroundImage")));
			this->btnclear->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnclear->CausesValidation = false;
			this->btnclear->Location = System::Drawing::Point(580, 95);
			this->btnclear->Name = L"btnclear";
			this->btnclear->Size = System::Drawing::Size(162, 86);
			this->btnclear->TabIndex = 20;
			this->btnclear->UseVisualStyleBackColor = true;
			this->btnclear->Click += gcnew System::EventHandler(this, &MyForm::btnclear_Click);
			// 
			// btnenter
			// 
			this->btnenter->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnenter.BackgroundImage")));
			this->btnenter->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnenter->Location = System::Drawing::Point(580, 3);
			this->btnenter->Name = L"btnenter";
			this->btnenter->Size = System::Drawing::Size(162, 86);
			this->btnenter->TabIndex = 18;
			this->btnenter->UseVisualStyleBackColor = true;
			this->btnenter->Click += gcnew System::EventHandler(this, &MyForm::btnenter_Click);
			// 
			// btn0
			// 
			this->btn0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn0.BackgroundImage")));
			this->btn0->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn0->Location = System::Drawing::Point(202, 279);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(162, 86);
			this->btn0->TabIndex = 15;
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &MyForm::btn0_Click);
			// 
			// btn8
			// 
			this->btn8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn8.BackgroundImage")));
			this->btn8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn8->Location = System::Drawing::Point(202, 187);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(162, 86);
			this->btn8->TabIndex = 17;
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &MyForm::btn8_Click);
			// 
			// btn2
			// 
			this->btn2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn2.BackgroundImage")));
			this->btn2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn2->Location = System::Drawing::Point(202, 7);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(162, 86);
			this->btn2->TabIndex = 16;
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &MyForm::btn2_Click);
			// 
			// btn5
			// 
			this->btn5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn5.BackgroundImage")));
			this->btn5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn5->Location = System::Drawing::Point(202, 94);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(162, 86);
			this->btn5->TabIndex = 14;
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &MyForm::btn5_Click);
			// 
			// btnblank3
			// 
			this->btnblank3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnblank3.BackgroundImage")));
			this->btnblank3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnblank3->Location = System::Drawing::Point(34, 279);
			this->btnblank3->Name = L"btnblank3";
			this->btnblank3->Size = System::Drawing::Size(162, 86);
			this->btnblank3->TabIndex = 11;
			this->btnblank3->UseVisualStyleBackColor = true;
			// 
			// btn7
			// 
			this->btn7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn7.BackgroundImage")));
			this->btn7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn7->Location = System::Drawing::Point(34, 187);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(162, 86);
			this->btn7->TabIndex = 13;
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &MyForm::btn7_Click);
			// 
			// btn4
			// 
			this->btn4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn4.BackgroundImage")));
			this->btn4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn4->Location = System::Drawing::Point(34, 95);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(162, 86);
			this->btn4->TabIndex = 12;
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &MyForm::btn4_Click);
			// 
			// btn1
			// 
			this->btn1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn1.BackgroundImage")));
			this->btn1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn1->Location = System::Drawing::Point(34, 7);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(162, 86);
			this->btn1->TabIndex = 10;
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &MyForm::btn1_Click);
			// 
			// btnblank
			// 
			this->btnblank->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnblank.BackgroundImage")));
			this->btnblank->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnblank->Location = System::Drawing::Point(580, 279);
			this->btnblank->Name = L"btnblank";
			this->btnblank->Size = System::Drawing::Size(162, 86);
			this->btnblank->TabIndex = 7;
			this->btnblank->UseVisualStyleBackColor = true;
			// 
			// btn9
			// 
			this->btn9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn9.BackgroundImage")));
			this->btn9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn9->Location = System::Drawing::Point(370, 187);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(162, 86);
			this->btn9->TabIndex = 9;
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &MyForm::btn9_Click);
			// 
			// btn6
			// 
			this->btn6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn6.BackgroundImage")));
			this->btn6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn6->Location = System::Drawing::Point(370, 95);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(162, 86);
			this->btn6->TabIndex = 8;
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &MyForm::btn6_Click);
			// 
			// btn3
			// 
			this->btn3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn3.BackgroundImage")));
			this->btn3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn3->Location = System::Drawing::Point(370, 7);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(162, 86);
			this->btn3->TabIndex = 6;
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &MyForm::btn3_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->btnPrintStatement);
			this->panel2->Controls->Add(this->btnBalance);
			this->panel2->Controls->Add(this->btnDeposit);
			this->panel2->Controls->Add(this->btnLoan);
			this->panel2->Controls->Add(this->btnMiniStatement);
			this->panel2->Controls->Add(this->btnRequestNewPin);
			this->panel2->Controls->Add(this->btnReceipt);
			this->panel2->Controls->Add(this->btnCash);
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Location = System::Drawing::Point(18, 23);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(747, 343);
			this->panel2->TabIndex = 1;
			// 
			// btnPrintStatement
			// 
			this->btnPrintStatement->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPrintStatement.BackgroundImage")));
			this->btnPrintStatement->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnPrintStatement->Location = System::Drawing::Point(606, 244);
			this->btnPrintStatement->Name = L"btnPrintStatement";
			this->btnPrintStatement->Size = System::Drawing::Size(136, 85);
			this->btnPrintStatement->TabIndex = 7;
			this->toolTip1->SetToolTip(this->btnPrintStatement, L"Print Statement");
			this->btnPrintStatement->UseVisualStyleBackColor = true;
			this->btnPrintStatement->Click += gcnew System::EventHandler(this, &MyForm::btnPrintStatement_Click);
			// 
			// btnBalance
			// 
			this->btnBalance->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBalance.BackgroundImage")));
			this->btnBalance->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnBalance->Location = System::Drawing::Point(606, 167);
			this->btnBalance->Name = L"btnBalance";
			this->btnBalance->Size = System::Drawing::Size(136, 85);
			this->btnBalance->TabIndex = 9;
			this->toolTip1->SetToolTip(this->btnBalance, L"Balance");
			this->btnBalance->UseVisualStyleBackColor = true;
			this->btnBalance->Click += gcnew System::EventHandler(this, &MyForm::btnBalance_Click);
			// 
			// btnDeposit
			// 
			this->btnDeposit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDeposit.BackgroundImage")));
			this->btnDeposit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnDeposit->Location = System::Drawing::Point(606, 90);
			this->btnDeposit->Name = L"btnDeposit";
			this->btnDeposit->Size = System::Drawing::Size(136, 85);
			this->btnDeposit->TabIndex = 8;
			this->toolTip1->SetToolTip(this->btnDeposit, L"Deposit");
			this->btnDeposit->UseVisualStyleBackColor = true;
			this->btnDeposit->Click += gcnew System::EventHandler(this, &MyForm::btnDeposit_Click);
			// 
			// btnLoan
			// 
			this->btnLoan->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnLoan.BackgroundImage")));
			this->btnLoan->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnLoan->Location = System::Drawing::Point(606, 13);
			this->btnLoan->Name = L"btnLoan";
			this->btnLoan->Size = System::Drawing::Size(136, 85);
			this->btnLoan->TabIndex = 6;
			this->toolTip1->SetToolTip(this->btnLoan, L"Loan");
			this->btnLoan->UseVisualStyleBackColor = true;
			this->btnLoan->Click += gcnew System::EventHandler(this, &MyForm::btnLoan_Click);
			// 
			// btnMiniStatement
			// 
			this->btnMiniStatement->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMiniStatement.BackgroundImage")));
			this->btnMiniStatement->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnMiniStatement->Location = System::Drawing::Point(3, 244);
			this->btnMiniStatement->Name = L"btnMiniStatement";
			this->btnMiniStatement->Size = System::Drawing::Size(140, 85);
			this->btnMiniStatement->TabIndex = 4;
			this->toolTip1->SetToolTip(this->btnMiniStatement, L"Statement");
			this->btnMiniStatement->UseVisualStyleBackColor = true;
			this->btnMiniStatement->Click += gcnew System::EventHandler(this, &MyForm::btnMiniStatement_Click);
			// 
			// btnRequestNewPin
			// 
			this->btnRequestNewPin->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnRequestNewPin.BackgroundImage")));
			this->btnRequestNewPin->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnRequestNewPin->Location = System::Drawing::Point(3, 167);
			this->btnRequestNewPin->Name = L"btnRequestNewPin";
			this->btnRequestNewPin->Size = System::Drawing::Size(140, 85);
			this->btnRequestNewPin->TabIndex = 5;
			this->toolTip1->SetToolTip(this->btnRequestNewPin, L"Request New Pin");
			this->btnRequestNewPin->UseVisualStyleBackColor = true;
			this->btnRequestNewPin->Click += gcnew System::EventHandler(this, &MyForm::btnRequestNewPin_Click);
			// 
			// btnReceipt
			// 
			this->btnReceipt->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnReceipt.BackgroundImage")));
			this->btnReceipt->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnReceipt->Location = System::Drawing::Point(3, 90);
			this->btnReceipt->Name = L"btnReceipt";
			this->btnReceipt->Size = System::Drawing::Size(140, 85);
			this->btnReceipt->TabIndex = 4;
			this->toolTip1->SetToolTip(this->btnReceipt, L"Cash With Receipt");
			this->btnReceipt->UseVisualStyleBackColor = true;
			this->btnReceipt->Click += gcnew System::EventHandler(this, &MyForm::btnReceipt_Click);
			// 
			// btnCash
			// 
			this->btnCash->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCash.BackgroundImage")));
			this->btnCash->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnCash->Location = System::Drawing::Point(7, 13);
			this->btnCash->Name = L"btnCash";
			this->btnCash->Size = System::Drawing::Size(136, 85);
			this->btnCash->TabIndex = 3;
			this->toolTip1->SetToolTip(this->btnCash, L"Cash");
			this->btnCash->UseVisualStyleBackColor = true;
			this->btnCash->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->txtEnterPin);
			this->panel4->Controls->Add(this->rtDisplay);
			this->panel4->Location = System::Drawing::Point(149, 13);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(451, 316);
			this->panel4->TabIndex = 2;
			// 
			// txtEnterPin
			// 
			this->txtEnterPin->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtEnterPin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtEnterPin->Location = System::Drawing::Point(18, 153);
			this->txtEnterPin->Name = L"txtEnterPin";
			this->txtEnterPin->Size = System::Drawing::Size(418, 38);
			this->txtEnterPin->TabIndex = 1;
			this->txtEnterPin->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// rtDisplay
			// 
			this->rtDisplay->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rtDisplay->Location = System::Drawing::Point(3, 3);
			this->rtDisplay->Name = L"rtDisplay";
			this->rtDisplay->Size = System::Drawing::Size(443, 308);
			this->rtDisplay->TabIndex = 0;
			this->rtDisplay->Text = L"";
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &MyForm::printDocument1_PrintPage);
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Document = this->printDocument1;
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(808, 790);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"BPI ATM";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);

		}

private: System::Void btnenter_Click(System::Object^ sender, System::EventArgs^ e) {
	if ((txtEnterPin->Text == "4386") || (txtEnterPin->Text == "5649") || (txtEnterPin->Text == "6281") || (txtEnterPin->Text == "6969"))
{
		pinNo = int::Parse(txtEnterPin->Text);

	btnLoan->Enabled = true;
	btnDeposit->Enabled = true;
	btnRequestNewPin->Enabled = true;
	btnPrintStatement->Enabled = true;

	btnCash->Enabled = true;
	btnMiniStatement->Enabled = true;
	btnReceipt->Enabled = true;
	btnBalance->Enabled = true;

	txtEnterPin->Visible = false();

	rtDisplay->AppendText("\t\t            Welcome to BPI\n\n");
	rtDisplay->AppendText("Withdraw Cash" + "\t\t\t\t" + "                   Loan" + "\n\n\n\n\n");
	rtDisplay->AppendText("Cash with Receipt" + "\t\t\t\t" + "                Deposit" + "\n\n\n\n\n");
	rtDisplay->AppendText("Request New Pin" + "\t\t\t\t" + "                Balance" + "\n\n\n\n\n");
	rtDisplay->AppendText("Mini Statement" + "\t\t\t\t" + "      Print Statement" + "\n");
	

	}
	else 
	{
		txtEnterPin->Text = ("Invalid Pin Number");
		txtEnterPin->Focus();


		btnLoan->Enabled = false();
		btnDeposit->Enabled = false();
		btnRequestNewPin->Enabled = false();
		btnPrintStatement->Enabled = false();

		btnCash->Enabled = false();
		btnMiniStatement->Enabled = false();
		btnReceipt->Enabled = false();
		btnBalance->Enabled = false();
	}
	if ((txtEnterPin->Text != "" && rtDisplay->Text != ""))
	{
		txtEnterPin->Text = "Cash Withdrawl Confirmed";
	}

	if ((txtEnterPin->Text != "" && rtDisplay->Text == "Loan"))
	{
		rtDisplay->Text = "";
		rtDisplay->AppendText("Loan of Cash Confirmed and Granted");
		txtEnterPin->Text = "";
		txtEnterPin->Text = "Loan Transaction Completed";
	}

	if ((txtEnterPin->Text != "" && rtDisplay->Text == "Deposit"))
	{
		rtDisplay->Clear();
		rtDisplay->AppendText("Cash deposit confirmed, please re-enter your pin number");
		txtEnterPin->Text = "";
		txtEnterPin->Text = "Deposit Transaction Completed";
	}
}
private: System::Void btnclear_Click(System::Object^ sender, System::EventArgs^ e) {
	EnableButton();
}

private: System::Void EnableButton()
{
	btnLoan->Enabled = false();
	btnDeposit->Enabled = false();
	btnRequestNewPin->Enabled = false();
	btnPrintStatement->Enabled = false();

	btnCash->Enabled = false();
	btnMiniStatement->Enabled = false();
	btnReceipt->Enabled = false();
	btnBalance->Enabled = false();

	rtDisplay->Clear();
	txtEnterPin->Text = "";
	txtEnterPin->Visible = true;
	txtEnterPin->Focus();

}
	   private: System::Void balance() {
		   if (pinNo == 4386)
		   {
			   rtDisplay->Clear();
			   rtDisplay->AppendText("\t\t      Account Number: 451835\n\n\n");
			   rtDisplay->AppendText("Balance is" + "\t\t\t\t\t" + "5000" + "\n\n\n\n");
		   }

		   if (pinNo == 5649)
		   {
			   rtDisplay->Clear();
			   rtDisplay->AppendText("\t\t      Account Number: 281613\n\n\n");
			   rtDisplay->AppendText("Balance is" + "\t\t\t\t\t" + "7000" + "\n\n\n\n");
		   }

		   if (pinNo == 6281)
		   {
			   rtDisplay->Clear();
			   rtDisplay->AppendText("\t\t      Account Number: 371496\n\n\n");
			   rtDisplay->AppendText("Balance is" + "\t\t\t\t\t" + "9000" + "\n\n\n\n");
		   }

		   if (pinNo == 6969)
		   {
			   rtDisplay->Clear();
			   rtDisplay->AppendText("\t\t      Account Number: 173952\n\n\n");
			   rtDisplay->AppendText("Balance is" + "\t\t\t\t\t" + "30000" + "\n\n\n\n");
		   }
	   }

	private: System::Void statement() 
	{
		if (pinNo == 4386)
		{
			rtDisplay->Clear();
			rtDisplay->AppendText("\t\t      Account Number: 451835\n\n\n");
			rtDisplay->AppendText("Balance is" + "\t\t\t\t\t" + "5000" + "\n\n\n\n");
			rtDisplay->AppendText("Lottery" + "\t\t\t\t\t" + "2500" + "\n\n\n\n");
			rtDisplay->AppendText("SSS" + "\t\t\t\t\t" + "1000" + "\n\n\n\n");
			rtDisplay->AppendText("Medical Insurance" + "\t\t\t\t" + "1000" + "\n\n\n\n");
			rtDisplay->AppendText("Others" + "\t\t\t\t\t" + "500");
		}

		if (pinNo == 5649)
		{
			rtDisplay->Clear();
			rtDisplay->AppendText("\t\t      Account Number: 281613\n\n\n");
			rtDisplay->AppendText("Balance is" + "\t\t\t\t\t" + "7000" + "\n\n\n\n");
			rtDisplay->AppendText("Lottery" + "\t\t\t\t\t" + "2500" + "\n\n\n\n");
			rtDisplay->AppendText("SSS" + "\t\t\t\t\t" + "3000" + "\n\n\n\n");
			rtDisplay->AppendText("Medical Insurance" + "\t\t\t\t" + "500" + "\n\n\n\n");
			rtDisplay->AppendText("Others" + "\t\t\t\t\t" + "1000");
		}

		if (pinNo == 6281)
		{
			rtDisplay->Clear();
			rtDisplay->AppendText("\t\t      Account Number: 371496\n\n\n");
			rtDisplay->AppendText("Balance is" + "\t\t\t\t\t" + "9000" + "\n\n\n\n");
			rtDisplay->AppendText("Lottery" + "\t\t\t\t\t" + "7000" + "\n\n\n\n");
			rtDisplay->AppendText("SSS" + "\t\t\t\t\t" + "1000" + "\n\n\n\n");
			rtDisplay->AppendText("Medical Insurance" + "\t\t\t\t" + "₱00" + "\n\n\n\n");
			rtDisplay->AppendText("Others" + "\t\t\t\t\t" + "500");
		}

		if (pinNo == 6969)
		{
			rtDisplay->Clear();
			rtDisplay->AppendText("\t\t      Account Number: 173952\n\n\n");
			rtDisplay->AppendText("Balance is" + "\t\t\t\t\t" + "30000" + "\n\n\n\n");
			rtDisplay->AppendText("Lottery" + "\t\t\t\t\t" + "10000" + "\n\n\n\n");
			rtDisplay->AppendText("SSS" + "\t\t\t\t\t" + "10000" + "\n\n\n\n");
			rtDisplay->AppendText("Medical Insurance" + "\t\t\t\t" + "5000" + "\n\n\n\n");
			rtDisplay->AppendText("Others" + "\t\t\t\t\t" + "5000");
		}
	}
private: System::Void btncancel_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult iExit;
	iExit = MessageBox::Show("Confirm if you want to cancel", "BPI", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

	if (iExit == System::Windows::Forms::DialogResult::Yes)
	{
		Application::Exit();
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	rtDisplay->Clear();
	rtDisplay->AppendText("\t\t            Welcome to BPI\n\n");
	rtDisplay->AppendText("\t\t            Enter amount below\n\n");
	txtEnterPin->Visible = true;
	txtEnterPin->Clear();
	txtEnterPin->Focus();
}
private: System::Void btnDeposit_Click(System::Object^ sender, System::EventArgs^ e) {
	rtDisplay->Clear();
	rtDisplay->AppendText("Deposit");
	txtEnterPin->Visible = true;
	txtEnterPin->Clear();
	txtEnterPin->Focus();
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	EnableButton();
}
private: System::Void btn1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtEnterPin->Text == "") {
		txtEnterPin->Text = "1";
	}
	else
	{
		txtEnterPin->Text = txtEnterPin->Text + 1;
	}
}
private: System::Void btn2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtEnterPin->Text == "") {
		txtEnterPin->Text = "2";
	}
	else
	{
		txtEnterPin->Text = txtEnterPin->Text + 2;
	}
}
private: System::Void btn3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtEnterPin->Text == "") {
		txtEnterPin->Text = "3";
	}
	else
	{
		txtEnterPin->Text = txtEnterPin->Text + 3;
	}
}
private: System::Void btn4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtEnterPin->Text == "") {
		txtEnterPin->Text = "4";
	}
	else
	{
		txtEnterPin->Text = txtEnterPin->Text + 4;
	}
}
private: System::Void btn5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtEnterPin->Text == "") {
		txtEnterPin->Text = "5";
	}
	else
	{
		txtEnterPin->Text = txtEnterPin->Text + 5;
	}
}
private: System::Void btn6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtEnterPin->Text == "") {
		txtEnterPin->Text = "6";
	}
	else
	{
		txtEnterPin->Text = txtEnterPin->Text + 6;
	}
}
private: System::Void btn7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtEnterPin->Text == "") {
		txtEnterPin->Text = "7";
	}
	else
	{
		txtEnterPin->Text = txtEnterPin->Text + 7;
	}
}
private: System::Void btn8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtEnterPin->Text == "") {
		txtEnterPin->Text = "8";
	}
	else
	{
		txtEnterPin->Text = txtEnterPin->Text + 8;
	}
}
private: System::Void btn9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtEnterPin->Text == "") {
		txtEnterPin->Text = "9";
	}
	else
	{
		txtEnterPin->Text = txtEnterPin->Text + 9;
	}
}
private: System::Void btn0_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtEnterPin->Text == "") {
		txtEnterPin->Text = "0";
	}
	else
	{
		txtEnterPin->Text = txtEnterPin->Text + 0;
	}
}
private: System::Void btnLoan_Click(System::Object^ sender, System::EventArgs^ e) {
	rtDisplay->Clear();
	rtDisplay->AppendText("Loan");
	txtEnterPin->Visible = true;
	txtEnterPin->Clear();
	txtEnterPin->Focus();
}
private: System::Void btnBalance_Click(System::Object^ sender, System::EventArgs^ e) {
	balance();
}
private: System::Void btnPrintStatement_Click(System::Object^ sender, System::EventArgs^ e) {
	
	statement();
	printPreviewDialog1->ShowDialog();
}
private: System::Void btnMiniStatement_Click(System::Object^ sender, System::EventArgs^ e) {
	statement();
}
private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
	System::Drawing::Font^ fntString = gcnew System::Drawing::Font("Times New Roman", 16, FontStyle::Regular);

	e->Graphics->DrawString(rtDisplay->Text, fntString, Brushes::Black, 100, 100);
}
private: System::Void btnRequestNewPin_Click(System::Object^ sender, System::EventArgs^ e) {

	rtDisplay->Clear();
	rtDisplay->AppendText("\t\t            Welcome to BPI\n");
	rtDisplay->AppendText("\tNew Pin will be sent to your home address\n\n");
	rtDisplay->AppendText("Withdraw Cash" + "\t\t\t" + "                          Loan" + "\n\n\n\n\n");
	rtDisplay->AppendText("Cash with Receipt" + "\t\t\t" + "                       Deposit" + "\n\n\n\n\n");
	rtDisplay->AppendText("Request New Pin" + "\t\t\t" + "                     Balance" + "\n\n\n\n\n");
	rtDisplay->AppendText("Mini Statement" + "\t\t\t" + "             Print Statement" + "\n");
	rtDisplay->AppendText("\t\t       Thanks for using BPI!\n");
}
private: System::Void btnReceipt_Click(System::Object^ sender, System::EventArgs^ e) {
	
	rtDisplay->Clear();
	rtDisplay->AppendText("\t\t            Welcome to BPI\n\n");
	rtDisplay->AppendText("\t\t            Enter amount below\n\n");
	txtEnterPin->Visible = true;
	txtEnterPin->Clear();
	txtEnterPin->Focus();

	printPreviewDialog1->ShowDialog();
}
};
}
