#pragma once
#include "MyForm.h"
#include "Creater.h"
#include <fstream>
#include "language.h"
namespace kyr2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Autorization
	/// </summary>
	public ref class Autorization : public System::Windows::Forms::Form
	{
	public:
		Autorization(void)
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
		~Autorization()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;





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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(143, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(260, 44);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Авторизация";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(26, 113);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 29);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Логин";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(26, 202);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(105, 29);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Пароль";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(165, 120);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(406, 22);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Autorization::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(165, 209);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(406, 22);
			this->textBox2->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(372, 289);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(199, 51);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Войти";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Autorization::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(31, 289);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(209, 51);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Зарегистрироваться";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Autorization::button2_Click);
			// 
			// Autorization
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(636, 381);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Autorization";
			this->Text = L"Autorization";
			this->Load += gcnew System::EventHandler(this, &Autorization::Autorization_Load);
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
		bool is_odmen(String^ login,String^ password)
		{
			if (login == "ADMIN" && password == "ADMIN")
			{
				MessageBox::Show(this, "Ну привет одмин", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			return true;
		}
		bool Invait_login(String^ login, String^ password)
		{
			int true_pass = 0;
			int true_log = 0;
			std::ifstream fin;
			String^ Copylogin = login;
			std::string converrt_to_str;
			MarshalString(Copylogin, converrt_to_str);
			converrt_to_str += ".txt";
			fin.open(converrt_to_str);
			if (fin.is_open() == false)
			{
				MessageBox::Show(this, "Такого логина не существует, зарегистрируйтесь", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return false;
			}
			else {

				std::string check_login;
				std::string check_pass;
				Copylogin = login;
				String^ Copypas = password;
				MarshalString(Copylogin, check_login); // чеклогине лежит входная строка
				std::string zz = check_login;
				zz += ".txt";
				main_login = zz;
				MarshalString(Copypas, check_pass);
				while (!fin.eof())
				{
					std::string str_for_reading;
					fin >> str_for_reading;
					check_login += "->LOGIN";
					if (check_login == str_for_reading)
					{
						true_log += 1;
					}
					std::string str_for_reading_password;
					fin >> str_for_reading_password;
					check_pass += "->PASSWORD";
					if (check_pass == str_for_reading_password)
					{
						true_pass += 1;
					}
				}
				if (true_pass + true_log == 2)
				{
					return true;
				}
				else 
				{
					MessageBox::Show(this, "Вы ввели неверный логин или пароль!", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					return false;
				}
			}
			fin.close();
		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ log = textBox1->Text;
		String^ pas = textBox2->Text;
		if (Invait_login(log, pas) == true && is_odmen(log,pas) == true)
		{
			MyForm^ kk = gcnew MyForm();
			kk->Show();
			Autorization::Hide();
			this->Enabled = false;
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Creater^ cr = gcnew Creater();
	cr->Show();
	Autorization::Hide();
	this->Enabled = false;
}
private: System::Void Autorization_Load(System::Object^ sender, System::EventArgs^ e) {
	this->Text = "Авторизация";
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
};
}
