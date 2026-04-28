#pragma once

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для FormCalc
	/// </summary>
	public ref class FormCalc : public System::Windows::Forms::Form
	{
	public:
		FormCalc(void)
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
		~FormCalc()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_exit;
	private: System::Windows::Forms::Label^ result_label;

	private: System::Windows::Forms::Button^ btn_opposite_sign;
	private: System::Windows::Forms::Button^ btn_interest;
	private: System::Windows::Forms::Button^ btn_division;
	private: System::Windows::Forms::Button^ btn_multi;
	private: System::Windows::Forms::Button^ btn_9;
	private: System::Windows::Forms::Button^ btn_8;
	private: System::Windows::Forms::Button^ btn_7;
	private: System::Windows::Forms::Button^ btn_plus;
	private: System::Windows::Forms::Button^ btn_3;
	private: System::Windows::Forms::Button^ btn_2;
	private: System::Windows::Forms::Button^ btn_1;
	private: System::Windows::Forms::Button^ btn_minus;
	private: System::Windows::Forms::Button^ btn_6;
	private: System::Windows::Forms::Button^ btn_5;
	private: System::Windows::Forms::Button^ btn_4;
	private: System::Windows::Forms::Button^ btn_equal;
	private: System::Windows::Forms::Button^ btn_sq_root;
	private: System::Windows::Forms::Button^ btn_point;
	private: System::Windows::Forms::Button^ btn_0;
	private: System::Windows::Forms::Button^ btn_erase;
	private: float first_num;
	private: char user_action;
	private: bool is_equal = false;
	protected:
	protected:
	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormCalc::typeid));
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->result_label = (gcnew System::Windows::Forms::Label());
			this->btn_erase = (gcnew System::Windows::Forms::Button());
			this->btn_opposite_sign = (gcnew System::Windows::Forms::Button());
			this->btn_interest = (gcnew System::Windows::Forms::Button());
			this->btn_division = (gcnew System::Windows::Forms::Button());
			this->btn_multi = (gcnew System::Windows::Forms::Button());
			this->btn_9 = (gcnew System::Windows::Forms::Button());
			this->btn_8 = (gcnew System::Windows::Forms::Button());
			this->btn_7 = (gcnew System::Windows::Forms::Button());
			this->btn_plus = (gcnew System::Windows::Forms::Button());
			this->btn_3 = (gcnew System::Windows::Forms::Button());
			this->btn_2 = (gcnew System::Windows::Forms::Button());
			this->btn_1 = (gcnew System::Windows::Forms::Button());
			this->btn_minus = (gcnew System::Windows::Forms::Button());
			this->btn_6 = (gcnew System::Windows::Forms::Button());
			this->btn_5 = (gcnew System::Windows::Forms::Button());
			this->btn_4 = (gcnew System::Windows::Forms::Button());
			this->btn_equal = (gcnew System::Windows::Forms::Button());
			this->btn_sq_root = (gcnew System::Windows::Forms::Button());
			this->btn_point = (gcnew System::Windows::Forms::Button());
			this->btn_0 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button_exit
			// 
			this->button_exit->BackColor = System::Drawing::Color::Red;
			this->button_exit->FlatAppearance->BorderColor = System::Drawing::Color::DarkRed;
			this->button_exit->FlatAppearance->BorderSize = 3;
			this->button_exit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_exit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button_exit->Location = System::Drawing::Point(-2, -1);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(32, 31);
			this->button_exit->TabIndex = 0;
			this->button_exit->Text = L"X";
			this->button_exit->UseVisualStyleBackColor = false;
			this->button_exit->Click += gcnew System::EventHandler(this, &FormCalc::button_exit_Click);
			// 
			// result_label
			// 
			this->result_label->BackColor = System::Drawing::Color::White;
			this->result_label->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->result_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result_label->Location = System::Drawing::Point(12, 18);
			this->result_label->Name = L"result_label";
			this->result_label->Size = System::Drawing::Size(265, 68);
			this->result_label->TabIndex = 1;
			this->result_label->Text = L"0";
			this->result_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// btn_erase
			// 
			this->btn_erase->BackColor = System::Drawing::Color::White;
			this->btn_erase->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn_erase->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_erase->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btn_erase->FlatAppearance->BorderSize = 5;
			this->btn_erase->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_erase->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_erase->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btn_erase->Location = System::Drawing::Point(12, 101);
			this->btn_erase->Name = L"btn_erase";
			this->btn_erase->Size = System::Drawing::Size(62, 52);
			this->btn_erase->TabIndex = 2;
			this->btn_erase->Text = L"AC";
			this->btn_erase->UseVisualStyleBackColor = false;
			this->btn_erase->Click += gcnew System::EventHandler(this, &FormCalc::btn_erase_Click);
			// 
			// btn_opposite_sign
			// 
			this->btn_opposite_sign->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn_opposite_sign->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_opposite_sign->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btn_opposite_sign->FlatAppearance->BorderSize = 2;
			this->btn_opposite_sign->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_opposite_sign->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btn_opposite_sign->Location = System::Drawing::Point(80, 101);
			this->btn_opposite_sign->Name = L"btn_opposite_sign";
			this->btn_opposite_sign->Size = System::Drawing::Size(62, 52);
			this->btn_opposite_sign->TabIndex = 3;
			this->btn_opposite_sign->Text = L"+/-";
			this->btn_opposite_sign->UseVisualStyleBackColor = true;
			this->btn_opposite_sign->Click += gcnew System::EventHandler(this, &FormCalc::btn_opposite_sign_Click);
			// 
			// btn_interest
			// 
			this->btn_interest->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn_interest->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_interest->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btn_interest->FlatAppearance->BorderSize = 2;
			this->btn_interest->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_interest->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btn_interest->Location = System::Drawing::Point(148, 101);
			this->btn_interest->Name = L"btn_interest";
			this->btn_interest->Size = System::Drawing::Size(62, 52);
			this->btn_interest->TabIndex = 4;
			this->btn_interest->Text = L"%";
			this->btn_interest->UseVisualStyleBackColor = true;
			this->btn_interest->Click += gcnew System::EventHandler(this, &FormCalc::btn_interest_Click);
			// 
			// btn_division
			// 
			this->btn_division->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_division->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_division->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_division->Location = System::Drawing::Point(216, 101);
			this->btn_division->Name = L"btn_division";
			this->btn_division->Size = System::Drawing::Size(62, 52);
			this->btn_division->TabIndex = 5;
			this->btn_division->Text = L"/";
			this->btn_division->UseVisualStyleBackColor = false;
			this->btn_division->Click += gcnew System::EventHandler(this, &FormCalc::btn_division_Click);
			// 
			// btn_multi
			// 
			this->btn_multi->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_multi->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_multi->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_multi->Location = System::Drawing::Point(216, 171);
			this->btn_multi->Name = L"btn_multi";
			this->btn_multi->Size = System::Drawing::Size(62, 52);
			this->btn_multi->TabIndex = 9;
			this->btn_multi->Text = L"*";
			this->btn_multi->UseVisualStyleBackColor = false;
			this->btn_multi->Click += gcnew System::EventHandler(this, &FormCalc::btn_multi_Click);
			// 
			// btn_9
			// 
			this->btn_9->BackColor = System::Drawing::Color::Gray;
			this->btn_9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_9->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_9->ForeColor = System::Drawing::Color::White;
			this->btn_9->Location = System::Drawing::Point(148, 171);
			this->btn_9->Name = L"btn_9";
			this->btn_9->Size = System::Drawing::Size(62, 52);
			this->btn_9->TabIndex = 8;
			this->btn_9->Text = L"9";
			this->btn_9->UseVisualStyleBackColor = false;
			this->btn_9->Click += gcnew System::EventHandler(this, &FormCalc::Buton_Number_Click);
			// 
			// btn_8
			// 
			this->btn_8->BackColor = System::Drawing::Color::Gray;
			this->btn_8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_8->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_8->ForeColor = System::Drawing::Color::White;
			this->btn_8->Location = System::Drawing::Point(80, 171);
			this->btn_8->Name = L"btn_8";
			this->btn_8->Size = System::Drawing::Size(62, 52);
			this->btn_8->TabIndex = 7;
			this->btn_8->Text = L"8";
			this->btn_8->UseVisualStyleBackColor = false;
			this->btn_8->Click += gcnew System::EventHandler(this, &FormCalc::Buton_Number_Click);
			// 
			// btn_7
			// 
			this->btn_7->BackColor = System::Drawing::Color::Gray;
			this->btn_7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_7->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_7->ForeColor = System::Drawing::Color::White;
			this->btn_7->Location = System::Drawing::Point(12, 171);
			this->btn_7->Name = L"btn_7";
			this->btn_7->Size = System::Drawing::Size(62, 52);
			this->btn_7->TabIndex = 6;
			this->btn_7->Text = L"7";
			this->btn_7->UseVisualStyleBackColor = false;
			this->btn_7->Click += gcnew System::EventHandler(this, &FormCalc::Buton_Number_Click);
			// 
			// btn_plus
			// 
			this->btn_plus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_plus->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_plus->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_plus->Location = System::Drawing::Point(215, 306);
			this->btn_plus->Name = L"btn_plus";
			this->btn_plus->Size = System::Drawing::Size(62, 52);
			this->btn_plus->TabIndex = 17;
			this->btn_plus->Text = L"+";
			this->btn_plus->UseVisualStyleBackColor = false;
			this->btn_plus->Click += gcnew System::EventHandler(this, &FormCalc::btn_plus_Click);
			// 
			// btn_3
			// 
			this->btn_3->BackColor = System::Drawing::Color::Gray;
			this->btn_3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_3->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_3->ForeColor = System::Drawing::Color::White;
			this->btn_3->Location = System::Drawing::Point(147, 306);
			this->btn_3->Name = L"btn_3";
			this->btn_3->Size = System::Drawing::Size(62, 52);
			this->btn_3->TabIndex = 16;
			this->btn_3->Text = L"3";
			this->btn_3->UseVisualStyleBackColor = false;
			this->btn_3->Click += gcnew System::EventHandler(this, &FormCalc::Buton_Number_Click);
			// 
			// btn_2
			// 
			this->btn_2->BackColor = System::Drawing::Color::Gray;
			this->btn_2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_2->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_2->ForeColor = System::Drawing::Color::White;
			this->btn_2->Location = System::Drawing::Point(79, 306);
			this->btn_2->Name = L"btn_2";
			this->btn_2->Size = System::Drawing::Size(62, 52);
			this->btn_2->TabIndex = 15;
			this->btn_2->Text = L"2";
			this->btn_2->UseVisualStyleBackColor = false;
			this->btn_2->Click += gcnew System::EventHandler(this, &FormCalc::Buton_Number_Click);
			// 
			// btn_1
			// 
			this->btn_1->BackColor = System::Drawing::Color::Gray;
			this->btn_1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_1->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_1->ForeColor = System::Drawing::Color::White;
			this->btn_1->Location = System::Drawing::Point(11, 306);
			this->btn_1->Name = L"btn_1";
			this->btn_1->Size = System::Drawing::Size(62, 52);
			this->btn_1->TabIndex = 14;
			this->btn_1->Text = L"1";
			this->btn_1->UseVisualStyleBackColor = false;
			this->btn_1->Click += gcnew System::EventHandler(this, &FormCalc::Buton_Number_Click);
			// 
			// btn_minus
			// 
			this->btn_minus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_minus->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_minus->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_minus->Location = System::Drawing::Point(215, 236);
			this->btn_minus->Name = L"btn_minus";
			this->btn_minus->Size = System::Drawing::Size(62, 52);
			this->btn_minus->TabIndex = 13;
			this->btn_minus->Text = L"-";
			this->btn_minus->UseVisualStyleBackColor = false;
			this->btn_minus->Click += gcnew System::EventHandler(this, &FormCalc::btn_minus_Click);
			// 
			// btn_6
			// 
			this->btn_6->BackColor = System::Drawing::Color::Gray;
			this->btn_6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_6->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_6->ForeColor = System::Drawing::Color::White;
			this->btn_6->Location = System::Drawing::Point(147, 236);
			this->btn_6->Name = L"btn_6";
			this->btn_6->Size = System::Drawing::Size(62, 52);
			this->btn_6->TabIndex = 12;
			this->btn_6->Text = L"6";
			this->btn_6->UseVisualStyleBackColor = false;
			this->btn_6->Click += gcnew System::EventHandler(this, &FormCalc::Buton_Number_Click);
			// 
			// btn_5
			// 
			this->btn_5->BackColor = System::Drawing::Color::Gray;
			this->btn_5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_5->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_5->ForeColor = System::Drawing::Color::White;
			this->btn_5->Location = System::Drawing::Point(79, 236);
			this->btn_5->Name = L"btn_5";
			this->btn_5->Size = System::Drawing::Size(62, 52);
			this->btn_5->TabIndex = 11;
			this->btn_5->Text = L"5";
			this->btn_5->UseVisualStyleBackColor = false;
			this->btn_5->Click += gcnew System::EventHandler(this, &FormCalc::Buton_Number_Click);
			// 
			// btn_4
			// 
			this->btn_4->BackColor = System::Drawing::Color::Gray;
			this->btn_4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_4->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_4->ForeColor = System::Drawing::Color::White;
			this->btn_4->Location = System::Drawing::Point(11, 236);
			this->btn_4->Name = L"btn_4";
			this->btn_4->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->btn_4->Size = System::Drawing::Size(62, 52);
			this->btn_4->TabIndex = 10;
			this->btn_4->Text = L"4";
			this->btn_4->UseVisualStyleBackColor = false;
			this->btn_4->Click += gcnew System::EventHandler(this, &FormCalc::Buton_Number_Click);
			// 
			// btn_equal
			// 
			this->btn_equal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_equal->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_equal->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_equal->Location = System::Drawing::Point(215, 375);
			this->btn_equal->Name = L"btn_equal";
			this->btn_equal->Size = System::Drawing::Size(62, 52);
			this->btn_equal->TabIndex = 21;
			this->btn_equal->Text = L"=";
			this->btn_equal->UseVisualStyleBackColor = false;
			this->btn_equal->Click += gcnew System::EventHandler(this, &FormCalc::btn_equal_Click);
			// 
			// btn_sq_root
			// 
			this->btn_sq_root->BackColor = System::Drawing::Color::Gray;
			this->btn_sq_root->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_sq_root->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_sq_root->ForeColor = System::Drawing::Color::White;
			this->btn_sq_root->Location = System::Drawing::Point(147, 375);
			this->btn_sq_root->Name = L"btn_sq_root";
			this->btn_sq_root->Size = System::Drawing::Size(62, 52);
			this->btn_sq_root->TabIndex = 20;
			this->btn_sq_root->Text = L"√";
			this->btn_sq_root->UseVisualStyleBackColor = false;
			this->btn_sq_root->Click += gcnew System::EventHandler(this, &FormCalc::btn_sq_root_Click);
			// 
			// btn_point
			// 
			this->btn_point->BackColor = System::Drawing::Color::Gray;
			this->btn_point->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_point->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_point->ForeColor = System::Drawing::Color::White;
			this->btn_point->Location = System::Drawing::Point(79, 375);
			this->btn_point->Name = L"btn_point";
			this->btn_point->Size = System::Drawing::Size(62, 52);
			this->btn_point->TabIndex = 19;
			this->btn_point->Text = L".";
			this->btn_point->UseVisualStyleBackColor = false;
			this->btn_point->Click += gcnew System::EventHandler(this, &FormCalc::btn_point_Click);
			// 
			// btn_0
			// 
			this->btn_0->BackColor = System::Drawing::Color::Gray;
			this->btn_0->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_0->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_0->ForeColor = System::Drawing::Color::White;
			this->btn_0->Location = System::Drawing::Point(11, 375);
			this->btn_0->Name = L"btn_0";
			this->btn_0->Size = System::Drawing::Size(62, 52);
			this->btn_0->TabIndex = 18;
			this->btn_0->Text = L"0";
			this->btn_0->UseVisualStyleBackColor = false;
			this->btn_0->Click += gcnew System::EventHandler(this, &FormCalc::Buton_Number_Click);
			// 
			// FormCalc
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(289, 439);
			this->Controls->Add(this->btn_equal);
			this->Controls->Add(this->btn_sq_root);
			this->Controls->Add(this->btn_point);
			this->Controls->Add(this->btn_0);
			this->Controls->Add(this->btn_plus);
			this->Controls->Add(this->btn_3);
			this->Controls->Add(this->btn_2);
			this->Controls->Add(this->btn_1);
			this->Controls->Add(this->btn_minus);
			this->Controls->Add(this->btn_6);
			this->Controls->Add(this->btn_5);
			this->Controls->Add(this->btn_4);
			this->Controls->Add(this->btn_multi);
			this->Controls->Add(this->btn_9);
			this->Controls->Add(this->btn_8);
			this->Controls->Add(this->btn_7);
			this->Controls->Add(this->btn_division);
			this->Controls->Add(this->btn_interest);
			this->Controls->Add(this->btn_opposite_sign);
			this->Controls->Add(this->btn_erase);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->result_label);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"FormCalc";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Калькулятор";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void Buton_Number_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ button = safe_cast<Button^>(sender);
		this->result_label->Text = this->result_label->Text == "0" || is_equal ? button->Text : this->result_label->Text + button->Text;
		is_equal = false;
	}

	private: System::Void btn_equal_Click(System::Object^ sender, System::EventArgs^ e) {
		float second = Convert::ToDouble(this->result_label->Text);
		switch (this->user_action) {
		case '+':
			this->result_label->Text = Convert::ToString(this->first_num + second); break;
		case '-':
			this->result_label->Text = Convert::ToString(this->first_num - second); break;
		case '*':
			this->result_label->Text = Convert::ToString(this->first_num * second); break;
		case '/':
			if (second == 0) {
				MessageBox::Show("На нуль ділити не можна!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			else {this->result_label->Text = Convert::ToString(this->first_num / second); break;}
		}
		this->first_num = 0;
		this->user_action = ' ';
		this->is_equal = true;

	}
	private: System::Void btn_plus_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('+');
	}
	private: System::Void btn_minus_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('-');
	}
	private: System::Void btn_multi_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('*');
	}
	private: System::Void btn_division_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('/');
	}
	private: System::Void btn_sq_root_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Convert::ToDouble(this->result_label->Text) < 0) {
			MessageBox::Show("Квадратний корінь від'ємного числа не існує", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			this->result_label->Text = "0";
			return;
		}
				this->result_label->Text = Convert::ToString(Math::Sqrt(Convert::ToDouble(this->result_label->Text)));
	}
	private: System::Void btn_interest_Click(System::Object^ sender, System::EventArgs^ e) {
		this->result_label->Text = Convert::ToString(Convert::ToDouble(this->result_label->Text) * 100);
	}

	private: System::Void math_action(char action) {
		this->first_num = Convert::ToDouble(this->result_label->Text);
		this -> user_action = action;
		this->result_label->Text = "0";
	}


private: System::Void btn_erase_Click(System::Object^ sender, System::EventArgs^ e) {
	this -> result_label->Text = "0";
	this->first_num = 0;
}
private: System::Void btn_opposite_sign_Click(System::Object^ sender, System::EventArgs^ e) {
	this->result_label->Text = Convert::ToString(-Convert::ToDouble(this->result_label->Text));
}
private: System::Void btn_point_Click(System::Object^ sender, System::EventArgs^ e) {

	if (!this->result_label->Text->Contains(",") && !is_equal)
		this->result_label->Text += ",";
}
};
}
