#pragma once

namespace Calculator {

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
	private: System::Windows::Forms::TextBox^ TextDisplay;
	protected:

	private: System::Windows::Forms::Button^ AC;
	private: System::Windows::Forms::Button^ plus_minus;
	private: System::Windows::Forms::Button^ percent;
	private: System::Windows::Forms::Button^ divide;
	private: System::Windows::Forms::Button^ multiply;





	private: System::Windows::Forms::Button^ nine;

	private: System::Windows::Forms::Button^ eight;

	private: System::Windows::Forms::Button^ seven;
	private: System::Windows::Forms::Button^ minus;
	private: System::Windows::Forms::Button^ six;



	private: System::Windows::Forms::Button^ five;

	private: System::Windows::Forms::Button^ four;

	private: System::Windows::Forms::Button^ plus;
	private: System::Windows::Forms::Button^ three;


	private: System::Windows::Forms::Button^ two;

	private: System::Windows::Forms::Button^ one;

	private: System::Windows::Forms::Button^ zero;
	private: System::Windows::Forms::Button^ equals;


	private: System::Windows::Forms::Button^ decimal;
	private: System::Windows::Forms::Button^ equal;






	protected:










	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->TextDisplay = (gcnew System::Windows::Forms::TextBox());
			this->AC = (gcnew System::Windows::Forms::Button());
			this->plus_minus = (gcnew System::Windows::Forms::Button());
			this->percent = (gcnew System::Windows::Forms::Button());
			this->divide = (gcnew System::Windows::Forms::Button());
			this->multiply = (gcnew System::Windows::Forms::Button());
			this->nine = (gcnew System::Windows::Forms::Button());
			this->eight = (gcnew System::Windows::Forms::Button());
			this->seven = (gcnew System::Windows::Forms::Button());
			this->minus = (gcnew System::Windows::Forms::Button());
			this->six = (gcnew System::Windows::Forms::Button());
			this->five = (gcnew System::Windows::Forms::Button());
			this->four = (gcnew System::Windows::Forms::Button());
			this->plus = (gcnew System::Windows::Forms::Button());
			this->three = (gcnew System::Windows::Forms::Button());
			this->two = (gcnew System::Windows::Forms::Button());
			this->one = (gcnew System::Windows::Forms::Button());
			this->zero = (gcnew System::Windows::Forms::Button());
			this->equals = (gcnew System::Windows::Forms::Button());
			this->decimal = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// TextDisplay
			// 
			this->TextDisplay->BackColor = System::Drawing::Color::Black;
			this->TextDisplay->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TextDisplay->Font = (gcnew System::Drawing::Font(L"Calibri Light", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TextDisplay->ForeColor = System::Drawing::Color::White;
			this->TextDisplay->Location = System::Drawing::Point(16, 83);
			this->TextDisplay->Multiline = true;
			this->TextDisplay->Name = L"TextDisplay";
			this->TextDisplay->Size = System::Drawing::Size(368, 92);
			this->TextDisplay->TabIndex = 0;
			this->TextDisplay->Text = L"0";
			this->TextDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->TextDisplay->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// AC
			// 
			this->AC->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(171)), static_cast<System::Int32>(static_cast<System::Byte>(171)),
				static_cast<System::Int32>(static_cast<System::Byte>(171)));
			this->AC->FlatAppearance->BorderSize = 0;
			this->AC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AC->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AC->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->AC->Location = System::Drawing::Point(21, 205);
			this->AC->Name = L"AC";
			this->AC->Size = System::Drawing::Size(75, 77);
			this->AC->TabIndex = 2;
			this->AC->Text = L"AC";
			this->AC->UseVisualStyleBackColor = false;
			this->AC->Click += gcnew System::EventHandler(this, &MyForm::AC_Click);
			// 
			// plus_minus
			// 
			this->plus_minus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(171)), static_cast<System::Int32>(static_cast<System::Byte>(171)),
				static_cast<System::Int32>(static_cast<System::Byte>(171)));
			this->plus_minus->FlatAppearance->BorderSize = 0;
			this->plus_minus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->plus_minus->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->plus_minus->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->plus_minus->Location = System::Drawing::Point(114, 205);
			this->plus_minus->Name = L"plus_minus";
			this->plus_minus->Size = System::Drawing::Size(75, 77);
			this->plus_minus->TabIndex = 3;
			this->plus_minus->Text = L"+/-";
			this->plus_minus->UseVisualStyleBackColor = false;
			this->plus_minus->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// percent
			// 
			this->percent->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(171)), static_cast<System::Int32>(static_cast<System::Byte>(171)),
				static_cast<System::Int32>(static_cast<System::Byte>(171)));
			this->percent->FlatAppearance->BorderSize = 0;
			this->percent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->percent->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->percent->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->percent->Location = System::Drawing::Point(210, 205);
			this->percent->Name = L"percent";
			this->percent->Size = System::Drawing::Size(75, 77);
			this->percent->TabIndex = 4;
			this->percent->Text = L"%";
			this->percent->UseVisualStyleBackColor = false;
			this->percent->Click += gcnew System::EventHandler(this, &MyForm::percent_Click);
			// 
			// divide
			// 
			this->divide->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(247)), static_cast<System::Int32>(static_cast<System::Byte>(147)),
				static_cast<System::Int32>(static_cast<System::Byte>(6)));
			this->divide->FlatAppearance->BorderSize = 0;
			this->divide->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->divide->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->divide->ForeColor = System::Drawing::Color::White;
			this->divide->Location = System::Drawing::Point(304, 205);
			this->divide->Name = L"divide";
			this->divide->Size = System::Drawing::Size(75, 77);
			this->divide->TabIndex = 5;
			this->divide->Text = L"÷";
			this->divide->UseVisualStyleBackColor = false;
			this->divide->Click += gcnew System::EventHandler(this, &MyForm::Operators);
			// 
			// multiply
			// 
			this->multiply->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(247)), static_cast<System::Int32>(static_cast<System::Byte>(147)),
				static_cast<System::Int32>(static_cast<System::Byte>(6)));
			this->multiply->FlatAppearance->BorderSize = 0;
			this->multiply->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->multiply->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->multiply->ForeColor = System::Drawing::Color::White;
			this->multiply->Location = System::Drawing::Point(304, 302);
			this->multiply->Name = L"multiply";
			this->multiply->Size = System::Drawing::Size(75, 77);
			this->multiply->TabIndex = 9;
			this->multiply->Text = L"×";
			this->multiply->UseVisualStyleBackColor = false;
			this->multiply->Click += gcnew System::EventHandler(this, &MyForm::Operators);
			// 
			// nine
			// 
			this->nine->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->nine->FlatAppearance->BorderSize = 0;
			this->nine->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nine->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nine->ForeColor = System::Drawing::Color::White;
			this->nine->Location = System::Drawing::Point(210, 302);
			this->nine->Name = L"nine";
			this->nine->Size = System::Drawing::Size(75, 77);
			this->nine->TabIndex = 8;
			this->nine->Text = L"9";
			this->nine->UseVisualStyleBackColor = false;
			this->nine->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// eight
			// 
			this->eight->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->eight->FlatAppearance->BorderSize = 0;
			this->eight->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->eight->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->eight->ForeColor = System::Drawing::Color::White;
			this->eight->Location = System::Drawing::Point(114, 302);
			this->eight->Name = L"eight";
			this->eight->Size = System::Drawing::Size(75, 77);
			this->eight->TabIndex = 7;
			this->eight->Text = L"8";
			this->eight->UseVisualStyleBackColor = false;
			this->eight->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// seven
			// 
			this->seven->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->seven->FlatAppearance->BorderSize = 0;
			this->seven->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->seven->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->seven->ForeColor = System::Drawing::Color::White;
			this->seven->Location = System::Drawing::Point(21, 302);
			this->seven->Name = L"seven";
			this->seven->Size = System::Drawing::Size(75, 77);
			this->seven->TabIndex = 6;
			this->seven->Text = L"7";
			this->seven->UseVisualStyleBackColor = false;
			this->seven->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// minus
			// 
			this->minus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(247)), static_cast<System::Int32>(static_cast<System::Byte>(147)),
				static_cast<System::Int32>(static_cast<System::Byte>(6)));
			this->minus->FlatAppearance->BorderSize = 0;
			this->minus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->minus->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->minus->ForeColor = System::Drawing::Color::White;
			this->minus->Location = System::Drawing::Point(304, 398);
			this->minus->Name = L"minus";
			this->minus->Size = System::Drawing::Size(75, 77);
			this->minus->TabIndex = 13;
			this->minus->Text = L"−";
			this->minus->UseVisualStyleBackColor = false;
			this->minus->Click += gcnew System::EventHandler(this, &MyForm::Operators);
			// 
			// six
			// 
			this->six->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->six->FlatAppearance->BorderSize = 0;
			this->six->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->six->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->six->ForeColor = System::Drawing::Color::White;
			this->six->Location = System::Drawing::Point(210, 398);
			this->six->Name = L"six";
			this->six->Size = System::Drawing::Size(75, 77);
			this->six->TabIndex = 12;
			this->six->Text = L"6";
			this->six->UseVisualStyleBackColor = false;
			this->six->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// five
			// 
			this->five->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->five->FlatAppearance->BorderSize = 0;
			this->five->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->five->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->five->ForeColor = System::Drawing::Color::White;
			this->five->Location = System::Drawing::Point(114, 398);
			this->five->Name = L"five";
			this->five->Size = System::Drawing::Size(75, 77);
			this->five->TabIndex = 11;
			this->five->Text = L"5";
			this->five->UseVisualStyleBackColor = false;
			this->five->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// four
			// 
			this->four->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->four->FlatAppearance->BorderSize = 0;
			this->four->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->four->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->four->ForeColor = System::Drawing::Color::White;
			this->four->Location = System::Drawing::Point(21, 398);
			this->four->Name = L"four";
			this->four->Size = System::Drawing::Size(75, 77);
			this->four->TabIndex = 10;
			this->four->Text = L"4";
			this->four->UseVisualStyleBackColor = false;
			this->four->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// plus
			// 
			this->plus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(247)), static_cast<System::Int32>(static_cast<System::Byte>(147)),
				static_cast<System::Int32>(static_cast<System::Byte>(6)));
			this->plus->FlatAppearance->BorderSize = 0;
			this->plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->plus->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->plus->ForeColor = System::Drawing::Color::White;
			this->plus->Location = System::Drawing::Point(304, 495);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(75, 77);
			this->plus->TabIndex = 17;
			this->plus->Text = L"+";
			this->plus->UseVisualStyleBackColor = false;
			this->plus->Click += gcnew System::EventHandler(this, &MyForm::Operators);
			// 
			// three
			// 
			this->three->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->three->FlatAppearance->BorderSize = 0;
			this->three->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->three->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->three->ForeColor = System::Drawing::Color::White;
			this->three->Location = System::Drawing::Point(210, 495);
			this->three->Name = L"three";
			this->three->Size = System::Drawing::Size(75, 77);
			this->three->TabIndex = 16;
			this->three->Text = L"3";
			this->three->UseVisualStyleBackColor = false;
			this->three->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// two
			// 
			this->two->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->two->FlatAppearance->BorderSize = 0;
			this->two->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->two->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->two->ForeColor = System::Drawing::Color::White;
			this->two->Location = System::Drawing::Point(114, 495);
			this->two->Name = L"two";
			this->two->Size = System::Drawing::Size(75, 77);
			this->two->TabIndex = 15;
			this->two->Text = L"2";
			this->two->UseVisualStyleBackColor = false;
			this->two->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// one
			// 
			this->one->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->one->FlatAppearance->BorderSize = 0;
			this->one->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->one->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->one->ForeColor = System::Drawing::Color::White;
			this->one->Location = System::Drawing::Point(21, 495);
			this->one->Name = L"one";
			this->one->Size = System::Drawing::Size(75, 77);
			this->one->TabIndex = 14;
			this->one->Text = L"1";
			this->one->UseVisualStyleBackColor = false;
			this->one->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// zero
			// 
			this->zero->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->zero->FlatAppearance->BorderSize = 0;
			this->zero->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->zero->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->zero->ForeColor = System::Drawing::Color::White;
			this->zero->Location = System::Drawing::Point(21, 592);
			this->zero->Name = L"zero";
			this->zero->Size = System::Drawing::Size(168, 77);
			this->zero->TabIndex = 18;
			this->zero->Text = L"0";
			this->zero->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->zero->UseVisualStyleBackColor = false;
			this->zero->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// equals
			// 
			this->equals->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(247)), static_cast<System::Int32>(static_cast<System::Byte>(147)),
				static_cast<System::Int32>(static_cast<System::Byte>(6)));
			this->equals->FlatAppearance->BorderSize = 0;
			this->equals->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->equals->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->equals->ForeColor = System::Drawing::Color::White;
			this->equals->Location = System::Drawing::Point(304, 592);
			this->equals->Name = L"equals";
			this->equals->Size = System::Drawing::Size(75, 77);
			this->equals->TabIndex = 21;
			this->equals->Text = L"=";
			this->equals->UseVisualStyleBackColor = false;
			this->equals->Click += gcnew System::EventHandler(this, &MyForm::equal_Click);
			// 
			// decimal
			// 
			this->decimal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->decimal->FlatAppearance->BorderSize = 0;
			this->decimal->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->decimal->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->decimal->ForeColor = System::Drawing::Color::White;
			this->decimal->Location = System::Drawing::Point(210, 592);
			this->decimal->Name = L"decimal";
			this->decimal->Size = System::Drawing::Size(75, 77);
			this->decimal->TabIndex = 20;
			this->decimal->Text = L".";
			this->decimal->UseVisualStyleBackColor = false;
			this->decimal->Click += gcnew System::EventHandler(this, &MyForm::Decimal);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(399, 704);
			this->Controls->Add(this->equals);
			this->Controls->Add(this->decimal);
			this->Controls->Add(this->zero);
			this->Controls->Add(this->plus);
			this->Controls->Add(this->three);
			this->Controls->Add(this->two);
			this->Controls->Add(this->one);
			this->Controls->Add(this->minus);
			this->Controls->Add(this->six);
			this->Controls->Add(this->five);
			this->Controls->Add(this->four);
			this->Controls->Add(this->multiply);
			this->Controls->Add(this->nine);
			this->Controls->Add(this->eight);
			this->Controls->Add(this->seven);
			this->Controls->Add(this->divide);
			this->Controls->Add(this->percent);
			this->Controls->Add(this->plus_minus);
			this->Controls->Add(this->AC);
			this->Controls->Add(this->TextDisplay);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double firstDigit, secondDigit, result;
		String^ operators;
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {
	Button^ Numbers = safe_cast<Button^>(sender);
	if (TextDisplay->Text == "0") {
		TextDisplay->Text = Numbers->Text;
	}
	else {
		TextDisplay->Text = TextDisplay->Text + Numbers->Text;
	}
}

private: System::Void Operators(System::Object^ sender, System::EventArgs^ e) {
	Button^ NumbersOp = safe_cast<Button^>(sender);
	firstDigit = Double::Parse(TextDisplay->Text);
	TextDisplay->Text = "";
	operators = NumbersOp->Text;
}
private: System::Void Decimal(System::Object^ sender, System::EventArgs^ e) {
	if (!TextDisplay->Text->Contains(".")) {
		TextDisplay->Text = TextDisplay->Text + ".";
	}
}

private: System::Void equal_Click(System::Object^ sender, System::EventArgs^ e) {
	secondDigit = Double::Parse(TextDisplay->Text);

	if (operators == "+") {
		result = firstDigit + secondDigit;
		TextDisplay->Text = System::Convert::ToString(result);
	}
	else if (operators == "-") {
		result = firstDigit - secondDigit;
		TextDisplay->Text = System::Convert::ToString(result);
	}
	else if (operators == "÷") {
		if (secondDigit == 0) {
			TextDisplay->Text = "Error";
			return;
		}
		result = firstDigit / secondDigit;
		TextDisplay->Text = System::Convert::ToString(result);
	}
	else if (operators == "×") {
		result = firstDigit * secondDigit;
		TextDisplay->Text = System::Convert::ToString(result);
	}
}
	private: System::Void AC_Click(System::Object^ sender, System::EventArgs^ e) {
		TextDisplay->Text = "0";
	}
private: System::Void percent_Click(System::Object^ sender, System::EventArgs^ e) {
	double currentValue = Double::Parse(TextDisplay->Text);
	double percentValue = currentValue / 100;
	TextDisplay->Text = percentValue.ToString();
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (TextDisplay->Text->Contains("-")) {
		TextDisplay->Text = TextDisplay->Text->Remove(0, 1);
	}
	else {
		TextDisplay->Text = "-" + TextDisplay->Text;
	}
}
};
}


