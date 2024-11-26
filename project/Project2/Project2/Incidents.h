#pragma once
#include "Functions.h"
#include "showAvarii.h"
#include "ClientItem.h"
namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Incidents
	/// </summary>
	public ref class Incidents : public System::Windows::Forms::Form
	{
	public:
		Incidents(void)
		{
			InitializeComponent();
			dbFunctions = gcnew Functions();
			dbFunctions->ConnectToDB();
			LoadClients();

		}
		// Глобальные переменные для хранения выбранных данных
		int selectedIncidentID = -1; // ID выбранной заявки (может быть нужно для обновления данных)
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label5;
	public:
		int selectedClientID = -1; // ID клиента выбранной заявки

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Incidents()
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
	private: System::Windows::Forms::ToolStripMenuItem^ змінитиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ приховатиToolStripMenuItem;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private:
		/// <summary>
			/// <summary>
		Functions^ dbFunctions;
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
			this->змінитиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->приховатиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->додатиToolStripMenuItem,
					this->редагуватиToolStripMenuItem, this->змінитиToolStripMenuItem, this->приховатиToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1129, 28);
			this->menuStrip1->TabIndex = 12;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// додатиToolStripMenuItem
			// 
			this->додатиToolStripMenuItem->Name = L"додатиToolStripMenuItem";
			this->додатиToolStripMenuItem->Size = System::Drawing::Size(73, 24);
			this->додатиToolStripMenuItem->Text = L"Додати";
			this->додатиToolStripMenuItem->Click += gcnew System::EventHandler(this, &Incidents::додатиToolStripMenuItem_Click);
			// 
			// редагуватиToolStripMenuItem
			// 
			this->редагуватиToolStripMenuItem->Name = L"редагуватиToolStripMenuItem";
			this->редагуватиToolStripMenuItem->Size = System::Drawing::Size(89, 24);
			this->редагуватиToolStripMenuItem->Text = L"Видалити";
			this->редагуватиToolStripMenuItem->Click += gcnew System::EventHandler(this, &Incidents::редагуватиToolStripMenuItem_Click);
			// 
			// змінитиToolStripMenuItem
			// 
			this->змінитиToolStripMenuItem->Name = L"змінитиToolStripMenuItem";
			this->змінитиToolStripMenuItem->Size = System::Drawing::Size(79, 24);
			this->змінитиToolStripMenuItem->Text = L"Змінити";
			this->змінитиToolStripMenuItem->Click += gcnew System::EventHandler(this, &Incidents::змінитиToolStripMenuItem_Click);
			// 
			// приховатиToolStripMenuItem
			// 
			this->приховатиToolStripMenuItem->Name = L"приховатиToolStripMenuItem";
			this->приховатиToolStripMenuItem->Size = System::Drawing::Size(99, 24);
			this->приховатиToolStripMenuItem->Text = L"Приховати";
			this->приховатиToolStripMenuItem->Click += gcnew System::EventHandler(this, &Incidents::приховатиToolStripMenuItem_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(49, 256);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(183, 20);
			this->checkBox1->TabIndex = 21;
			this->checkBox1->Text = L"Чи доступні матеріали\?";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(28, 236);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 16);
			this->label4->TabIndex = 20;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(66, 190);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 16);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Статус";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(66, 139);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 16);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Дата аварії";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(88, 85);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 16);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Клієнт";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Pending", L"Resolved" });
			this->comboBox2->Location = System::Drawing::Point(49, 209);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 24);
			this->comboBox2->TabIndex = 16;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(49, 158);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(121, 22);
			this->dateTimePicker1->TabIndex = 15;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(49, 107);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 14;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Incidents::comboBox1_SelectedIndexChanged);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(399, 57);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(607, 351);
			this->dataGridView1->TabIndex = 13;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Incidents::dataGridView1_CellClick);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(211, 107);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(168, 99);
			this->richTextBox1->TabIndex = 22;
			this->richTextBox1->Text = L"";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(224, 85);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(127, 16);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Опишіть проблему";
			// 
			// Incidents
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1129, 476);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"Incidents";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Аварії";
			this->Load += gcnew System::EventHandler(this, &Incidents::Incidents_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void додатиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox1->SelectedIndex == -1)
		{
			MessageBox::Show("Будь ласка, оберіть клієнта.");
			return;
		}

		ClientItem^ selectedClient = (ClientItem^)comboBox1->SelectedItem;
		int clientID = selectedClient->ClientID;
		DateTime requestDate = dateTimePicker1->Value;
		String^ description = richTextBox1->Text;

		String^ status = comboBox2->SelectedItem->ToString();
		bool materialsAvailable = checkBox1->Checked;

		String^ query = "INSERT INTO Incidents (ClientID, IncidentDate, Description, Status, MaterialsAvailable) VALUES (@clientID, @incidentDate,  @description, @status, @materialsAvailable)";
		SqlCommand^ cmd = gcnew SqlCommand(query, dbFunctions->conn);
		cmd->Parameters->AddWithValue("@clientID", clientID);
		cmd->Parameters->AddWithValue("@incidentDate", requestDate);
		cmd->Parameters->AddWithValue("@description", description);
		cmd->Parameters->AddWithValue("@status", status);
		cmd->Parameters->AddWithValue("@materialsAvailable", materialsAvailable);

		try
		{
			dbFunctions->OpenConnection();
			cmd->ExecuteNonQuery();
			MessageBox::Show("Успішно додано");
			LoadData(); // Assuming you have a LoadData method to refresh data
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error: " + ex->Message);
		}
		finally
		{
			dbFunctions->CloseConnection();
		}
	}
private: System::Void Incidents_Load(System::Object^ sender, System::EventArgs^ e) {
	LoadData();
}
	   void LoadData()
	   {
		   showAvarii^ dataHandler = gcnew showAvarii();
		   DataTable^ table = dataHandler->AvariiTable();

		   dataGridView1->AutoGenerateColumns = true;
		   dataGridView1->DataSource = table;
	   }

	   void LoadClients()
	   {
		   String^ query = "SELECT ClientID, FirstName + ' ' + LastName AS FullName FROM Clients";

		   SqlCommand^ command = gcnew SqlCommand(query, dbFunctions->conn);
		   SqlDataReader^ reader;

		   try
		   {
			   dbFunctions->OpenConnection();
			   reader = command->ExecuteReader();

			   while (reader->Read())
			   {
				   int clientID = Convert::ToInt32(reader["ClientID"]);
				   String^ fullName = reader["FullName"]->ToString();
				   comboBox1->Items->Add(gcnew ClientItem(clientID, fullName));
			   }

			   reader->Close();
		   }
		   catch (Exception^ ex)
		   {
			   MessageBox::Show("Error: " + ex->Message);
		   }
		   finally
		   {
			   dbFunctions->CloseConnection();
		   }
	   }
private: System::Void змінитиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	if (dataGridView1->SelectedRows->Count == 0)
	{
		MessageBox::Show("Будь ласка, оберіть запис для редагування.");
		return;
	}

	// Получаем выбранный клиент из ComboBox
	if (comboBox1->SelectedIndex == -1)
	{
		MessageBox::Show("Будь ласка, оберіть клієнта.");
		return;
	}

	ClientItem^ selectedClient = (ClientItem^)comboBox1->SelectedItem;
	int clientID = selectedClient->ClientID;
	DateTime incidentDate = dateTimePicker1->Value;
	String^ description = richTextBox1->Text;
	String^ status = comboBox2->SelectedItem->ToString();
	bool materialsAvailable = checkBox1->Checked;

	// SQL-запрос для обновления данных инцидента
	String^ query = "UPDATE Incidents SET ClientID = @clientID, IncidentDate = @incidentDate, Description = @description, Status = @status, MaterialsAvailable = @materialsAvailable "
		"WHERE IncidentID = @incidentID";
	SqlCommand^ cmd = gcnew SqlCommand(query, dbFunctions->conn);
	cmd->Parameters->AddWithValue("@clientID", clientID);
	cmd->Parameters->AddWithValue("@incidentDate", incidentDate);
	cmd->Parameters->AddWithValue("@description", description);
	cmd->Parameters->AddWithValue("@status", status);
	cmd->Parameters->AddWithValue("@materialsAvailable", materialsAvailable);
	cmd->Parameters->AddWithValue("@incidentID", selectedIncidentID); // Используем selectedIncidentID для идентификации инцидента

	try
	{
		dbFunctions->OpenConnection();
		cmd->ExecuteNonQuery();
		MessageBox::Show("Інцидент успішно змінено");
		LoadData(); // Предполагается, что у вас есть метод LoadData для обновления данных
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
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	// Проверяем, что кликнули по строке, а не по заголовку столбца или пустой области
	if (e->RowIndex >= 0)
	{
		// Получаем выделенную строку
		DataGridViewRow^ selectedRow = dataGridView1->Rows[e->RowIndex];

		// Получаем IncidentID выбранной строки
		selectedIncidentID = Convert::ToInt32(selectedRow->Cells["IncidentID"]->Value);

		// Получаем значения из выбранной строки
		int clientID = Convert::ToInt32(selectedRow->Cells["ClientID"]->Value);
		DateTime incidentDate = Convert::ToDateTime(selectedRow->Cells["IncidentDate"]->Value);
		String^ description = Convert::ToString(selectedRow->Cells["Description"]->Value);
		String^ status = Convert::ToString(selectedRow->Cells["Status"]->Value);
		bool materialsAvailable = Convert::ToBoolean(selectedRow->Cells["MaterialsAvailable"]->Value);

		// Наполняем элементы управления данными из выбранной строки
		for each (ClientItem ^ item in comboBox1->Items)
		{
			if (item->ClientID == clientID)
			{
				comboBox1->SelectedItem = item;
				break;
			}
		}
		dateTimePicker1->Value = incidentDate;
		richTextBox1->Text = description;
		comboBox2->SelectedItem = status;
		checkBox1->Checked = materialsAvailable;
	}
}

private: System::Void редагуватиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridView1->SelectedRows->Count == 0)
	{
		MessageBox::Show("Будь ласка, оберіть запис для видалення.");
		return;
	}

	// Получаем выбранный инцидент для удаления
	DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];
	int incidentID = Convert::ToInt32(selectedRow->Cells["IncidentID"]->Value);

	// SQL-запрос для удаления инцидента
	String^ query = "DELETE FROM Incidents WHERE IncidentID = @incidentID";
	SqlCommand^ cmd = gcnew SqlCommand(query, dbFunctions->conn);
	cmd->Parameters->AddWithValue("@incidentID", incidentID);

	try
	{
		dbFunctions->OpenConnection();
		cmd->ExecuteNonQuery();
		MessageBox::Show("Інцидент успішно видалено");
		LoadData(); // Предполагается, что у вас есть метод LoadData для обновления данных
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
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void приховатиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
};
}
