#pragma once
#include "MyForm.h";
#include <fstream>
#include "language.h"
using namespace System;

namespace kyr2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Creater
	/// </summary>
	public ref class Creater : public System::Windows::Forms::Form
	{
	public:
		Creater(void)
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
		~Creater()
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
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;

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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(107, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(222, 38);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Регистрация";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(26, 91);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Логин";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(26, 148);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Пароль";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 215);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(124, 50);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Повторите\r\nпароль";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(164, 94);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(211, 22);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L" ";
			this->textBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Creater::textBox1_MouseClick);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(164, 152);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(211, 22);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(164, 228);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(211, 22);
			this->textBox3->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(143, 279);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 23);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Создать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Creater::button1_Click);
			// 
			// Creater
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(451, 325);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Creater";
			this->Text = L"Creater";
			this->Load += gcnew System::EventHandler(this, &Creater::Creater_Load);
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
	private: System::Void Creater_Load(System::Object^ sender, System::EventArgs^ e) {

		this->Text = "Создание учетной записи";
	}
		   bool is_have_this_login(String^ login)
		   {	
			   std::ifstream fin;
			   String^ Copylogin = login;
			   std::string str_to_log;
			   MarshalString(Copylogin, str_to_log);
			   str_to_log += ".txt";
			   fin.open(str_to_log);
			   if (fin.is_open() == true)
			   {
				   MessageBox::Show(this, "Такой Логин уже существует введите другой!", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				   return false;
			   }
			   else {
				   return true;
			   }
		   }
	bool is_corect_pass(String^ pas, String^ againPas)
	{
		String^ Copypas = pas;
		std::string str_to_len;
		MarshalString(Copypas, str_to_len);
		int count = str_to_len.length();
		if (count <= 3)
		{
			MessageBox::Show(this, "Пароль должен состоять минимум из 4 символов!", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return false;
		}
		else {
			if (pas == againPas)
			{
				return true;
			}
			else {
				MessageBox::Show(this, "Пароли не совпадают!", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return false;
			}
		}
	}
	bool is_corect_login(String^ login)
	{
		String^ Copylogin = login;
		std::string str_to_len;
		MarshalString(Copylogin, str_to_len);
		int count = str_to_len.length();
		if (count <= 3)
		{
			MessageBox::Show(this, "Логин должен состоять минимум из 4 символов!", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return false;
		}
		else {
			return true;
		}
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	std::ofstream fout;
	std::ofstream dout;
	std::string mainFile = "Admin_file.txt";
	String^ log = textBox1->Text;
	String^ Copylog = log;
	String^ pas = textBox2->Text;
	String^ Copypass = pas;
	String^ againPas = textBox3->Text;
	Copylog += ".txt";
	std::string createFail = "";
	std::string infileLogin = "";
	std::string infilePass = "";
	MarshalString(Copylog, createFail);// конвертируем String^ в string
	Copylog = log;
	MarshalString(Copylog, infileLogin);
	MarshalString(Copypass, infilePass);
	main_login = createFail;
	std::string login_in_main_file = infileLogin;
	infilePass += "->PASSWORD";
	infileLogin += "->LOGIN";
	if (is_have_this_login(log) == true && is_corect_login(log) == true && is_corect_pass(pas, againPas) == true)
	{
		fout.open(createFail);
		fout << infileLogin << " ";
		fout << infilePass /*<< "\n"*/;
		if (!fout.is_open())
		{
			MessageBox::Show(this, "не открылся файл!", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		dout.open(mainFile, std::ios::app);
		dout << login_in_main_file << "\n";
		if (!dout.is_open())
		{
			MessageBox::Show(this, "не открылся главный файл файл!", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		MyForm^ kk = gcnew MyForm();
		kk->Show();
		Creater::Hide();
		this->Enabled = false;
		fout.close();
		dout.close();
	}
}
private: System::Void textBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->textBox1->Clear();
}
};
}
