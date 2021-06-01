#pragma once
#include "MyForm2.h"
#include <stdexcept>
#include <vcruntime_exception.h>
#include <new>
#include <exception>
#include <typeinfo>
#include <Windows.h>
#include <cmath>
#include "Admin.h"
#include "Iron.h"
namespace kyr2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;

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
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(155, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(588, 116);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Здравствуйте\r\nДобро пожаловать в метод ранга\r\nна примере железнодорожной кассы\r\n";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label2->Location = System::Drawing::Point(251, 309);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(350, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Пожалуйста пройдите регистрацию\r\n";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(12, 542);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker1->TabIndex = 4;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(904, 26);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(140, 118);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Админская\r\nсистема\r\nредактирования\r\nклиентов";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->VisibleChanged += gcnew System::EventHandler(this, &MyForm::button2_VisibleChanged);
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(773, 210);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(396, 239);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Вы одмин\?";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(15, 185);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(54, 21);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Нет";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(131, 155);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(143, 22);
			this->textBox2->TabIndex = 7;
			this->textBox2->Text = L"Введите пароль";
			this->textBox2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::textBox2_MouseClick);
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(48, 39);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(300, 60);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Если вы являетесь одмином\r\nНажмите \"Да\", введите пароль\r\nи нажмите \"далее\"";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(15, 133);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(48, 21);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Да";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(929, 455);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(93, 30);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Далее";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(310, 388);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(226, 44);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Регистрация";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1226, 595);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
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
		bool is_odmen(String^ password)
		{
			if (password == "ADMIN" && is_adm == true)
			{
				MessageBox::Show(this, "Все прошло", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return true;
			}
			if (is_yes_on_radio_button(password) == false)
			{
				return false;
			}
			return true;
		}
		bool is_yes_on_radio_button(String^ password)
		{
			if (is_adm == true)
			{
				if (password == "ADMIN")
				{
					return true;
				}
				else {
					MessageBox::Show(this, "Вы не являетесь одмином, выключите \"режим одмина\"(НЕТ)", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					return false;
				}
			}
			else {
				if (password == "ADMIN")
				{
					MessageBox::Show(this, "Пароль верныЙ, включите \"режим одмина\"(ДА)", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					return false;
				}
			}
			return true;
		}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	this->button2->Hide();
	this->Text = "Главное меню";
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
	   bool is_true_str()
	   {
		   String^ str = Convert::ToString(this->textBox2->Text);
		   if (str == "ADMIN")
		   {
			   return true;
		   }
		   else {
			   return false;
		   }
	   }
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (is_true_str() == true)
	{
		Admin^ ad = gcnew Admin();
		ad->Show();
		//MyForm::Hide()
	}
	else {
		MessageBox::Show(this, "Не верный пароль", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void textBox2_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->textBox2->Clear();
}
private: System::Void button2_VisibleChanged(System::Object^ sender, System::EventArgs^ e) {

}
	bool is_adm = false;
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	is_adm = true;
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	is_adm = false;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ Copystr = Convert::ToString(this->textBox2->Text);
	if (is_odmen(Copystr) == true)
	{
		this->button2->Show();
	}
	else
	{
		this->button2->Hide();
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Iron^ ir = gcnew Iron();
	ir->Show();
	MyForm::Hide();
}
};
}
