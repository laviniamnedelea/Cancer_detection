#pragma once

namespace GailOS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GailUI
	/// </summary>
	public ref class GailUI : public System::Windows::Forms::Form
	{
	public:
		GailUI(void)
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
		~GailUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ VarstaBox;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ComboBox^ RasaBox;
	private: System::Windows::Forms::ComboBox^ MenstruatieBox;
	private: System::Windows::Forms::ComboBox^ CopiiBox;




	private: System::Windows::Forms::ComboBox^ RudeBox;
	private: System::Windows::Forms::ComboBox^ BiopsiiBox;
	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;




	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::ComboBox^ atipiceBox;








	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->VarstaBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->RasaBox = (gcnew System::Windows::Forms::ComboBox());
			this->MenstruatieBox = (gcnew System::Windows::Forms::ComboBox());
			this->CopiiBox = (gcnew System::Windows::Forms::ComboBox());
			this->RudeBox = (gcnew System::Windows::Forms::ComboBox());
			this->BiopsiiBox = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->atipiceBox = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(757, 333);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(78, 30);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Calculeaza";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &GailUI::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F));
			this->label2->ForeColor = System::Drawing::Color::Crimson;
			this->label2->Location = System::Drawing::Point(752, 272);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Procentaj";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(69, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 22);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Varsta";
			// 
			// VarstaBox
			// 
			this->VarstaBox->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->VarstaBox->Location = System::Drawing::Point(482, 42);
			this->VarstaBox->Name = L"VarstaBox";
			this->VarstaBox->Size = System::Drawing::Size(113, 20);
			this->VarstaBox->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->label3->Location = System::Drawing::Point(70, 55);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(226, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Valid pentru femeile cu varste intre 35 si 85 ani";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(69, 85);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(376, 22);
			this->label4->TabIndex = 8;
			this->label4->Text = L"La ce varsta ati avut prima menstruatie\?";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(69, 149);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(397, 22);
			this->label5->TabIndex = 9;
			this->label5->Text = L"La ce varsta ati dat nastere primului copil\?";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(69, 200);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(56, 22);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Rasa";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(69, 249);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(378, 22);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Cate dintre rude au avut cancer mamar\?";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(69, 319);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(320, 22);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Cate biopsii antecedente ati avut\?";
			// 
			// RasaBox
			// 
			this->RasaBox->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->RasaBox->FormattingEnabled = true;
			this->RasaBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Alb", L"Negru" });
			this->RasaBox->Location = System::Drawing::Point(482, 200);
			this->RasaBox->Name = L"RasaBox";
			this->RasaBox->Size = System::Drawing::Size(121, 21);
			this->RasaBox->TabIndex = 14;
			this->RasaBox->Text = L"Alegeti";
			// 
			// MenstruatieBox
			// 
			this->MenstruatieBox->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->MenstruatieBox->FormattingEnabled = true;
			this->MenstruatieBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"7-11 Ani\t", L"12-13 Ani", L">13 Ani" });
			this->MenstruatieBox->Location = System::Drawing::Point(482, 86);
			this->MenstruatieBox->Name = L"MenstruatieBox";
			this->MenstruatieBox->Size = System::Drawing::Size(121, 21);
			this->MenstruatieBox->TabIndex = 15;
			this->MenstruatieBox->Text = L"Alegeti";
			// 
			// CopiiBox
			// 
			this->CopiiBox->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->CopiiBox->FormattingEnabled = true;
			this->CopiiBox->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Nu am nascut\t", L"<20 Ani", L"20-24 Ani", L"25-29 Ani",
					L">30 Ani"
			});
			this->CopiiBox->Location = System::Drawing::Point(482, 149);
			this->CopiiBox->Name = L"CopiiBox";
			this->CopiiBox->Size = System::Drawing::Size(121, 21);
			this->CopiiBox->TabIndex = 16;
			this->CopiiBox->Text = L"Alegeti";
			// 
			// RudeBox
			// 
			this->RudeBox->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->RudeBox->FormattingEnabled = true;
			this->RudeBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Nu cunosc", L"0", L"1", L"Mai mult de 1" });
			this->RudeBox->Location = System::Drawing::Point(482, 253);
			this->RudeBox->Name = L"RudeBox";
			this->RudeBox->Size = System::Drawing::Size(121, 21);
			this->RudeBox->TabIndex = 17;
			this->RudeBox->Text = L"Alegeti";
			// 
			// BiopsiiBox
			// 
			this->BiopsiiBox->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->BiopsiiBox->FormattingEnabled = true;
			this->BiopsiiBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"0", L"1", L"Mai mult de 1" });
			this->BiopsiiBox->Location = System::Drawing::Point(482, 320);
			this->BiopsiiBox->Name = L"BiopsiiBox";
			this->BiopsiiBox->Size = System::Drawing::Size(121, 21);
			this->BiopsiiBox->TabIndex = 18;
			this->BiopsiiBox->Text = L"Alegeti";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(601, 38);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(31, 23);
			this->label9->TabIndex = 19;
			this->label9->Text = L"ani";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::DarkGreen;
			this->pictureBox2->Location = System::Drawing::Point(-27, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(1402, 10);
			this->pictureBox2->TabIndex = 21;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::DarkGreen;
			this->pictureBox3->Location = System::Drawing::Point(-416, 472);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(1402, 96);
			this->pictureBox3->TabIndex = 22;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::DarkKhaki;
			this->pictureBox8->Location = System::Drawing::Point(73, 225);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(559, 3);
			this->pictureBox8->TabIndex = 27;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::DarkKhaki;
			this->pictureBox4->Location = System::Drawing::Point(73, 194);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(559, 3);
			this->pictureBox4->TabIndex = 28;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::DarkKhaki;
			this->pictureBox5->Location = System::Drawing::Point(73, 125);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(559, 3);
			this->pictureBox5->TabIndex = 29;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::DarkKhaki;
			this->pictureBox6->Location = System::Drawing::Point(73, 294);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(559, 3);
			this->pictureBox6->TabIndex = 30;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::DarkKhaki;
			this->pictureBox7->Location = System::Drawing::Point(73, 360);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(559, 3);
			this->pictureBox7->TabIndex = 31;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::DarkKhaki;
			this->pictureBox9->Location = System::Drawing::Point(73, 71);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(559, 3);
			this->pictureBox9->TabIndex = 32;
			this->pictureBox9->TabStop = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(69, 394);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(139, 22);
			this->label10->TabIndex = 33;
			this->label10->Text = L"Biopsii atipice";

			// 
			// atipiceBox
			// 
			this->atipiceBox->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->atipiceBox->FormattingEnabled = true;
			this->atipiceBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"0\t", L">=1" });
			this->atipiceBox->Location = System::Drawing::Point(482, 394);
			this->atipiceBox->Name = L"atipiceBox";
			this->atipiceBox->Size = System::Drawing::Size(121, 21);
			this->atipiceBox->TabIndex = 34;
			this->atipiceBox->Text = L"Alegeti";
			// 
			// GailUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(931, 596);
			this->Controls->Add(this->atipiceBox);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->BiopsiiBox);
			this->Controls->Add(this->RudeBox);
			this->Controls->Add(this->CopiiBox);
			this->Controls->Add(this->MenstruatieBox);
			this->Controls->Add(this->RasaBox);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->VarstaBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Name = L"GailUI";
			this->Text = L"GailUI";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		double x, y, z, w;
		double risc;
		double varsta;
		varsta = Double::Parse(VarstaBox->Text);

		if (BiopsiiBox->Text == "0")
			y = 1;

		if ((BiopsiiBox->Text == "1") && (varsta <= 50))
			y = 1.70;

		if ((BiopsiiBox->Text == "1") && (varsta >= 50))
			y = 1.27;

		if ((BiopsiiBox->Text == "Mai mult de 1") && (varsta < 50))
			y = 2.88;

		if ((BiopsiiBox->Text == "Mai mult de 1") && (varsta >= 50))
			y = 1.62;


		if (MenstruatieBox->Text == "7-11 Ani")
			x = 1.21;

		if (MenstruatieBox->Text == "12-13 Ani")
			x = 1.1;

		if (MenstruatieBox->Text == ">13 Ani")
			x = 1;

		if (RudeBox->Text == "0") {
			if (CopiiBox->Text == "<20 Ani")
				y = 1;
			if (CopiiBox->Text == ">20-24 Ani")
				y = 1.24;
			if (CopiiBox->Text == "25-29 Ani")
				y = 1.55;
			if (CopiiBox->Text == "25-29 Ani")
				y = 1.93;
		}
		
		if (RudeBox->Text == "1") {
			if (CopiiBox->Text == "<20 Ani")
				y = 2.61;
			if (CopiiBox->Text == ">20-24 Ani")
				y = 2.68;
			if (CopiiBox->Text == "25-29 Ani")
				y = 2.76;
			if (CopiiBox->Text == "25-29 Ani")
				y = 2.83;
		}

		if (RudeBox->Text == "Mai mult de 1") {
			if (CopiiBox->Text == "<20 Ani")
				y = 6.8;
			if (CopiiBox->Text == ">20-24 Ani")
				y = 5.78;
			if (CopiiBox->Text == "25-29 Ani")
				y = 4.91;
			if (CopiiBox->Text == "25-29 Ani")
				y = 4.17;
		}

		if (atipiceBox->Text == ">=1")
			y = y * 4;

		risc = x + y + z;

		if (varsta <= 39)
			risc = risc * 0.48;
		if (varsta >= 40)
			risc = risc / 4.11;
		if ((varsta >= 60) && (varsta < 70))
			risc = risc / 3.82;
		if (varsta >= 60)
			risc = risc / 7.13;

		if ((RasaBox->Text == "Negru") && (varsta <= 39))
			risc = risc / 0.102;
		if ((RasaBox->Text == "Alb") && (varsta <= 39))
			risc = risc / 0.118;
		if ((RasaBox->Text == "Alb") && (varsta >= 40) && (varsta <= 59))
			risc = risc / 0.649;
		if ((RasaBox->Text == "Negru") && (varsta >= 40) && (varsta <= 59))
			risc = risc / 0.398;
		if ((RasaBox->Text == "Negru") && (varsta >= 60) && (varsta <= 69))
			risc = risc / 0.574;
		if ((RasaBox->Text == "Alb") && (varsta >= 60) && (varsta <= 69))
			risc = risc * 1.089;
		if ((RasaBox->Text == "Negru") && (varsta >= 70))
			risc = risc / 0.672;
		if ((RasaBox->Text == "Alb") && (varsta >= 70))
			risc = risc * 1.101;

		if (varsta >= 40) {
			if (risc < 0) risc = risc = 0;
		if ((risc >= 0) && (risc <= 0.5)) risc = risc * 0.4;
		if ((risc >= 0.5) && (risc <= 0.9)) risc = risc * 0.7;
		if ((risc >= 1.1) && (risc <= 2)) risc = risc * 1.5;
		if ((risc >= 2) && (risc < 5)) risc = risc * 3;
		if ((risc >= 1.1) && (risc <= 2)) risc = risc * 1.5;
		if (risc >= 5) risc = risc * 5;
		};



		if (varsta <40) {
			if (risc < 0) risc = risc = 0;
			if ((risc >= 0) && (risc <= 0.5)) risc = risc / 0.4;
			if ((risc >= 0.5) && (risc <= 0.9)) risc = risc / 0.7;
			if ((risc >= 1.1) && (risc <= 2)) risc = risc / 1.5;
			if ((risc >= 2) && (risc < 5)) risc = risc / 3;
			if ((risc >= 1.1) && (risc <= 2)) risc = risc / 1.5;
			if (risc >= 5) risc = risc / 5;
		};


		
		label2->Text = "" + risc;
	}
		   
		   
			  		 


};
}
