#pragma once
#include "Class.h"
#include "string.h"
#include "WarningForm.h"
#include "ctype.h"
#include "WrongValuesForm.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

namespace Calc {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: 
			//
		}

	protected:
		/// <summary>
		
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ SourceGrid;
	protected:

	protected:

	protected:

	private: System::Windows::Forms::Button^ accept_button;
	private: System::Windows::Forms::Label^ result_label;
	private: System::Windows::Forms::Button^ create_button;
	private: System::Windows::Forms::DataGridView^ ResultGrid;

	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ rows_label;
	private: System::Windows::Forms::Label^ columns_label;


	private: System::Windows::Forms::TextBox^ user_rows;
	private: System::Windows::Forms::TextBox^ user_columns;
	private: System::Windows::Forms::Label^ answer_label;
	private: System::Windows::Forms::Label^ user_num_label;
	private: System::Windows::Forms::TextBox^ user_num;
	private: System::Windows::Forms::DataGridView^ ExtraGrid;
	private: System::Windows::Forms::Label^ result2_label;
	private: System::Windows::Forms::TextBox^ extra_columns;
	private: System::Windows::Forms::Label^ extra_columns_label;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button_random;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox_low_rand;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox_high_rand;
	private: System::Windows::Forms::Label^ label6;






	private:
		/// <summary>
		
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		
		/// </summary>
		void InitializeComponent(void)
		{
			this->SourceGrid = (gcnew System::Windows::Forms::DataGridView());
			this->accept_button = (gcnew System::Windows::Forms::Button());
			this->result_label = (gcnew System::Windows::Forms::Label());
			this->create_button = (gcnew System::Windows::Forms::Button());
			this->ResultGrid = (gcnew System::Windows::Forms::DataGridView());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->rows_label = (gcnew System::Windows::Forms::Label());
			this->columns_label = (gcnew System::Windows::Forms::Label());
			this->user_rows = (gcnew System::Windows::Forms::TextBox());
			this->user_columns = (gcnew System::Windows::Forms::TextBox());
			this->answer_label = (gcnew System::Windows::Forms::Label());
			this->user_num_label = (gcnew System::Windows::Forms::Label());
			this->user_num = (gcnew System::Windows::Forms::TextBox());
			this->ExtraGrid = (gcnew System::Windows::Forms::DataGridView());
			this->result2_label = (gcnew System::Windows::Forms::Label());
			this->extra_columns = (gcnew System::Windows::Forms::TextBox());
			this->extra_columns_label = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button_random = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox_low_rand = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox_high_rand = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SourceGrid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ResultGrid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ExtraGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// SourceGrid
			// 
			this->SourceGrid->AllowUserToAddRows = false;
			this->SourceGrid->AllowUserToDeleteRows = false;
			this->SourceGrid->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->SourceGrid->Location = System::Drawing::Point(12, 100);
			this->SourceGrid->Name = L"SourceGrid";
			this->SourceGrid->Size = System::Drawing::Size(172, 147);
			this->SourceGrid->TabIndex = 0;
			this->SourceGrid->Visible = false;
			// 
			// accept_button
			// 
			this->accept_button->Location = System::Drawing::Point(114, 253);
			this->accept_button->Name = L"accept_button";
			this->accept_button->Size = System::Drawing::Size(70, 48);
			this->accept_button->TabIndex = 1;
			this->accept_button->Text = L"Посчитать";
			this->accept_button->UseVisualStyleBackColor = true;
			this->accept_button->Visible = false;
			this->accept_button->Click += gcnew System::EventHandler(this, &MyForm::accept_button_Click);
			// 
			// result_label
			// 
			this->result_label->AutoSize = true;
			this->result_label->Location = System::Drawing::Point(14, 263);
			this->result_label->Name = L"result_label";
			this->result_label->Size = System::Drawing::Size(35, 13);
			this->result_label->TabIndex = 2;
			this->result_label->Text = L"пусто";
			this->result_label->Visible = false;
			// 
			// create_button
			// 
			this->create_button->Location = System::Drawing::Point(122, 58);
			this->create_button->Name = L"create_button";
			this->create_button->Size = System::Drawing::Size(62, 36);
			this->create_button->TabIndex = 3;
			this->create_button->Text = L"Создать";
			this->create_button->UseVisualStyleBackColor = true;
			this->create_button->Visible = false;
			this->create_button->Click += gcnew System::EventHandler(this, &MyForm::create_button_Click);
			// 
			// ResultGrid
			// 
			this->ResultGrid->AllowUserToAddRows = false;
			this->ResultGrid->AllowUserToDeleteRows = false;
			this->ResultGrid->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->ResultGrid->Location = System::Drawing::Point(397, 100);
			this->ResultGrid->Name = L"ResultGrid";
			this->ResultGrid->ReadOnly = true;
			this->ResultGrid->Size = System::Drawing::Size(172, 147);
			this->ResultGrid->TabIndex = 4;
			this->ResultGrid->Visible = false;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(12, 12);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(125, 21);
			this->comboBox1->TabIndex = 5;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// rows_label
			// 
			this->rows_label->AutoSize = true;
			this->rows_label->Location = System::Drawing::Point(12, 58);
			this->rows_label->Name = L"rows_label";
			this->rows_label->Size = System::Drawing::Size(37, 13);
			this->rows_label->TabIndex = 6;
			this->rows_label->Text = L"Строк";
			this->rows_label->Visible = false;
			// 
			// columns_label
			// 
			this->columns_label->AutoSize = true;
			this->columns_label->Location = System::Drawing::Point(67, 58);
			this->columns_label->Name = L"columns_label";
			this->columns_label->Size = System::Drawing::Size(55, 13);
			this->columns_label->TabIndex = 7;
			this->columns_label->Text = L"Столбцов";
			this->columns_label->Visible = false;
			// 
			// user_rows
			// 
			this->user_rows->Location = System::Drawing::Point(15, 74);
			this->user_rows->Name = L"user_rows";
			this->user_rows->Size = System::Drawing::Size(46, 20);
			this->user_rows->TabIndex = 8;
			this->user_rows->Visible = false;
			// 
			// user_columns
			// 
			this->user_columns->Location = System::Drawing::Point(70, 74);
			this->user_columns->Name = L"user_columns";
			this->user_columns->Size = System::Drawing::Size(46, 20);
			this->user_columns->TabIndex = 9;
			this->user_columns->Visible = false;
			// 
			// answer_label
			// 
			this->answer_label->AutoSize = true;
			this->answer_label->Location = System::Drawing::Point(12, 250);
			this->answer_label->Name = L"answer_label";
			this->answer_label->Size = System::Drawing::Size(37, 13);
			this->answer_label->TabIndex = 10;
			this->answer_label->Text = L"Ответ";
			this->answer_label->Visible = false;
			// 
			// user_num_label
			// 
			this->user_num_label->AutoSize = true;
			this->user_num_label->Location = System::Drawing::Point(199, 58);
			this->user_num_label->Name = L"user_num_label";
			this->user_num_label->Size = System::Drawing::Size(39, 13);
			this->user_num_label->TabIndex = 11;
			this->user_num_label->Text = L"Число";
			this->user_num_label->Visible = false;
			// 
			// user_num
			// 
			this->user_num->Location = System::Drawing::Point(202, 74);
			this->user_num->Name = L"user_num";
			this->user_num->Size = System::Drawing::Size(46, 20);
			this->user_num->TabIndex = 12;
			this->user_num->Visible = false;
			// 
			// ExtraGrid
			// 
			this->ExtraGrid->AllowUserToAddRows = false;
			this->ExtraGrid->AllowUserToDeleteRows = false;
			this->ExtraGrid->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->ExtraGrid->Location = System::Drawing::Point(202, 100);
			this->ExtraGrid->Name = L"ExtraGrid";
			this->ExtraGrid->Size = System::Drawing::Size(172, 147);
			this->ExtraGrid->TabIndex = 13;
			this->ExtraGrid->Visible = false;
			// 
			// result2_label
			// 
			this->result2_label->AutoSize = true;
			this->result2_label->Location = System::Drawing::Point(452, 81);
			this->result2_label->Name = L"result2_label";
			this->result2_label->Size = System::Drawing::Size(59, 13);
			this->result2_label->TabIndex = 14;
			this->result2_label->Text = L"Результат";
			this->result2_label->Visible = false;
			// 
			// extra_columns
			// 
			this->extra_columns->Location = System::Drawing::Point(254, 74);
			this->extra_columns->Name = L"extra_columns";
			this->extra_columns->Size = System::Drawing::Size(46, 20);
			this->extra_columns->TabIndex = 15;
			this->extra_columns->Visible = false;
			// 
			// extra_columns_label
			// 
			this->extra_columns_label->AutoSize = true;
			this->extra_columns_label->Location = System::Drawing::Point(251, 58);
			this->extra_columns_label->Name = L"extra_columns_label";
			this->extra_columns_label->Size = System::Drawing::Size(55, 13);
			this->extra_columns_label->TabIndex = 16;
			this->extra_columns_label->Text = L"Столбцов";
			this->extra_columns_label->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(206, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(237, 25);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Калькулятор матриц";
			// 
			// button_random
			// 
			this->button_random->Location = System::Drawing::Point(358, 263);
			this->button_random->Name = L"button_random";
			this->button_random->Size = System::Drawing::Size(70, 48);
			this->button_random->TabIndex = 18;
			this->button_random->Text = L"Заполнить";
			this->button_random->UseVisualStyleBackColor = true;
			this->button_random->Visible = false;
			this->button_random->Click += gcnew System::EventHandler(this, &MyForm::button_random_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(251, 253);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 13);
			this->label2->TabIndex = 19;
			this->label2->Text = L"Случайные числа";
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(199, 271);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 13);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Нижняя граница";
			this->label3->Visible = false;
			// 
			// textBox_low_rand
			// 
			this->textBox_low_rand->Location = System::Drawing::Point(296, 268);
			this->textBox_low_rand->Name = L"textBox_low_rand";
			this->textBox_low_rand->Size = System::Drawing::Size(46, 20);
			this->textBox_low_rand->TabIndex = 21;
			this->textBox_low_rand->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(199, 298);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(93, 13);
			this->label4->TabIndex = 22;
			this->label4->Text = L"Верхняя граница";
			this->label4->Visible = false;
			// 
			// textBox_high_rand
			// 
			this->textBox_high_rand->Location = System::Drawing::Point(296, 295);
			this->textBox_high_rand->Name = L"textBox_high_rand";
			this->textBox_high_rand->Size = System::Drawing::Size(46, 20);
			this->textBox_high_rand->TabIndex = 23;
			this->textBox_high_rand->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Minecraft Rus", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(1150, 758);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(197, 11);
			this->label6->TabIndex = 24;
			this->label6->Text = L"Поставьте пожалуйста 5!";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(582, 328);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox_high_rand);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox_low_rand);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button_random);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->extra_columns_label);
			this->Controls->Add(this->extra_columns);
			this->Controls->Add(this->result2_label);
			this->Controls->Add(this->ExtraGrid);
			this->Controls->Add(this->user_num);
			this->Controls->Add(this->user_num_label);
			this->Controls->Add(this->answer_label);
			this->Controls->Add(this->user_columns);
			this->Controls->Add(this->user_rows);
			this->Controls->Add(this->columns_label);
			this->Controls->Add(this->rows_label);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->ResultGrid);
			this->Controls->Add(this->create_button);
			this->Controls->Add(this->result_label);
			this->Controls->Add(this->accept_button);
			this->Controls->Add(this->SourceGrid);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Matrix Calc";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SourceGrid))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ResultGrid))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ExtraGrid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void accept_button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox1->Text == "Определитель") {
			accept_button_determinant();
		}
		else if (comboBox1->Text == "Умножить на число") {
			accept_button_multNum();
		}
		else if (comboBox1->Text == "Сложение") {
			accept_button_adding();
		}
		else if (comboBox1->Text == "Вычитание") {
			accept_button_subtract();
		}
		else if (comboBox1->Text == "Транспонировать") {
			accept_button_transpose();
		}
		else if (comboBox1->Text == "Умножить на матрицу") {
			accept_button_multMatr();
		}
		else if (comboBox1->Text == "Возвести в степень") {
			accept_button_pow();
		}
		else if (comboBox1->Text == "Ранг матрицы") {
			accept_button_rank();
		}
		else if (comboBox1->Text == "Обратная матрица") {
			accept_button_reverse();
		}
	}
	private: System::Void create_button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox1->Text == "Определитель") {
			create_button_determinant();
		}
		else if (comboBox1->Text == "Умножить на число") {
			create_button_multNum();
		}
		else if (comboBox1->Text == "Сложение") {
			create_button_adding();
		}
		else if (comboBox1->Text == "Вычитание") {
			create_button_subtract();
		}
		else if (comboBox1->Text == "Транспонировать") {
			create_button_transpose();
		}
		else if (comboBox1->Text == "Умножить на матрицу") {
			create_button_multMatr();
		}
		else if (comboBox1->Text == "Возвести в степень") {
			create_button_pow();
		}
		else if (comboBox1->Text == "Ранг матрицы") {
			create_button_rank();
		}
		else if (comboBox1->Text == "Обратная матрица") {
			create_button_reverse();
		}
	}
	
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e){
		SourceGrid->Visible = false;
		rows_label->Visible = false;
		columns_label->Visible = false;
		create_button->Visible = false;
		accept_button->Visible = false;
		user_rows->Visible = false;
		user_columns->Visible = false;
		ResultGrid->Visible = false;
		user_num_label->Visible = false;
		user_num->Visible = false;
		answer_label->Visible = false;
		result_label->Visible = false;
		result2_label->Visible = false;
		ExtraGrid->Visible = false;
		extra_columns->Visible = false;
		extra_columns_label->Visible = false;
		button_random->Visible = false;
		label2->Visible = false;
		label3->Visible = false;
		label4->Visible = false;
		textBox_low_rand->Visible = false;
		textBox_high_rand->Visible = false;
		ResultGrid->RowCount = 0;
		ResultGrid->ColumnCount = 0;
			if (comboBox1->Text == "Определитель") {
				SourceGrid->Visible = true;
				rows_label->Visible = true;
				rows_label->Text = "Размерность";
				create_button->Visible = true;
				accept_button->Visible = true;
				user_rows->Visible = true;
				answer_label->Visible = true;
				button_random->Visible = true;
				label3->Visible = true;
				label4->Visible = true;
				textBox_low_rand->Visible = true;
				textBox_high_rand->Visible = true;
				label2->Visible = true;

				int m = SourceGrid->RowCount < SourceGrid->ColumnCount ? SourceGrid->RowCount : SourceGrid->ColumnCount;
				SourceGrid->RowCount = m;
				SourceGrid->ColumnCount = m;
			}
			else if (comboBox1->Text == "Умножить на число") {
				SourceGrid->Visible = true;
				rows_label->Visible = true;
				rows_label->Text = "Строк";
				columns_label->Visible = true;
				create_button->Visible = true;
				accept_button->Visible = true;
				user_rows->Visible = true;
				user_columns->Visible = true;
				ResultGrid->Visible = true;
				result2_label->Visible = true;
				user_num_label->Visible = true;
				user_num->Visible = true;
				user_num_label->Text = "Число";
				button_random->Visible = true;
				label3->Visible = true;
				label4->Visible = true;
				textBox_low_rand->Visible = true;
				textBox_high_rand->Visible = true;
				label2->Visible = true;
			}
			else if (comboBox1->Text == "Сложение") {
				SourceGrid->Visible = true;
				rows_label->Visible = true;
				rows_label->Text = "Строк";
				columns_label->Visible = true;
				create_button->Visible = true;
				accept_button->Visible = true;
				user_rows->Visible = true;
				user_columns->Visible = true;
				ResultGrid->Visible = true;
				ExtraGrid->Visible = true;
				result2_label->Visible = true;
				button_random->Visible = true;
				label3->Visible = true;
				label4->Visible = true;
				textBox_low_rand->Visible = true;
				textBox_high_rand->Visible = true;
				label2->Visible = true;

				ExtraGrid->RowCount = SourceGrid->RowCount;
				ExtraGrid->ColumnCount = SourceGrid->ColumnCount;
			}
			else if (comboBox1->Text == "Вычитание") {
				SourceGrid->Visible = true;
				rows_label->Visible = true;
				rows_label->Text = "Строк";
				columns_label->Visible = true;
				create_button->Visible = true;
				accept_button->Visible = true;
				user_rows->Visible = true;
				user_columns->Visible = true;
				ResultGrid->Visible = true;
				ExtraGrid->Visible = true;
				result2_label->Visible = true;
				button_random->Visible = true;
				label3->Visible = true;
				label4->Visible = true;
				textBox_low_rand->Visible = true;
				textBox_high_rand->Visible = true;
				label2->Visible = true;

				ExtraGrid->RowCount = SourceGrid->RowCount;
				ExtraGrid->ColumnCount = SourceGrid->ColumnCount;
			}
			else if (comboBox1->Text == "Транспонировать") {
				SourceGrid->Visible = true;
				rows_label->Visible = true;
				rows_label->Text = "Строк";
				columns_label->Visible = true;
				create_button->Visible = true;
				accept_button->Visible = true;
				user_rows->Visible = true;
				user_columns->Visible = true;
				ResultGrid->Visible = true;
				result2_label->Visible = true;
				button_random->Visible = true;
				label3->Visible = true;
				label4->Visible = true;
				textBox_low_rand->Visible = true;
				textBox_high_rand->Visible = true;
				label2->Visible = true;
			}
			else if (comboBox1->Text == "Умножить на матрицу") {
				SourceGrid->Visible = true;
				rows_label->Visible = true;
				rows_label->Text = "Строк";
				columns_label->Visible = true;
				create_button->Visible = true;
				accept_button->Visible = true;
				user_rows->Visible = true;
				user_columns->Visible = true;
				ResultGrid->Visible = true;
				ExtraGrid->Visible = true;
				result2_label->Visible = true;
				extra_columns->Visible = true;
				extra_columns_label->Visible = true;
				button_random->Visible = true;
				label3->Visible = true;
				label4->Visible = true;
				textBox_low_rand->Visible = true;
				textBox_high_rand->Visible = true;
				label2->Visible = true;

				ExtraGrid->RowCount = SourceGrid->ColumnCount;
				ExtraGrid->ColumnCount = SourceGrid->RowCount;
			}
			else if (comboBox1->Text == "Возвести в степень") {
				SourceGrid->Visible = true;
				rows_label->Visible = true;
				rows_label->Text = "Размерность";
				create_button->Visible = true;
				accept_button->Visible = true;
				user_rows->Visible = true;
				ResultGrid->Visible = true;
				result2_label->Visible = true;
				user_num_label->Visible = true;
				user_num_label->Text = "Степень";
				user_num->Visible = true;
				button_random->Visible = true;
				label3->Visible = true;
				label4->Visible = true;
				textBox_low_rand->Visible = true;
				textBox_high_rand->Visible = true;
				label2->Visible = true;

				int m = SourceGrid->RowCount < SourceGrid->ColumnCount ? SourceGrid->RowCount : SourceGrid->ColumnCount;
				SourceGrid->RowCount = m;
				SourceGrid->ColumnCount = m;
			}
			else if (comboBox1->Text == "Ранг матрицы") {
				SourceGrid->Visible = true;
				rows_label->Visible = true;
				rows_label->Text = "Строк";
				columns_label->Visible = true;
				create_button->Visible = true;
				accept_button->Visible = true;
				user_rows->Visible = true;
				user_columns->Visible = true;
				answer_label->Visible = true;
				button_random->Visible = true;
				label3->Visible = true;
				label4->Visible = true;
				textBox_low_rand->Visible = true;
				textBox_high_rand->Visible = true;
				label2->Visible = true;

				int m = SourceGrid->RowCount < SourceGrid->ColumnCount ? SourceGrid->RowCount : SourceGrid->ColumnCount;
				SourceGrid->RowCount = m;
				SourceGrid->ColumnCount = m;
			}
			else if (comboBox1->Text == "Обратная матрица") {
				SourceGrid->Visible = true;
				rows_label->Visible = true;
				rows_label->Text = "Размерность";
				create_button->Visible = true;
				accept_button->Visible = true;
				user_rows->Visible = true;
				ResultGrid->Visible = true;
				result2_label->Visible = true;
				button_random->Visible = true;
				label3->Visible = true;
				label4->Visible = true;
				textBox_low_rand->Visible = true;
				textBox_high_rand->Visible = true;
				label2->Visible = true;

				int m = SourceGrid->RowCount < SourceGrid->ColumnCount ? SourceGrid->RowCount : SourceGrid->ColumnCount;
				SourceGrid->RowCount = m;
				SourceGrid->ColumnCount = m;
			}
			else {
				WarningForm^ warning = gcnew WarningForm();
				warning->Show();
			}
	}
	
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		comboBox1->Focus();
		comboBox1->Items->Add("Определитель");
		comboBox1->Items->Add("Умножить на число");
		comboBox1->Items->Add("Сложение");
		comboBox1->Items->Add("Вычитание");
		comboBox1->Items->Add("Транспонировать");
		comboBox1->Items->Add("Умножить на матрицу");
		comboBox1->Items->Add("Возвести в степень");
		comboBox1->Items->Add("Ранг матрицы");
		comboBox1->Items->Add("Обратная матрица");
	}
	//accept_button_funcs
	private: System::Void accept_button_determinant() {
		int r = SourceGrid->RowCount;
		Matr user = read_from_grid(SourceGrid);

		if (!user.get_status()) return; 

		int res = user.determinant(); 
		result_label->Text = Convert::ToString(res); 
		result_label->Visible = true; 
	}
	private: System::Void accept_button_multNum() {
		int r = SourceGrid->RowCount;
		int c = SourceGrid->ColumnCount;

		Matr user = read_from_grid(SourceGrid);

		if (!user.get_status() || !isValidNum(user_num->Text)) return;

		ResultGrid->RowCount = r;
		ResultGrid->ColumnCount = c;
		Matr res = user.mult_num(Convert::ToDouble(user_num->Text));

		for (int i = 0; i < res.get_rows_count(); i++) {
			for (int j = 0; j < res.get_columns_count(); j++) {
				ResultGrid->Rows[i]->Cells[j]->Value = Convert::ToString(res.get_row(i)[j]);
			}
		}
	}
	private: System::Void accept_button_adding() {
		int r = SourceGrid->RowCount;
		int c = SourceGrid->ColumnCount;
		Matr user = read_from_grid(SourceGrid);
		Matr extra = read_from_grid(ExtraGrid);

		if (!user.get_status() || !extra.get_status()) return;

		ResultGrid->RowCount = r;
		ResultGrid->ColumnCount = c;

		Matr res = user.add_matr(extra);

		for (int i = 0; i < res.get_rows_count(); i++) {
			for (int j = 0; j < res.get_columns_count(); j++) {
				ResultGrid->Rows[i]->Cells[j]->Value = Convert::ToString(res.get_row(i)[j]);
			}
		}
	}
	private: System::Void accept_button_subtract() {
		int r = SourceGrid->RowCount;
		int c = SourceGrid->ColumnCount;
		Matr user = read_from_grid(SourceGrid);
		Matr extra = read_from_grid(ExtraGrid);

		if (!user.get_status() || !extra.get_status()) return;

		ResultGrid->RowCount = r;
		ResultGrid->ColumnCount = c;

		Matr res = user.sub_matr(extra);

		for (int i = 0; i < res.get_rows_count(); i++) {
			for (int j = 0; j < res.get_columns_count(); j++) {
				ResultGrid->Rows[i]->Cells[j]->Value = Convert::ToString((res.get_row(i))[j]);
			}
		}
	}
	private: System::Void accept_button_transpose() {
		int r = SourceGrid->RowCount;
		int c = SourceGrid->ColumnCount;
		Matr user = read_from_grid(SourceGrid);

		if (!user.get_status()) return;

		ResultGrid->RowCount = c;
		ResultGrid->ColumnCount = r;

		Matr res = user.transpose();

		for (int i = 0; i < res.get_rows_count(); i++) {
			for (int j = 0; j < res.get_columns_count(); j++) {
				ResultGrid->Rows[i]->Cells[j]->Value = Convert::ToString((res.get_row(i))[j]);
			}
		}
	}
	private: System::Void accept_button_multMatr() {
		int r = SourceGrid->RowCount;
		int c = SourceGrid->ColumnCount;
		int q = ExtraGrid->ColumnCount;
		Matr user = read_from_grid(SourceGrid);
		Matr extra = read_from_grid(ExtraGrid);

		if (!user.get_status() || !extra.get_status()) return;

		ResultGrid->RowCount = r;
		ResultGrid->ColumnCount = q;

		Matr res = user.mult_matr(extra);

		for (int i = 0; i < res.get_rows_count(); i++) {
			for (int j = 0; j < res.get_columns_count(); j++) {
				ResultGrid->Rows[i]->Cells[j]->Value = Convert::ToString((res.get_row(i))[j]);
			}
		}
	}
	private: System::Void accept_button_pow() {
		int r = SourceGrid->RowCount;
		Matr user = read_from_grid(SourceGrid);

		if (user.get_status() && isValidNum(user_num->Text)) {
			if (Convert::ToDouble(user_num->Text) < 0) {
				WrongValuesForm^ warning = gcnew WrongValuesForm();
				warning->Show();
				return;
			}
		}
		else return;

		ResultGrid->RowCount = r;
		ResultGrid->ColumnCount = r;

		Matr res = user.pow(Convert::ToDouble(user_num->Text));

		for (int i = 0; i < res.get_rows_count(); i++) {
			for (int j = 0; j < res.get_columns_count(); j++) {
				ResultGrid->Rows[i]->Cells[j]->Value = Convert::ToString((res.get_row(i))[j]);
			}
		}
	}
	private: System::Void accept_button_rank() {
		int r = SourceGrid->RowCount;
		int c = SourceGrid->ColumnCount;
		Matr user = read_from_grid(SourceGrid);

		if (!user.get_status()) return;

		int res = user.rank();

		result_label->Text = Convert::ToString(res);
		result_label->Visible = true;
	}
	private: System::Void accept_button_reverse() {
		int r = SourceGrid->RowCount;
		Matr user = read_from_grid(SourceGrid);

		if (!user.get_status()) return;

		if (user.determinant() == 0) {
			WrongValuesForm^ warning = gcnew WrongValuesForm();
			warning->Show();
			return;
		}
		Matr res = user.reversed_matr();
		
		ResultGrid->RowCount = r;
		ResultGrid->ColumnCount = r;
		for (int i = 0; i < res.get_rows_count(); i++) {
			for (int j = 0; j < res.get_columns_count(); j++) {
				ResultGrid->Rows[i]->Cells[j]->Value = Convert::ToString((res.get_row(i))[j]);
			}
		}
	}
	//create_button_funcs
	private: System::Void create_button_determinant(){
		if (isValidNum(user_rows->Text)) { 
			if (Convert::ToDouble(user_rows->Text) <= 0) { 
				WrongValuesForm^ warning = gcnew WrongValuesForm(); 
				warning->Show();									
				return;												
			}
		}
		else return;						

		SourceGrid->RowCount = Convert::ToDouble(user_rows->Text);	 
		SourceGrid->ColumnCount = Convert::ToDouble(user_rows->Text);

		user_rows->Text = "";		
	}
	
	private: System::Void create_button_multNum() {
		if (isValidNum(user_rows->Text) && isValidNum(user_columns->Text)) {
			if (Convert::ToDouble(user_rows->Text) <= 0 || Convert::ToDouble(user_columns->Text) <= 0) {
				WrongValuesForm^ warning = gcnew WrongValuesForm();
				warning->Show();
				return;
			}
		}
		else return;

		SourceGrid->RowCount = Convert::ToDouble(user_rows->Text);
		SourceGrid->ColumnCount = Convert::ToDouble(user_columns->Text);

		user_rows->Text = "";
		user_columns->Text = "";
	}
	private: System::Void create_button_adding(){
		if (isValidNum(user_rows->Text) && isValidNum(user_columns->Text)) {
			if (Convert::ToDouble(user_rows->Text) <= 0 || Convert::ToDouble(user_columns->Text) <= 0) {
				WrongValuesForm^ warning = gcnew WrongValuesForm();
				warning->Show();
				return;
			}
		}
		else return;

		SourceGrid->RowCount = Convert::ToDouble(user_rows->Text);
		SourceGrid->ColumnCount = Convert::ToDouble(user_columns->Text);

		ExtraGrid->RowCount = Convert::ToDouble(user_rows->Text);
		ExtraGrid->ColumnCount = Convert::ToDouble(user_columns->Text);

		user_rows->Text = "";
		user_columns->Text = "";
	}
	private: System::Void create_button_subtract() {
		if (isValidNum(user_rows->Text) && isValidNum(user_columns->Text)) {
			if (Convert::ToDouble(user_rows->Text) <= 0 || Convert::ToDouble(user_columns->Text) <= 0) {
				WrongValuesForm^ warning = gcnew WrongValuesForm();
				warning->Show();
				return;
			}
		}
		else return;

		SourceGrid->RowCount = Convert::ToDouble(user_rows->Text);
		SourceGrid->ColumnCount = Convert::ToDouble(user_columns->Text);

		ExtraGrid->RowCount = Convert::ToDouble(user_rows->Text);
		ExtraGrid->ColumnCount = Convert::ToDouble(user_columns->Text);

		user_rows->Text = "";
		user_columns->Text = "";
	}
	private: System::Void create_button_transpose() {
		if (isValidNum(user_rows->Text) && isValidNum(user_columns->Text)){
			if (Convert::ToDouble(user_rows->Text) <= 0 || Convert::ToDouble(user_columns->Text) <= 0) {
				WrongValuesForm^ warning = gcnew WrongValuesForm();
				warning->Show();
				return;
			}
		}
		else return;

		SourceGrid->RowCount = Convert::ToDouble(user_rows->Text);
		SourceGrid->ColumnCount = Convert::ToDouble(user_columns->Text);

		user_rows->Text = "";
		user_columns->Text = "";
	}
	private: System::Void create_button_multMatr() {
		if (isValidNum(user_rows->Text) && isValidNum(user_columns->Text) && isValidNum(extra_columns->Text)) {
			if (Convert::ToDouble(user_rows->Text) <= 0 || Convert::ToDouble(user_columns->Text) <= 0 || Convert::ToDouble(extra_columns->Text) <= 0) {
				WrongValuesForm^ warning = gcnew WrongValuesForm();
				warning->Show();
				return;
			}
		}
		else return;

		SourceGrid->RowCount = Convert::ToDouble(user_rows->Text);
		SourceGrid->ColumnCount = Convert::ToDouble(user_columns->Text);

		ExtraGrid->RowCount = Convert::ToDouble(user_columns->Text);
		ExtraGrid->ColumnCount = Convert::ToDouble(extra_columns->Text);

		user_rows->Text = "";
		user_columns->Text = "";
		extra_columns->Text = "";
	}
	private: System::Void create_button_pow() {
		if (isValidNum(user_rows->Text)) {
			if (Convert::ToDouble(user_rows->Text) <= 0) {
				WrongValuesForm^ warning = gcnew WrongValuesForm();
				warning->Show();
				return;
			}
		}
		else return;

		SourceGrid->RowCount = Convert::ToDouble(user_rows->Text);
		SourceGrid->ColumnCount = Convert::ToDouble(user_rows->Text);

		user_rows->Text = "";
	}
	private: System::Void create_button_rank() {
		if (isValidNum(user_rows->Text) && isValidNum(user_columns->Text)) {
			if (Convert::ToDouble(user_rows->Text) <= 0 || Convert::ToDouble(user_columns->Text) <= 0) {
				WrongValuesForm^ warning = gcnew WrongValuesForm();
				warning->Show();
				return;
			}
		}
		else return;

		SourceGrid->RowCount = Convert::ToDouble(user_rows->Text);
		SourceGrid->ColumnCount = Convert::ToDouble(user_columns->Text);

		user_rows->Text = "";
		user_columns->Text = "";
	}
	private: System::Void create_button_reverse() {
		if (isValidNum(user_rows->Text)) {
			if (Convert::ToDouble(user_rows->Text) <= 0) {
				WrongValuesForm^ warning = gcnew WrongValuesForm();
				warning->Show();
				return;
			}
		}
		else return;

		SourceGrid->RowCount = Convert::ToDouble(user_rows->Text);
		SourceGrid->ColumnCount = Convert::ToDouble(user_rows->Text);

		user_rows->Text = "";
	}

	private: Matr read_from_grid(DataGridView^ grid) { 
		int r = Convert::ToDouble(grid->RowCount);
		int c = Convert::ToDouble(grid->ColumnCount);

		Matr user{ r, c }; 
		for (int i = 0; i < r; i++) {
			double* row = new double[c]; 
			for (int j = 0; j < c; j++) { 
				if (!isValidNum(Convert::ToString(grid->Rows[i]->Cells[j]->Value))) { 
					user.set_status(false); 
					return user; 
				}
				row[j] = Convert::ToDouble(grid->Rows[i]->Cells[j]->Value); 
			}
			user.set_row(i, row); 
		}
		return user; 
	}

	private: bool isValidNum(String^ str) {  
		WrongValuesForm^ warning = gcnew WrongValuesForm(); 
		if (str->Length == 0) {  
			warning->Show();
			return false;
		}
		int i; 
		if (str[0] == '-' && str->Length > 1) i = 1; 
		else i = 0;									
		for (i; i < str->Length; i++) {
			if (!(str[i] <= 57 && str[i] >= 48)) {		
				warning->Show();		
				return false;
			}
		}
		return true; 
	}
private: System::Void button_random_Click(System::Object^ sender, System::EventArgs^ e) {
	srand(time(NULL)); 
	int low = 0; 
	int high = 100; 
	if (textBox_low_rand->Text->Length > 0 ) { 
		if (!isValidNum(textBox_low_rand->Text)) return; 
		else low = Convert::ToInt32(textBox_low_rand->Text);  
	}
	if (textBox_high_rand->Text->Length > 0) { 
		if (!isValidNum(textBox_high_rand->Text)) return; 
		else high = Convert::ToInt32(textBox_high_rand->Text);
	}
	if (low > high) { 
		WrongValuesForm^ warning = gcnew WrongValuesForm();
		warning->Show();
		return;
	}

	for (int i = 0; i < SourceGrid->RowCount; i++) { 
		for (int j = 0; j < SourceGrid->ColumnCount; j++) {
			SourceGrid->Rows[i]->Cells[j]->Value = Convert::ToString(low + (rand() % (high - low + 1))); 
		}
	}
	for (int i = 0; i < ExtraGrid->RowCount; i++) { 
		for (int j = 0; j < ExtraGrid->ColumnCount; j++) {
			ExtraGrid->Rows[i]->Cells[j]->Value = Convert::ToString(low + (rand() % (high - low + 1)));
		}
	}
}
};
}