#pragma once
#include <cmath>
#include <string>
#include <iostream>
#include <fstream>
#include "language.h"
#include "ConectWithServer.h"
namespace kyr2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		MyForm2(int x)
		{
			InitializeComponent();
			this->textBox1->Text = x.ToString();//  перегрузка конструктора 
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	protected:

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1323, 913);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm2::dataGridView1_CellContentClick);
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(1352, 153);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(560, 481);
			this->chart1->TabIndex = 2;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &MyForm2::chart1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1352, 690);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(209, 137);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Подсчет суммы балов всех експертов";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(1388, 102);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(345, 48);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Счелкните на графике для просмотра\r\nотношения проектов";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(1098, 769);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1659, 691);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(206, 136);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Вывод на экран названия проекта с наивысшей суммой балов";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1459, 850);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(274, 93);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Сохранить значение";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm2::button3_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1924, 1033);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
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
	private: bool cilindr;
    private: int digit;
	private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Text = "Метод ранга";
		digit = Int32::Parse(this->textBox1->Text);
		int copydigit = digit;
		cilindr = false;
		DataTable^ table = gcnew DataTable();
		table->Columns->Add("Проект", String::typeid);
		table->Columns->Add("Сумма балов", Double::typeid);
		DataRow^ row = table->NewRow();
		row["Проект"] = "Железнодорожнаяя касса";
		row["Сумма балов"] = 0;
		table->Rows->Add(row);
		while (digit != 0)
		{
			static int i = 1;
			table->Columns->Add("Эксперт"+i, Double::typeid);
			i++;
			digit--;
		}
		chart1->DataSource = table;
		chart1->Series["Series1"]->XValueMember = "Проект";
		chart1->Series["Series1"]->YValueMembers = "Сумма балов";
		chart1->Titles->Add("Общая оценка по всем проектам");
		chart1->Series["Series1"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Column;
		chart1->Series["Series1"]->Color = Color::Green;
		chart1->Series["Series1"]->IsVisibleInLegend = false;
		chart1->DataBind();
		dataGridView1->DataSource = table;
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
	cilindr = !cilindr;
	if (cilindr == true)
	{
		chart1->Series["Series1"]["DrawingStyle"] = "Cylinder";
	}
	else
	{
		chart1->Series["Series1"]["DrawingStyle"] = "Default";
	}
	chart1->DataBind();
}

private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
	   bool is_str_all_1_to_10()
	   {
		   int StringNumbers = 0;
		   bool is_trye = 0;
		   for (int i = 0; i < dataGridView1->Rows->Count - 1; i++)
		   {
			   double copyStringNumber = 0;

			   for (int I = 2; I < dataGridView1->Columns->Count; I++)
			   {
				   copyStringNumber = Convert::ToDouble(dataGridView1->Rows[StringNumbers]->Cells[I]->Value);
				   if (copyStringNumber > 11 || copyStringNumber < 0)
				   {
					   MessageBox::Show(this, String::Format("Вы ввели неверные значения в строке {0}, значения должны от 0 до 10!", StringNumbers.ToString()));
					   return false;
				   }
			   }
			   dataGridView1->Rows[i]->Cells[1]->Value = copyStringNumber;
			   StringNumbers++;
		   }
		   return true;
	   }
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { // summa strok
	if (is_str_all_1_to_10() == true)
	{
		int StringNumber = 0;//Стroka
		
		
		try
		{
			for (int i = 0; i < dataGridView1->Rows->Count - 1; i++)
			{
				double copyStringNumber = 0;
				String^ copyStringNumbers = "";
				for (int I = 2; I < dataGridView1->Columns->Count; I++)
				{
					copyStringNumber += Convert::ToDouble(dataGridView1->Rows[StringNumber]->Cells[I]->Value);
					copyStringNumbers += Convert::ToString(dataGridView1->Rows[StringNumber]->Cells[I]->Value);
					copyStringNumbers += ",";
				}
				std::string asd;
				MarshalString(copyStringNumbers, asd);
				auto ggg = "{ \"string\":\"" + asd + "\"}";
				auto tat = post_req("http://localhost:8000/copyStringNumber", ggg);
				dataGridView1->Rows[i]->Cells[1]->Value = tat;
				StringNumber++;
				//MessageBox::Show(this, String::Format("work double", StringNumber.ToString()));
			}
			
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(this, String::Format("Значения всех полей в {0} строке должны быть числа!", StringNumber.ToString()));
		}
	}
	else {

	}
}
	   String^ on_fffile;
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int ColumnNumber = 1;
	int sizeOfArray = dataGridView1->Rows->Count;
	double max = 0;
	int index = 0;
	double* arrayforcolumns = new double[100];
	try
	{
		for (int i = 0, j = 0; i < dataGridView1->Rows->Count -1;i++)
		{
			arrayforcolumns[i] = Convert::ToDouble(dataGridView1->Rows[j]->Cells[ColumnNumber]->Value);
			++j;
		}
		for (int i = 0; i < sizeOfArray; i++)
		{
			if (max < arrayforcolumns[i])
			{
				max = arrayforcolumns[i];
				index = i;
			}
		}
		int kolvo_max = 0;
		for (int i = 0; i < sizeOfArray; i++)
		{
			if (arrayforcolumns[i] == max)
			{
				kolvo_max += 1;
			}
		}
		if (kolvo_max == 1)
		{
			String^ str = dataGridView1->Rows[index]->Cells[0]->Value->ToString();
			
			String^ asf = String::Format("Лучший проект по мнению экспертов - {0}, c результатом {1} ", str, max.ToString());
			MessageBox::Show(this, String::Format("Лучший проект по мнению экспертов - {0}, c результатом {1} ", str, max.ToString()));
			on_fffile = asf;
		}
		else {
			MessageBox::Show(this, String::Format("Возникла ситуация, у вас {0} проектa	, с максимальными результатами -> {1}\n", kolvo_max.ToString(), max.ToString()));
		}
		this->button3->Show();
		
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(this, String::Format("Значения всех полей в {0} столбце должны быть числа!", ColumnNumber.ToString()));
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string str_file;
	std::string syu = main_login;
	String^ chhhh = gcnew String(main_login.c_str());
	MarshalString(on_fffile, str_file);
	std::ofstream fout(syu, std::ofstream::app);
	fout << '\n' << str_file;
	fout.close();
	this->button3->Hide();

}
};
}
