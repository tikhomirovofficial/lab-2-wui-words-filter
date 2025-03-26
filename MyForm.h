#pragma once
namespace Program2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ wordsInput;
	private: System::Windows::Forms::Button^ executeBtn;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->wordsInput = (gcnew System::Windows::Forms::TextBox());
			this->executeBtn = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(251, 72);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(207, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"WordsFilter";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(296, 111);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(109, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"_________________";
			// 
			// wordsInput
			// 
			this->wordsInput->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->wordsInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->wordsInput->Location = System::Drawing::Point(96, 180);
			this->wordsInput->Name = L"wordsInput";
			this->wordsInput->Size = System::Drawing::Size(330, 22);
			this->wordsInput->TabIndex = 2;
			// 
			// executeBtn
			// 
			this->executeBtn->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->executeBtn->BackColor = System::Drawing::Color::White;
			this->executeBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->executeBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->executeBtn->Location = System::Drawing::Point(96, 254);
			this->executeBtn->Name = L"executeBtn";
			this->executeBtn->Size = System::Drawing::Size(507, 30);
			this->executeBtn->TabIndex = 3;
			this->executeBtn->Text = L"�����";
			this->executeBtn->UseVisualStyleBackColor = false;
			this->executeBtn->Click += gcnew System::EventHandler(this, &MyForm::executeBtn_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(93, 159);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(220, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"�������� ����� ����� �������:";
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(432, 180);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(171, 22);
			this->textBox1->TabIndex = 5;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(429, 159);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(174, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"����� ����� (� ��������)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(191, 205);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(319, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"____________________________________________________";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(681, 396);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->executeBtn);
			this->Controls->Add(this->wordsInput);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private: System::Void executeBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ inputValue = this->wordsInput->Text;
		int maxLengthValue = Convert::ToInt32(this->textBox1->Text);
		array<String^>^ splitted = inputValue->Split(',', ' ');

		if (!splitted->Length) {
			MessageBox::Show("����������, ������� ����������� ����� ����� �������!");
			return;
		}

		//String^ *result = new String[];
		
		/*int currentIndex = 0;
		for (int wordIndex = 0; wordIndex < splitted->Length; wordIndex++)
		{
			Console::WriteLine(splitted[wordIndex]->Length);
			if (splitted[wordIndex]->Length < maxLengthValue) {
				Console::WriteLine(splitted[wordIndex]);
				result[currentIndex] = splitted[wordIndex];
				currentIndex++;
			}
		}*/
		//MessageBox::Show(String::Join(", ", result));

	}
};
}