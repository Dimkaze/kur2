#pragma once
#include <iostream>
#include <fstream> 
namespace kyr2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Admin
	/// </summary>
	public ref class Admin : public System::Windows::Forms::Form
	{
	public:
		Admin(void)
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
		~Admin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(736, 282);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(428, 60);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Удалить пользователя\r\n";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Admin::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(388, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(419, 38);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Система администрации";
			this->label1->Click += gcnew System::EventHandler(this, &Admin::label1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(352, 504);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(490, 36);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Вернуться";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Admin::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(63, 320);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(325, 22);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Admin::textBox1_TextChanged);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(63, 160);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(325, 110);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Узнать общее количество человек\r\nиспользовавших программу";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Admin::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(736, 254);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(428, 22);
			this->textBox2->TabIndex = 5;
			this->textBox2->Text = L"введите сюда логин";
			this->textBox2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Admin::textBox2_MouseClick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(740, 160);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(384, 75);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Наберите логин пользователя\r\nкоторого вы хоитие удалить\r\nи нажмите \"Удалить польз"
				L"ователя\"";
			// 
			// Admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1226, 595);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"Admin";
			this->Text = L" ";
			this->Load += gcnew System::EventHandler(this, &Admin::Admin_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void MarshalString(String^ s, std::string& os) {
			using namespace Runtime::InteropServices;
			const char* chars =
				(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Admin::Close();
	}
		  
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		int size_of_file = 0;
		std::ifstream fin;
		std::ifstream ffin;
		char* str = new char[1024];	
		fin.open("Admin_file.txt");
		if (fin.is_open() == true)
		{
			while (!fin.eof())
			{
				fin.getline(str, 1024, '\n');
				size_of_file++;
			}
			if (size_of_file == 0)
			{
				MessageBox::Show(this, "Ой, никто не зарегистрирован", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else {	
				String^ delete_item = Convert::ToString(this->textBox2->Text);
				std::string ty;
				MarshalString(delete_item, ty);
				ty += ".txt";
				if (delete_item == "")
				{
					MessageBox::Show(this, "Пустая строка", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				}
				ffin.open(ty);
				if(ffin.is_open() == false)
				{
					MessageBox::Show(this, "Не существует такого пользователя", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				}
				else{
					fin.close();
					ffin.close();
					char* ch = new char[ty.size()];
					strcpy(ch, ty.c_str());
					remove(ch);
					MessageBox::Show(this, "Пользователь удален", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				}
			}
			
		}
		else {
			MessageBox::Show(this, "Oi, зарегистрируйтесь", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
		   
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int special_for_button3 = 0;
	std::ifstream fin;
	char* str = new char[1024];
	fin.open("Admin_file.txt");
	if (fin.is_open() == true)
	{
		while (!fin.eof())
		{
			fin.getline(str, 1024, '\n');
			special_for_button3++;
		}
		fin.close();
		String^ str = special_for_button3.ToString();
		this->textBox1->Text = str;
	}
}
private: System::Void Admin_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	textBox2->Text = "";
}
};
}
