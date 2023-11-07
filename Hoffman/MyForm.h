#pragma once
#include"string.h"
#include "MyForm1.h"
#include "MyForm3.h"
#include "Hoffman.h"
#include <msclr\marshal_cppstd.h>

int compare(string a[], string b, int c)
{
	int lol = 0;
	for (int i = 0; i < c; i++)
	{
		if (b == a[i])
		{
			//cout << "Correct name entered" << endl;
			//return 0;
			//break;
			lol = 0;
			break;
		}
		else
		{
			lol = 1;
		}
	}
	return lol;
};

namespace Project15 {

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
			textBox1->PasswordChar='*';
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
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(329, 193);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(91, 34);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(242, 113);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(178, 26);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(242, 62);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(178, 26);
			this->textBox2->TabIndex = 2;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(26, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(135, 29);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Account No";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(27, 112);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(134, 27);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Password";
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::SystemColors::Control;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(605, 87);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(250, 34);
			this->label3->TabIndex = 5;
			this->label3->Text = L"BirdMen Bank";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(645, 132);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(175, 20);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Reaching For the Skies";
			// 
			// groupBox1
			// 
			this->groupBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupBox1.BackgroundImage")));
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->groupBox1->Location = System::Drawing::Point(484, 210);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(484, 304);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Menu";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1357, 677);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Cursor = System::Windows::Forms::Cursors::Cross;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
			
				 String ^ name1 = textBox2->Text;//taking input from GUI
				 String ^ password1 = textBox1->Text;//taking input from GUI

				 std::string name2 = msclr::interop::marshal_as<std::string>(name1);//to convert String to string
				 std::string password2 = msclr::interop::marshal_as<std::string>(password1);//to convert String to string

				 string line[10];
				 int i = 0;
				 string password[10];

				 string asd;
				 fstream fin;
				 fin.open("Project.txt");
				 if (fin.is_open())
				 {
					 while (fin)
					 {
						 getline(fin, asd);
						 line[i] = asd;
						 i++;
					 }
					 fin.close();
				 }
				 else
				 {
					 cout << "Unable to open file";
				 }
				 int u = compare(line, name2, 10);
				 fstream pw;
				 int h = 0;
				 pw.open("Password.txt");
				 if (pw.is_open())
				 {
					 while (pw)
					 {
						 getline(pw, asd);
						 password[h] = asd;
						 h++;
					 }
					 pw.close();
				 }
				 else
				 {
					 cout << "Unable to open file";
				 }
				 int x = compare( password ,password2, 10);

				 if (u && x)
				 {

					 this->Hide();//hiding the previous form
					 MyForm1 ^f2 = gcnew MyForm1;//making form F2 current form
					 int amount[10];
					 int asd;
					 fstream am;
					 int n = 0;
					 am.open("Amount.txt");
					 if (am.is_open())
					 {
						 while (am)
						 {
							 am >> asd;
							 amount[n] = asd;
							 n++;
						 }
						 am.close();
					 }
					 else
					 {
						 cout << "Unable to open file";
						 this->Hide();
						 MyForm3 ^f2 = gcnew MyForm3;//if wrong amount of input is entered give error screen
						 f2->ShowDialog();
					 }
				
					 System::String^ T;
					 T = System::Convert::ToString(asd);
					
					 f2->textBox2->Text = T;
					 f2->textBox1->Text = textBox2->Text;//used to display user name if form 2
					 f2->ShowDialog();
				 }
				 else
				 {
					 this->Hide();
					 MyForm3 ^f2 = gcnew MyForm3;
					 f2->ShowDialog();
				 }

			
				 

	}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) 
{

}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
