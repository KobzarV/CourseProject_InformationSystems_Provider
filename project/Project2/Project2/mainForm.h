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
	/// Сводка для mainForm
	/// </summary>
	public ref class mainForm : public System::Windows::Forms::Form
	{
	public:
		mainForm(void)
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
		~mainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ клієнтиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ заявкиНаПідключенняToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ поломкиToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ оплатиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ вихідToolStripMenuItem;
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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->клієнтиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->заявкиНаПідключенняToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->поломкиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оплатиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вихідToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->клієнтиToolStripMenuItem,
					this->заявкиНаПідключенняToolStripMenuItem, this->поломкиToolStripMenuItem, this->оплатиToolStripMenuItem, this->вихідToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1124, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// клієнтиToolStripMenuItem
			// 
			this->клієнтиToolStripMenuItem->Name = L"клієнтиToolStripMenuItem";
			this->клієнтиToolStripMenuItem->Size = System::Drawing::Size(75, 24);
			this->клієнтиToolStripMenuItem->Text = L"Клієнти";
			this->клієнтиToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::клієнтиToolStripMenuItem_Click);
			// 
			// заявкиНаПідключенняToolStripMenuItem
			// 
			this->заявкиНаПідключенняToolStripMenuItem->Name = L"заявкиНаПідключенняToolStripMenuItem";
			this->заявкиНаПідключенняToolStripMenuItem->Size = System::Drawing::Size(148, 24);
			this->заявкиНаПідключенняToolStripMenuItem->Text = L"Заявки на ремонт";
			this->заявкиНаПідключенняToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::заявкиНаПідключенняToolStripMenuItem_Click);
			// 
			// поломкиToolStripMenuItem
			// 
			this->поломкиToolStripMenuItem->Name = L"поломкиToolStripMenuItem";
			this->поломкиToolStripMenuItem->Size = System::Drawing::Size(87, 24);
			this->поломкиToolStripMenuItem->Text = L"Поломки";
			this->поломкиToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::поломкиToolStripMenuItem_Click);
			// 
			// оплатиToolStripMenuItem
			// 
			this->оплатиToolStripMenuItem->Name = L"оплатиToolStripMenuItem";
			this->оплатиToolStripMenuItem->Size = System::Drawing::Size(130, 24);
			this->оплатиToolStripMenuItem->Text = L"Останні оплати";
			this->оплатиToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::оплатиToolStripMenuItem_Click);
			// 
			// вихідToolStripMenuItem
			// 
			this->вихідToolStripMenuItem->Name = L"вихідToolStripMenuItem";
			this->вихідToolStripMenuItem->Size = System::Drawing::Size(60, 24);
			this->вихідToolStripMenuItem->Text = L"Вихід";
			this->вихідToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::вихідToolStripMenuItem_Click);
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
			this->Text = L"Головне вікно програми";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void клієнтиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm^ client = gcnew MyForm();
	
		client->Show(); 
	}
private: System::Void заявкиНаПідключенняToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	connectionRequest^ ConnectionRequest = gcnew connectionRequest();

	ConnectionRequest->Show(); 
}
private: System::Void вихідToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void поломкиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Incidents^ IncidentsForm = gcnew Incidents();

	IncidentsForm->Show();
}
private: System::Void оплатиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	lastPayment^ lP = gcnew lastPayment();
	lP->Show();
}
};
}
