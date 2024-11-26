#pragma once
#include "Functions.h"
#include "showClients.h"
#include "PaymentForm.h"
namespace Project2 {

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
			dbFunctions = gcnew Functions();
			dbFunctions->ConnectToDB();
		}
	private: System::Windows::Forms::ToolStripMenuItem^ приховатиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ проплатитиІнтернетToolStripMenuItem;
	public:


	protected:
	private:
		Functions^ dbFunctions;
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ додатиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ редагуватиToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::TextBox^ emailTextBox;

	private: System::Windows::Forms::TextBox^ phoneTextBox;

	private: System::Windows::Forms::TextBox^ addressTextBox;

	private: System::Windows::Forms::TextBox^ lastNameTextBox;

	private: System::Windows::Forms::TextBox^ textBox5;

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
			this->додатиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->редагуватиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->приховатиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->проплатитиІнтернетToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->emailTextBox = (gcnew System::Windows::Forms::TextBox());
			this->phoneTextBox = (gcnew System::Windows::Forms::TextBox());
			this->addressTextBox = (gcnew System::Windows::Forms::TextBox());
			this->lastNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->додатиToolStripMenuItem,
					this->редагуватиToolStripMenuItem, this->приховатиToolStripMenuItem, this->проплатитиІнтернетToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1064, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// додатиToolStripMenuItem
			// 
			this->додатиToolStripMenuItem->Name = L"додатиToolStripMenuItem";
			this->додатиToolStripMenuItem->Size = System::Drawing::Size(73, 24);
			this->додатиToolStripMenuItem->Text = L"Додати";
			this->додатиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::додатиToolStripMenuItem_Click);
			// 
			// редагуватиToolStripMenuItem
			// 
			this->редагуватиToolStripMenuItem->Name = L"редагуватиToolStripMenuItem";
			this->редагуватиToolStripMenuItem->Size = System::Drawing::Size(89, 24);
			this->редагуватиToolStripMenuItem->Text = L"Видалити";
			this->редагуватиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::редагуватиToolStripMenuItem_Click);
			// 
			// приховатиToolStripMenuItem
			// 
			this->приховатиToolStripMenuItem->Name = L"приховатиToolStripMenuItem";
			this->приховатиToolStripMenuItem->Size = System::Drawing::Size(99, 24);
			this->приховатиToolStripMenuItem->Text = L"Приховати";
			this->приховатиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::приховатиToolStripMenuItem_Click);
			// 
			// проплатитиІнтернетToolStripMenuItem
			// 
			this->проплатитиІнтернетToolStripMenuItem->Name = L"проплатитиІнтернетToolStripMenuItem";
			this->проплатитиІнтернетToolStripMenuItem->Size = System::Drawing::Size(170, 24);
			this->проплатитиІнтернетToolStripMenuItem->Text = L"Проплатити інтернет";
			this->проплатитиІнтернетToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::проплатитиІнтернетToolStripMenuItem_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(404, 57);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(581, 385);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->SelectionChanged += gcnew System::EventHandler(this, &MyForm::dataGridView1_SelectionChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(45, 75);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Ім\'я";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(45, 109);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Прізвище";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(45, 137);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Адреса";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(48, 167);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(67, 16);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Телефон";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(48, 194);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(69, 16);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Ел.пошта";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(45, 224);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(182, 16);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Дата складання контракту";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(48, 243);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(116, 22);
			this->dateTimePicker1->TabIndex = 8;
			// 
			// emailTextBox
			// 
			this->emailTextBox->Location = System::Drawing::Point(124, 194);
			this->emailTextBox->Name = L"emailTextBox";
			this->emailTextBox->Size = System::Drawing::Size(100, 22);
			this->emailTextBox->TabIndex = 9;
			// 
			// phoneTextBox
			// 
			this->phoneTextBox->Location = System::Drawing::Point(127, 167);
			this->phoneTextBox->Name = L"phoneTextBox";
			this->phoneTextBox->Size = System::Drawing::Size(100, 22);
			this->phoneTextBox->TabIndex = 10;
			// 
			// addressTextBox
			// 
			this->addressTextBox->Location = System::Drawing::Point(106, 134);
			this->addressTextBox->Name = L"addressTextBox";
			this->addressTextBox->Size = System::Drawing::Size(100, 22);
			this->addressTextBox->TabIndex = 11;
			// 
			// lastNameTextBox
			// 
			this->lastNameTextBox->Location = System::Drawing::Point(127, 103);
			this->lastNameTextBox->Name = L"lastNameTextBox";
			this->lastNameTextBox->Size = System::Drawing::Size(100, 22);
			this->lastNameTextBox->TabIndex = 12;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(106, 75);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 13;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1064, 528);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->lastNameTextBox);
			this->Controls->Add(this->addressTextBox);
			this->Controls->Add(this->phoneTextBox);
			this->Controls->Add(this->emailTextBox);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Клієнти";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		LoadData();
	}
		   void LoadData()
		   {
			   showClients^ dataHandler = gcnew showClients();
			   DataTable^ table = dataHandler->ClientsTable();

			   dataGridView1->AutoGenerateColumns = true;
			   dataGridView1->DataSource = table;
		   }
private: System::Void додатиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ firstName = textBox5->Text;
	String^ lastName = lastNameTextBox->Text;
	String^ address = addressTextBox->Text;
	DateTime dateofcontract = dateTimePicker1->Value;
	String^ email = emailTextBox->Text;
	String^ phone = phoneTextBox->Text;

	String^ query = "INSERT INTO Clients (FirstName, LastName, Address, Phone, Email, ContractDate) VALUES (@firstName, @lastName, @address, @Phone, @Email, @contractDate)";
	SqlCommand^ cmd = gcnew SqlCommand(query, dbFunctions->conn);
	cmd->Parameters->AddWithValue("@firstName", firstName);
	cmd->Parameters->AddWithValue("@lastName", lastName);
	cmd->Parameters->AddWithValue("@address", address);
	cmd->Parameters->AddWithValue("@Phone", phone);
	cmd->Parameters->AddWithValue("@Email", email);

	cmd->Parameters->AddWithValue("@contractDate", dateofcontract);


	try
	{
		dbFunctions->OpenConnection();
		cmd->ExecuteNonQuery();
		MessageBox::Show("Клієнт доданий успішно");
		LoadData();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Помилка: " + ex->Message);
	}
	finally
	{
		dbFunctions->CloseConnection();
	}
}
private: System::Void редагуватиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	// Перевірка, чи вибрано одну ячейку
	if (dataGridView1->SelectedCells->Count == 1)
	{
		// Отримання індексу вибраного рядка
		int rowIndex = dataGridView1->SelectedCells[0]->RowIndex;

		// Отримання значення ClientID з вибраного рядка
		int clientId = Convert::ToInt32(dataGridView1->Rows[rowIndex]->Cells["ClientID"]->Value);

		// Підтвердження видалення
		if (MessageBox::Show("Ви впевнені, що хочете видалити цього клієнта?", "Підтвердження видалення", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{
			// Створення запиту на видалення
			String^ query = "DELETE FROM Clients WHERE ClientID = @clientId";
			SqlCommand^ cmd = gcnew SqlCommand(query, dbFunctions->conn);
			cmd->Parameters->AddWithValue("@clientId", clientId);

			try
			{
				// Відкриття з'єднання і виконання команди
				dbFunctions->OpenConnection();
				cmd->ExecuteNonQuery();
				MessageBox::Show("Клієнт видалений успішно");
				LoadData();
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Помилка: " + ex->Message);
			}
			finally
			{
				dbFunctions->CloseConnection();
			}
		}
	}
	else
	{
		MessageBox::Show("Виберіть одну клітинку, щоб видалити клієнта.");
	}
}
private: System::Void приховатиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
private: System::Void dataGridView1_SelectionChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void проплатитиІнтернетToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	PaymentForm^ paymentForm = gcnew PaymentForm(); // Создаем экземпляр формы PaymentForm
	paymentForm->ShowDialog(); // Показываем форму как диалоговое окно
}
};
}
