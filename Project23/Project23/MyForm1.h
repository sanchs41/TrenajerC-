#pragma once

namespace Project23 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Text;
	using namespace System::Threading::Tasks;
	
	
	/// <summary>
	/// ������ ��� MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
			timer1->Start();
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm1()
				
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(7, 17);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(268, 26);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(7, 61);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(268, 26);
			this->textBox2->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(8, 93);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(267, 48);
			this->button1->TabIndex = 2;
			this->button1->Text = L"��������� ����������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(7, 158);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(26, 29);
			this->label1->TabIndex = 3;
			this->label1->Text = L"\?";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(34, 161);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(24, 29);
			this->label2->TabIndex = 4;
			this->label2->Text = L"*";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(60, 158);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(26, 29);
			this->label3->TabIndex = 5;
			this->label3->Text = L"\?";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(95, 157);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(28, 29);
			this->label4->TabIndex = 6;
			this->label4->Text = L"=";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(128, 156);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(46, 35);
			this->textBox3->TabIndex = 7;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(176, 153);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(98, 42);
			this->button2->TabIndex = 8;
			this->button2->Text = L"³�������";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(9, 203);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(264, 49);
			this->button3->TabIndex = 9;
			this->button3->Text = L"����������� ���������";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 1);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(56, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"�������";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(9, 46);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(26, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"��\'�";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(8, 259);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(264, 86);
			this->richTextBox1->TabIndex = 12;
			this->richTextBox1->Text = L"";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(149, 1);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(35, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"label7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(199, 1);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(35, 13);
			this->label8->TabIndex = 14;
			this->label8->Text = L"label8";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm1::timer1_Tick);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(285, 350);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm1";
			this->Text = L" ����������";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
		button2->Enabled = false;
		textBox3->Enabled = false;
	}

		   bool Protect1() {
			   if ((textBox3->Text->Length == 0)) { return false; }
			   for (int i = 0; i < textBox3->Text->Length; i++) {
				   if ((textBox3->Text[i] >= '0') && (textBox3->Text[i] <= '9')) {}
				   else { return false; }
			   }
			   return true;
		   }
			   bool Protect2() {
				   if ((textBox1->Text->Length == 0) || (textBox2->Text->Length == 0)) { return false; }
				   
				   return true;
		   }
		   int t = 1,d,c,otvetTest, praOtvet;
		 
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Protect2()) {
			//int c,d;
			System::Random^ randomizer = gcnew Random();
			c = randomizer->Next(2, 9);
			label3->Text = c.ToString();
			d = randomizer->Next(2, 9);
			label1->Text = d.ToString();
			button1->Enabled = false;
			button3->Enabled = false;
			button2->Enabled = true;
			textBox1->Enabled = false;
			textBox2->Enabled = false;
			textBox3->Enabled = true;
			textBox3->Focus();
		}
		else
		{
			MessageBox::Show("������ ��'� �� �������", "�������");
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	//otvetTest = System::Convert::ToDouble(textBox3->Text);
	if (Protect1()) {
		otvetTest = System::Convert::ToDouble(textBox3->Text);
		if (otvetTest == c * d) {praOtvet++;}
		if (t == 9) {
			StreamWriter^ sw = gcnew StreamWriter("C:\\Users\\Ace\\source\\repos\\Project23\\x64\\Debug\\001.txt",true); "\n", "\r";
			sw->WriteLine("");
			sw->WriteLine((label7->Text),(label8->Text));
			sw->WriteLine(label8->Text);
			sw->WriteLine(textBox1->Text);
			sw->WriteLine(textBox2->Text);
			if (praOtvet == 9 || praOtvet == 10) { sw->WriteLine("³�����"); }
			if (praOtvet == 8 || praOtvet == 7) { sw->WriteLine("�����"); }
			if (praOtvet == 6 || praOtvet == 5) { sw->WriteLine("���������"); }
			if (praOtvet < 6) { sw->WriteLine("�����������"); }
			sw->Close();
			//label4->Text = L"kkk";
			//File::WriteAllText("C:\\Users\Ace\source\repos\Project23\x64\Debug\1.txt", textBox1->Text);
			//System::IO::File::AppendAllText("C:\\Users\Ace\source\repos\Project23\x64\Debug\1.txt", textBox1->Text + "locked");
		}
		textBox3->Clear();
		textBox3->Focus();
		t = t+1;
		System::Random^ randomizer = gcnew Random();
		c = randomizer->Next(2, 9);
		label3->Text = c.ToString();
		d = randomizer->Next(2, 9);
		label1->Text = d.ToString();
		//label2->Text = praOtvet.ToString();
		if (t >10) {
			t = 1;
			button1->Enabled = true;
			button2->Enabled = false;
			button3->Enabled = true;
			textBox1->Enabled = true;
			textBox2->Enabled = true;
			textBox3->Enabled = false;
			label1->Text = "?";
			label3->Text = "?";
			textBox1->Clear();
			textBox2->Clear();
		}
	}
	
	else {
		MessageBox::Show("������� ��������", "�������");
		textBox3->Focus();
		textBox3->Clear();
	}
	
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	StreamReader^ file = File::OpenText("C:\\Users\\Ace\\source\\repos\\Project23\\x64\\Debug\\001.txt");
	richTextBox1->Text = file->ReadToEnd();
	//richTextBox1->Text = File.ReadllText("C:\\Users\\Ace\\source\\repos\\Project23\\x64\\Debug\\001.txt");
	//public void LoadFile(string path);
	//System::Windows::Forms::OpenFileDialog dialog = gcnew OpenFileDialog();
	//dialog.Filter = "C:\\Users\\Ace\\source\\repos\\Project23\\x64\\Debug\\001.txt";
	//if (dialog.ShowDialog() == System.Windows.Forms.DialogResult.OK)
	//	richTextBox1->LoadFile(dialog.FileName, RichTextBoxStreamType::PlainText);
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	DateTime dt = DateTime::Now;
	DateTime da = DateTime::Now;
	label7->Text = dt.Now.ToLongTimeString();
	label8->Text = dt.Now.ToLongDateString();
}
};
}
