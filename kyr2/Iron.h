#pragma once
#include <Windows.h>
#include <cmath>
#include "Train.h"
#include <stdlib.h>
#include <fstream>
#include "MyForm2.h"
namespace kyr2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Iron
	/// </summary>
	public ref class Iron : public System::Windows::Forms::Form
	{
	public:
		Iron(void)
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
		~Iron()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::GroupBox^ groupBox5;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(23, 309);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(249, 40);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Продолжить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Iron::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(205, 34);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Введите количество человек \r\nкоторые сядут на поезд";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(20, 168);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(240, 34);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Введите общее количество багажа\r\n(В килограммах)";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Location = System::Drawing::Point(27, 64);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(278, 379);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(23, 222);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(249, 22);
			this->textBox2->TabIndex = 3;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(23, 95);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(249, 22);
			this->textBox1->TabIndex = 2;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button6);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Location = System::Drawing::Point(361, 64);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(200, 379);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Откуда\?";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(37, 316);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(132, 33);
			this->button6->TabIndex = 4;
			this->button6->Text = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Iron::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(37, 248);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(132, 40);
			this->button5->TabIndex = 3;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Iron::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(37, 180);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(132, 37);
			this->button4->TabIndex = 2;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Iron::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(37, 107);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(132, 35);
			this->button3->TabIndex = 1;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Iron::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(37, 40);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(132, 38);
			this->button2->TabIndex = 0;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Iron::button2_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button11);
			this->groupBox3->Controls->Add(this->button10);
			this->groupBox3->Controls->Add(this->button9);
			this->groupBox3->Controls->Add(this->button8);
			this->groupBox3->Controls->Add(this->button7);
			this->groupBox3->Location = System::Drawing::Point(697, 64);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(200, 379);
			this->groupBox3->TabIndex = 5;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Куда\?";
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(25, 316);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(147, 33);
			this->button11->TabIndex = 4;
			this->button11->Text = L"button11";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Iron::button11_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(25, 248);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(147, 40);
			this->button10->TabIndex = 3;
			this->button10->Text = L"button10";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Iron::button10_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(25, 180);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(147, 37);
			this->button9->TabIndex = 2;
			this->button9->Text = L"button9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Iron::button9_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(25, 107);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(147, 35);
			this->button8->TabIndex = 1;
			this->button8->Text = L"button8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Iron::button8_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(25, 44);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(147, 38);
			this->button7->TabIndex = 0;
			this->button7->Text = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Iron::button7_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(495, 468);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(273, 50);
			this->button12->TabIndex = 6;
			this->button12->Text = L"Регистрация";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Iron::button12_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(29, 40);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 17);
			this->label3->TabIndex = 7;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(29, 227);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 17);
			this->label4->TabIndex = 8;
			this->label4->Text = L"label4";
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(32, 107);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(179, 47);
			this->button13->TabIndex = 9;
			this->button13->Text = L"button13";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Iron::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(32, 309);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(179, 40);
			this->button14->TabIndex = 10;
			this->button14->Text = L"button14";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Iron::button14_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label3);
			this->groupBox4->Controls->Add(this->button14);
			this->groupBox4->Controls->Add(this->button13);
			this->groupBox4->Controls->Add(this->label4);
			this->groupBox4->Location = System::Drawing::Point(942, 64);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(486, 379);
			this->groupBox4->TabIndex = 11;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"groupBox4";
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(93, 161);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(182, 23);
			this->button15->TabIndex = 12;
			this->button15->Text = L"Продолжить";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Iron::button15_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(27, 43);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(329, 34);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Пожалуйста введите количество экспертов\r\nкоторое вам необходимо и нажмите продолж"
				L"ить\r\n";
			this->label5->Click += gcnew System::EventHandler(this, &Iron::label5_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(64, 102);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(232, 22);
			this->textBox3->TabIndex = 14;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(539, 29);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(174, 17);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Откуда и куда вы едите\?";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label5);
			this->groupBox5->Controls->Add(this->textBox3);
			this->groupBox5->Controls->Add(this->button15);
			this->groupBox5->Location = System::Drawing::Point(41, 505);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(392, 190);
			this->groupBox5->TabIndex = 16;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"groupBox5";
			// 
			// Iron
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1568, 736);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Iron";
			this->Text = L"Iron";
			this->Load += gcnew System::EventHandler(this, &Iron::Iron_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
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
		int peoples_which_came;
		int kilos_with_came;
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			int people;
			int kilos;
			int max_kios;
			try
			{
				people = Int32::Parse(this->textBox1->Text);
				kilos = Int32::Parse(this->textBox2->Text);
				max_kios = people * 25;
				peoples_which_came = people;
				kilos_with_came = kilos;
				if (people < 0 || people > 11)
				{
					throw std::logic_error("");
				}
				if (max_kios <= kilos)
				{
					throw 4;
				}
				this->groupBox2->Show();
				this->groupBox3->Show();
			}
			catch (std::logic_error e)
			{
				MessageBox::Show(this, "Людей должно быть больше 0 и меньше 10", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			catch (int)
			{
				MessageBox::Show(this, "Превышено максимальное количество килограмм, килограмм должно быть меньше " + max_kios.ToString(), "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			catch (System::FormatException^ e)
			{
				MessageBox::Show(this, "Введите целое число", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
		int max_place_in_plane;
		String^ otkuda = "";
		String^ kuda = "";
		int count_now_people;
		int count_now_bagaje;
		int cteniie_ludei(String^ logi)
		{
			std::string log;
			MarshalString(logi, log);
			std::ifstream fin;
			int* arr = new int[2];
			int i = 0;
			fin.open(log);
			while (!fin.eof())
			{
				std::string str_for_reading;
				fin >> str_for_reading;
				arr[i] = atoi(str_for_reading.c_str());
				i++;
			}
			count_now_people = arr[0];
			return arr[0];
		}
		int cteniie_bagaga(String^ logi)
		{
			std::string log;
			MarshalString(logi, log);
			std::ifstream fin;
			int* arr = new int[2];
			int i = 0;
			fin.open(log);
			while (!fin.eof())
			{
				std::string str_for_reading;
				fin >> str_for_reading;
				arr[i] = atoi(str_for_reading.c_str());
				i++;
			}
			count_now_bagaje = arr[1];
			return arr[1];
		}
		void zapis_in_file_chelovek_bagaja(String^ logi, int people, int bagage)
		{
			std::string log;
			MarshalString(logi, log);
			std::ofstream fout;
			fout.open(log);
			fout << people << " " << bagage;
		}
		bool is_can_you_fly()
		{
			if (polet == "ФФ" || polet == "ГГ" || polet == "ББ" || polet == "ИИ" || polet == "НН")
			{
				MessageBox::Show(this, "Нельзя летать в одну и ту же страну!", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				this->button2->Show();
				this->button3->Show();
				this->button4->Show();
				this->button5->Show();
				this->button6->Show();
				this->button7->Show();
				this->button8->Show();
				this->button9->Show();
				this->button10->Show();
				this->button11->Show();
				return false;
			}
			else {
				if (polet == "ФГ")
				{
					Train one("Франция", "Германия", 90);
					max_place_in_plane = 90;
					String^ first = "one.txt";
					which_air = first;
					int ludishki = cteniie_ludei(first);
					int bagagic = cteniie_bagaga(first);
					one.get_set_people(ludishki);
					one.get_set_bagage(bagagic);
					int kkilos = one.setBagage(kilos_with_came);
					int ppeople = one.setCount_of_people(peoples_which_came);
					zapis_in_file_chelovek_bagaja(first, ppeople, kkilos);
				}
				if (polet == "ФИ")
				{
					Train two("Франция", "Италия", 85);
					max_place_in_plane = 85;
					String^ first = "two.txt";
					which_air = first;
					int ludishki = cteniie_ludei(first);
					int bagagic = cteniie_bagaga(first);
					two.get_set_people(ludishki);
					two.get_set_bagage(bagagic);
					int kkilos = two.setBagage(kilos_with_came);
					int ppeople = two.setCount_of_people(peoples_which_came);
					zapis_in_file_chelovek_bagaja(first, ppeople, kkilos);
				}
				if (polet == "ФБ")
				{
					Train three("Франция", "Беларусь", 90);
					max_place_in_plane = 90;
					String^ first = "three.txt";
					which_air = first;
					int ludishki = cteniie_ludei(first);
					int bagagic = cteniie_bagaga(first);
					three.get_set_people(ludishki);
					three.get_set_bagage(bagagic);
					int kkilos = three.setBagage(kilos_with_came);
					int ppeople = three.setCount_of_people(peoples_which_came);
					zapis_in_file_chelovek_bagaja(first, ppeople, kkilos);
				}
				if (polet == "ФН")
				{
					Train four("Франция", "Норвегия", 100);
					max_place_in_plane = 100;
					String^ first = "four.txt";
					which_air = first;
					int ludishki = cteniie_ludei(first);
					int bagagic = cteniie_bagaga(first);
					four.get_set_people(ludishki);
					four.get_set_bagage(bagagic);
					int kkilos = four.setBagage(kilos_with_came);
					int ppeople = four.setCount_of_people(peoples_which_came);
					zapis_in_file_chelovek_bagaja(first, ppeople, kkilos);
				}
				if (polet == "ГФ")
				{
					Train five("Германия", "Франция", 90);
					max_place_in_plane = 90;
					String^ first = "five.txt";
					which_air = first;
					int ludishki = cteniie_ludei(first);
					int bagagic = cteniie_bagaga(first);
					five.get_set_people(ludishki);
					five.get_set_bagage(bagagic);
					int kkilos = five.setBagage(kilos_with_came);
					int ppeople = five.setCount_of_people(peoples_which_came);
					zapis_in_file_chelovek_bagaja(first, ppeople, kkilos);
				}
				if (polet == "ГИ")
				{
					Train six("Германия", "Италия", 97);
					max_place_in_plane = 97;
					String^ first = "six.txt";
					which_air = first;
					int ludishki = cteniie_ludei(first);
					int bagagic = cteniie_bagaga(first);
					six.get_set_people(ludishki);
					six.get_set_bagage(bagagic);
					int kkilos = six.setBagage(kilos_with_came);
					int ppeople = six.setCount_of_people(peoples_which_came);
					zapis_in_file_chelovek_bagaja(first, ppeople, kkilos);
				}
				if (polet == "ГБ")
				{
					Train seven("Германия", "Беларусь", 93);
					max_place_in_plane = 93;
					String^ first = "seven.txt";
					which_air = first;
					int ludishki = cteniie_ludei(first);
					int bagagic = cteniie_bagaga(first);
					seven.get_set_people(ludishki);
					seven.get_set_bagage(bagagic);
					int kkilos = seven.setBagage(kilos_with_came);
					int ppeople = seven.setCount_of_people(peoples_which_came);
					zapis_in_file_chelovek_bagaja(first, ppeople, kkilos);

				}
				if (polet == "ГН")
				{
					Train eight("Германия", "Норвегия", 95);
					max_place_in_plane = 95;
					String^ first = "eigth.txt";
					which_air = first;
					int ludishki = cteniie_ludei(first);
					int bagagic = cteniie_bagaga(first);
					eight.get_set_people(ludishki);
					eight.get_set_bagage(bagagic);
					int kkilos = eight.setBagage(kilos_with_came);
					int ppeople = eight.setCount_of_people(peoples_which_came);
					zapis_in_file_chelovek_bagaja(first, ppeople, kkilos);
				}
				if (polet == "ИФ")
				{
					Train nine("Италия", "Франция", 84);
					max_place_in_plane = 84;
					String^ first = "nine.txt";
					which_air = first;
					int ludishki = cteniie_ludei(first);
					int bagagic = cteniie_bagaga(first);
					nine.get_set_people(ludishki);
					nine.get_set_bagage(bagagic);
					int kkilos = nine.setBagage(kilos_with_came);
					int ppeople = nine.setCount_of_people(peoples_which_came);
					zapis_in_file_chelovek_bagaja(first, ppeople, kkilos);
				}
				if (polet == "ИГ")
				{
					Train ten("Италия", "Германия", 86);
					max_place_in_plane = 86;
					String^ first = "ten.txt";
					which_air = first;
					int ludishki = cteniie_ludei(first);
					int bagagic = cteniie_bagaga(first);
					ten.get_set_people(ludishki);
					ten.get_set_bagage(bagagic);
					int kkilos = ten.setBagage(kilos_with_came);
					int ppeople = ten.setCount_of_people(peoples_which_came);
					zapis_in_file_chelovek_bagaja(first, ppeople, kkilos);
				}
				if (polet == "ИБ")
				{
					Train eleven("Италия", "Беларусь", 80);
					max_place_in_plane = 80;
					String^ first = "eleven.txt";
					which_air = first;
					int ludishki = cteniie_ludei(first);
					int bagagic = cteniie_bagaga(first);
					eleven.get_set_people(ludishki);
					eleven.get_set_bagage(bagagic);
					int kkilos = eleven.setBagage(kilos_with_came);
					int ppeople = eleven.setCount_of_people(peoples_which_came);
					zapis_in_file_chelovek_bagaja(first, ppeople, kkilos);
				}
				if (polet == "ИН")
				{
					Train twelve("Италия", "Норвегия", 89);
					max_place_in_plane = 89;
					String^ first = "twelve.txt";
					which_air = first;
					int ludishki = cteniie_ludei(first);
					int bagagic = cteniie_bagaga(first);
					twelve.get_set_people(ludishki);
					twelve.get_set_bagage(bagagic);
					int kkilos = twelve.setBagage(kilos_with_came);
					int ppeople = twelve.setCount_of_people(peoples_which_came);
					zapis_in_file_chelovek_bagaja(first, ppeople, kkilos);
				}
				if (polet == "БФ")
				{
					Train therteen("Беларусь", "Франция", 92);
					max_place_in_plane = 92;
					String^ first = "therteen.txt";
					which_air = first;
					int ludishki = cteniie_ludei(first);
					int bagagic = cteniie_bagaga(first);
					therteen.get_set_people(ludishki);
					therteen.get_set_bagage(bagagic);
					int kkilos = therteen.setBagage(kilos_with_came);
					int ppeople = therteen.setCount_of_people(peoples_which_came);
					zapis_in_file_chelovek_bagaja(first, ppeople, kkilos);
				}
				if (polet == "БГ")
				{
					Train forteen("Беларусь", "Германия", 91);
					max_place_in_plane = 91;
					String^ first = "forteen.txt";
					which_air = first;
					int ludishki = cteniie_ludei(first);
					int bagagic = cteniie_bagaga(first);
					forteen.get_set_people(ludishki);
					forteen.get_set_bagage(bagagic);
					int kkilos = forteen.setBagage(kilos_with_came);
					int ppeople = forteen.setCount_of_people(peoples_which_came);
					zapis_in_file_chelovek_bagaja(first, ppeople, kkilos);
				}
				if (polet == "БИ")
				{
					Train feveteen("Беларусь", "Италия", 98);
					max_place_in_plane = 98;
					String^ first = "feveteen.txt";
					int ludishki = cteniie_ludei(first);
					int bagagic = cteniie_bagaga(first);
					feveteen.get_set_people(ludishki);
					feveteen.get_set_bagage(bagagic);
					int kkilos = feveteen.setBagage(kilos_with_came);
					int ppeople = feveteen.setCount_of_people(peoples_which_came);
					zapis_in_file_chelovek_bagaja(first, ppeople, kkilos);
				}
				if (polet == "БН")
				{
					Train sixteen("Беларусь", "Норвегия", 99);
					max_place_in_plane = 99;
					String^ first = "sixteen.txt";
					which_air = first;
					int ludishki = cteniie_ludei(first);
					int bagagic = cteniie_bagaga(first);
					sixteen.get_set_people(ludishki);
					sixteen.get_set_bagage(bagagic);
					int kkilos = sixteen.setBagage(kilos_with_came);
					int ppeople = sixteen.setCount_of_people(peoples_which_came);
					zapis_in_file_chelovek_bagaja(first, ppeople, kkilos);
				}
				if (polet == "НФ")
				{
					Train seventeen("Норвегия", "Франция", 90);
					max_place_in_plane = 90;
					String^ first = "seventeen.txt";
					which_air = first;
					int ludishki = cteniie_ludei(first);
					int bagagic = cteniie_bagaga(first);
					seventeen.get_set_people(ludishki);
					seventeen.get_set_bagage(bagagic);
					int kkilos = seventeen.setBagage(kilos_with_came);
					int ppeople = seventeen.setCount_of_people(peoples_which_came);
					zapis_in_file_chelovek_bagaja(first, ppeople, kkilos);
				}
				if (polet == "НГ")
				{
					Train eigthteen("Норвегия", "Германия", 94);
					max_place_in_plane = 94;
					String^ first = "eigthteen.txt";
					which_air = first;
					int ludishki = cteniie_ludei(first);
					int bagagic = cteniie_bagaga(first);
					eigthteen.get_set_people(ludishki);
					eigthteen.get_set_bagage(bagagic);
					int kkilos = eigthteen.setBagage(kilos_with_came);
					int ppeople = eigthteen.setCount_of_people(peoples_which_came);
					zapis_in_file_chelovek_bagaja(first, ppeople, kkilos);
				}
				if (polet == "НИ")
				{
					Train nineteen("Норвегия", "Италия", 100);
					max_place_in_plane = 100;
					String^ first = "nineteen.txt";
					which_air = first;
					int ludishki = cteniie_ludei(first);
					int bagagic = cteniie_bagaga(first);
					nineteen.get_set_people(ludishki);
					nineteen.get_set_bagage(bagagic);
					int kkilos = nineteen.setBagage(kilos_with_came);
					int ppeople = nineteen.setCount_of_people(peoples_which_came);
					zapis_in_file_chelovek_bagaja(first, ppeople, kkilos);
				}
				if (polet == "НБ")
				{
					Train twenty("Норвегия", "Беларусь", 84);
					max_place_in_plane = 84;
					String^ first = "twenty.txt";
					which_air = first;
					int ludishki = cteniie_ludei(first);
					int bagagic = cteniie_bagaga(first);
					twenty.get_set_people(ludishki);
					twenty.get_set_bagage(bagagic);
					int kkilos = twenty.setBagage(kilos_with_came);
					int ppeople = twenty.setCount_of_people(peoples_which_came);
					zapis_in_file_chelovek_bagaja(first, ppeople, kkilos);
				}
				return true;
			}
		}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		kuda = "Ф";
		this->button8->Hide();
		this->button9->Hide();
		this->button10->Hide();
		this->button11->Hide();
	}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	if (hide_button == 0)
	{
		MessageBox::Show(this, "Вы не выбрали самолет!", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else {
		std::string s_pep = std::to_string(count_now_bagaje + kilos_with_came);
		std::string s_bag = std::to_string(2000);
		std::string combo_pep;
		combo_pep = "Поезд заполнен на " + s_pep + " из " + s_bag + " килограмм";
		String^ roflan = gcnew String(combo_pep.c_str());
		this->label4->Text = roflan;
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	otkuda = "Ф";
	this->button3->Hide();
	this->button4->Hide();
	this->button5->Hide();
	this->button6->Hide();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	otkuda = "Г";
	this->button2->Hide();
	this->button4->Hide();
	this->button5->Hide();
	this->button6->Hide();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	otkuda = "И";
	this->button2->Hide();
	this->button3->Hide();
	this->button5->Hide();
	this->button6->Hide();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	otkuda = "Б";
	this->button2->Hide();
	this->button3->Hide();
	this->button4->Hide();
	this->button6->Hide();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	otkuda = "Н";
	this->button2->Hide();
	this->button3->Hide();
	this->button4->Hide();
	this->button5->Hide();
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	kuda = "Г";
	this->button7->Hide();
	this->button9->Hide();
	this->button10->Hide();
	this->button11->Hide();
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	kuda = "И";
	this->button7->Hide();
	this->button8->Hide();
	this->button10->Hide();
	this->button11->Hide();
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	kuda = "Б";
	this->button7->Hide();
	this->button8->Hide();
	this->button9->Hide();
	this->button11->Hide();
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	kuda = "Н";
	this->button7->Hide();
	this->button8->Hide();
	this->button9->Hide();
	this->button10->Hide();
}
private: System::Void Iron_Load(System::Object^ sender, System::EventArgs^ e) {
	this->groupBox2->Hide();
	this->groupBox3->Hide();
	this->groupBox4->Hide();
	this->groupBox5->Hide();
	this->button2->Text = "Франция";
	this->button3->Text = "Германия";
	this->button4->Text = "Италия";
	this->button5->Text = "Беларусь";
	this->button6->Text = "Норвегия";
	this->button7->Text = "Франция";
	this->button8->Text = "Германия";
	this->button9->Text = "Италия";
	this->button10->Text = "Беларусь";
	this->button11->Text = "Норвегия";
}
	   bool is_have_place()
	   {
		   if (count_now_people + peoples_which_came > max_place_in_plane)
		   {
			MessageBox::Show(this, "Слишком большое количество людей, извините но вам придется ждать следующего Поезда:(", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		    return false;
		   }
		   else {
			   return true;
		   }
	   }
	   bool is_have_bagage()
	   {
		   if (count_now_bagaje + kilos_with_came > 2000)
		   {
				MessageBox::Show(this, "Слишком большое количество багажа, извините но вам придется ждать следующего Поезда:(", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			    return false;
		   }
		   else {
			   return true;
		   }
	   }

	   String^ which_air;
	   String^ polet;
	   int hide_button = 0;
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	polet = otkuda + kuda;
	if (polet == "")
	{
		MessageBox::Show(this, "Вы не выбрали маршрут -> ", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else
	{
		if (is_can_you_fly() == true && is_have_place() == true && is_have_bagage() == true)
		{
			MessageBox::Show(this, "Вы зарегистрированы -> " + polet, "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			this->button12->Hide();
			this->groupBox4->Show();
			this->groupBox5->Show();
			hide_button = 1;
		}
	}

}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	if (hide_button == 0)
	{
		MessageBox::Show(this, "Вы не выбрали Поезд!", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else {
		std::string s_pep = std::to_string(count_now_people + peoples_which_came);
		std::string s_bag = std::to_string(max_place_in_plane);
		std::string combo_pep;
		combo_pep = "Поезд заполнен на " + s_pep + " из " + s_bag + " людей";
		String^ roflan = gcnew String(combo_pep.c_str());
		this->label3->Text = roflan;
	}
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	int a;
	try
	{
		a = Int32::Parse(this->textBox3->Text);
		if (a <= 0 || a >= 11)
		{
			throw std::logic_error("");
		}
		MyForm2^ f = gcnew MyForm2(a);
		f->Show();
		Iron::Hide();
	}
	catch (std::logic_error e)
	{
		MessageBox::Show(this, "Людей должно быть больше 0 и меньше 10", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	catch (System::ArgumentNullException^ e)
	{
		MessageBox::Show(this, "Пустая ссылка.", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	catch (System::FormatException^ e)
	{
		MessageBox::Show(this, "Введите целое число.", "Внимание",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	catch (System::OverflowException^ e)
	{
		MessageBox::Show(this, "ВВедите число подходящего размера.", "Слишком большое число", MessageBoxButtons::OK, MessageBoxIcon::Stop);
	}
}
};
}
