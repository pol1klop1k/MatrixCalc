#pragma once

namespace Calc {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� WrongValuesForm
	/// </summary>
	public ref class WrongValuesForm : public System::Windows::Forms::Form
	{
	public:
		WrongValuesForm(void)
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
		~WrongValuesForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(23, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(301, 60);
			this->label1->TabIndex = 0;
			this->label1->Text = L"�����-�� �� �������� �������� ����� �������� ������";
			// 
			// WrongValuesForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(350, 141);
			this->Controls->Add(this->label1);
			this->Name = L"WrongValuesForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"WrongValuesForm";
			this->Load += gcnew System::EventHandler(this, &WrongValuesForm::WrongValuesForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void WrongValuesForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
