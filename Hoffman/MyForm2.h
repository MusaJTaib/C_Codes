#pragma once

namespace Project15 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	public: System::Windows::Forms::TextBox^  textBox1;
	private:
	public: System::Windows::Forms::TextBox^  textBox2;
	public: System::Windows::Forms::TextBox^  textBox3;







	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::GroupBox^  groupBox1;

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
			System::Windows::Forms::Button^  Exit;
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			Exit = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Exit
			// 
			Exit->Location = System::Drawing::Point(295, 283);
			Exit->Name = L"Exit";
			Exit->Size = System::Drawing::Size(88, 35);
			Exit->TabIndex = 7;
			Exit->Text = L"Exit";
			Exit->UseVisualStyleBackColor = true;
			Exit->Click += gcnew System::EventHandler(this, &MyForm2::Exit_Click);
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(29, 116);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(129, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"100 Rs";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(29, 160);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(128, 23);
			this->label3->TabIndex = 2;
			this->label3->Text = L"1000 Rs";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm2::label3_Click);
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(29, 205);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(124, 23);
			this->label4->TabIndex = 3;
			this->label4->Text = L"5000 Rs";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(551, 381);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(231, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Thankyou For Your Transaction";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(607, 417);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(113, 20);
			this->label6->TabIndex = 5;
			this->label6->Text = L"BirdMen Bank!";
			// 
			// label7
			// 
			this->label7->Location = System::Drawing::Point(7, 32);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(181, 29);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Money Withdrawed";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(242, 32);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(141, 26);
			this->textBox1->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(242, 116);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(141, 26);
			this->textBox2->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(242, 160);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(141, 26);
			this->textBox3->TabIndex = 11;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(242, 205);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(141, 26);
			this->textBox5->TabIndex = 12;
			// 
			// groupBox1
			// 
			this->groupBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupBox1.BackgroundImage")));
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(Exit);
			this->groupBox1->Location = System::Drawing::Point(399, 31);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(509, 330);
			this->groupBox1->TabIndex = 13;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Menu";
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1528, 621);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void Exit_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
}
};
}
