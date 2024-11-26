#pragma once
#include "MyForm.h"
#include "Functions.h"
#include "connectionRequest.h"
#include "Incidents.h"
#include "lastPayment.h"
namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� mainForm
	/// </summary>
	public ref class mainForm : public System::Windows::Forms::Form
	{
	public:
		mainForm(void)
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
		~mainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ �볺���ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ϳ���������ToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->�볺���ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ϳ���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->�볺���ToolStripMenuItem,
					this->��������ϳ���������ToolStripMenuItem, this->�������ToolStripMenuItem, this->������ToolStripMenuItem, this->�����ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1124, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// �볺���ToolStripMenuItem
			// 
			this->�볺���ToolStripMenuItem->Name = L"�볺���ToolStripMenuItem";
			this->�볺���ToolStripMenuItem->Size = System::Drawing::Size(75, 24);
			this->�볺���ToolStripMenuItem->Text = L"�볺���";
			this->�볺���ToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::�볺���ToolStripMenuItem_Click);
			// 
			// ��������ϳ���������ToolStripMenuItem
			// 
			this->��������ϳ���������ToolStripMenuItem->Name = L"��������ϳ���������ToolStripMenuItem";
			this->��������ϳ���������ToolStripMenuItem->Size = System::Drawing::Size(148, 24);
			this->��������ϳ���������ToolStripMenuItem->Text = L"������ �� ������";
			this->��������ϳ���������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::��������ϳ���������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(87, 24);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::�������ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(130, 24);
			this->������ToolStripMenuItem->Text = L"������ ������";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(60, 24);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::�����ToolStripMenuItem_Click);
			// 
			// mainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1124, 530);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"mainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"������� ���� ��������";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void �볺���ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm^ client = gcnew MyForm();
	
		client->Show(); 
	}
private: System::Void ��������ϳ���������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	connectionRequest^ ConnectionRequest = gcnew connectionRequest();

	ConnectionRequest->Show(); 
}
private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Incidents^ IncidentsForm = gcnew Incidents();

	IncidentsForm->Show();
}
private: System::Void ������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	lastPayment^ lP = gcnew lastPayment();
	lP->Show();
}
};
}
