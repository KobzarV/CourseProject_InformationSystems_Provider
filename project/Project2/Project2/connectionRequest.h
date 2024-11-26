#pragma once
#include "Functions.h"
#include "ClientItem.h"
#include "showReq.h"
namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� connectionRequest
	/// </summary>
	public ref class connectionRequest : public System::Windows::Forms::Form
	{
	public:
		connectionRequest(void)
		{
			InitializeComponent();
			dbFunctions = gcnew Functions();
			dbFunctions->ConnectToDB();
			LoadClients();
		}
		// ���������� ���������� ��� �������� ��������� ������
		int selectedRequestID = -1; // ID ��������� ������ (����� ���� ����� ��� ���������� ������)
		int selectedClientID = -1; // ID ������� ��������� ������
	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~connectionRequest()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������ToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::ComboBox^ comboBox2;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::CheckBox^ checkBox1;

	private:
		/// <summary>
		Functions^ dbFunctions;
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
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->������ToolStripMenuItem,
					this->����������ToolStripMenuItem, this->������ToolStripMenuItem, this->���������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1013, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(73, 24);
			this->������ToolStripMenuItem->Text = L"������";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &connectionRequest::������ToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(89, 24);
			this->����������ToolStripMenuItem->Text = L"��������";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &connectionRequest::����������ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(79, 24);
			this->������ToolStripMenuItem->Text = L"������";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &connectionRequest::������ToolStripMenuItem_Click);
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(99, 24);
			this->���������ToolStripMenuItem->Text = L"���������";
			this->���������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &connectionRequest::���������ToolStripMenuItem_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(302, 88);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(607, 351);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &connectionRequest::dataGridView1_CellClick);
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &connectionRequest::dataGridView1_CellContentClick);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(66, 88);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 3;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(66, 139);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(121, 22);
			this->dateTimePicker1->TabIndex = 4;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Pending", L"Approved", L"Rejected" });
			this->comboBox2->Location = System::Drawing::Point(66, 190);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 24);
			this->comboBox2->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(105, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 16);
			this->label1->TabIndex = 7;
			this->label1->Text = L"�볺��";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(83, 120);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 16);
			this->label2->TabIndex = 8;
			this->label2->Text = L"���� ������";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(83, 171);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 16);
			this->label3->TabIndex = 9;
			this->label3->Text = L"������";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(45, 217);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 16);
			this->label4->TabIndex = 10;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(66, 237);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(183, 20);
			this->checkBox1->TabIndex = 11;
			this->checkBox1->Text = L"�� ������� ��������\?";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// connectionRequest
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1013, 527);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"connectionRequest";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"������ �� ������";
			this->Load += gcnew System::EventHandler(this, &connectionRequest::connectionRequest_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void connectionRequest_Load(System::Object^ sender, System::EventArgs^ e) {
		LoadData();
	}
		   void LoadData()
		   {
			   showReq^ dataHandler = gcnew showReq();
			   DataTable^ table = dataHandler->ReqTable();

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

private: System::Void ������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	if (comboBox1->SelectedIndex == -1)
	{
		MessageBox::Show("���� �����, ������ �볺���.");
		return;
	}

	ClientItem^ selectedClient = (ClientItem^)comboBox1->SelectedItem;
	int clientID = selectedClient->ClientID;
	DateTime requestDate = dateTimePicker1->Value;
	String^ status = comboBox2->SelectedItem->ToString();
	bool materialsAvailable = checkBox1->Checked;

	String^ query = "INSERT INTO ConnectionRequests (ClientID, RequestDate, Status, MaterialsAvailable) VALUES (@clientID, @requestDate, @status, @materialsAvailable)";
	SqlCommand^ cmd = gcnew SqlCommand(query, dbFunctions->conn);
	cmd->Parameters->AddWithValue("@clientID", clientID);
	cmd->Parameters->AddWithValue("@requestDate", requestDate);
	cmd->Parameters->AddWithValue("@status", status);
	cmd->Parameters->AddWithValue("@materialsAvailable", materialsAvailable);

	try
	{
		dbFunctions->OpenConnection();
		cmd->ExecuteNonQuery();
		MessageBox::Show("������ ������");
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
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (e->RowIndex >= 0) // ���������, ��� ���� ��� �� ������ (� �� �� ��������� � �.�.)
	{
		DataGridViewRow^ selectedRow = dataGridView1->Rows[e->RowIndex];

		// ��������� ������ �� ��������� ������
		int clientID = Convert::ToInt32(selectedRow->Cells["ClientID"]->Value);
		DateTime requestDate = Convert::ToDateTime(selectedRow->Cells["RequestDate"]->Value);
		String^ status = selectedRow->Cells["Status"]->Value->ToString();
		bool materialsAvailable = Convert::ToBoolean(selectedRow->Cells["MaterialsAvailable"]->Value);

		// ������� ��������� ������ � ComboBox � ������������� ��� ���������
		for each (ClientItem ^ item in comboBox1->Items)
		{
			if (item->ClientID == clientID)
			{
				comboBox1->SelectedItem = item;
				break;
			}
		}

		// ������������� ���� ������ � DateTimePicker
		dateTimePicker1->Value = requestDate;

		// ������������� ������ � ComboBox
		comboBox2->SelectedItem = status;

		// ������������� ����������� ���������� � CheckBox
		checkBox1->Checked = materialsAvailable;

		// ���������� ID ��������� ������ � �������
		selectedRequestID = Convert::ToInt32(selectedRow->Cells["RequestID"]->Value);
		selectedClientID = clientID;
	}
}
private: System::Void ������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (selectedRequestID == -1)
	{
		MessageBox::Show("���� �����, ������, �� ����� �������.");
		return;
	}

	int clientID = -1; // ID ���������� ������� (����� ������������ ��� ����������)

	// ��������� ID ������� �� ���������� �������� ComboBox
	if (comboBox1->SelectedItem != nullptr)
	{
		ClientItem^ selectedClient = (ClientItem^)comboBox1->SelectedItem;
		clientID = selectedClient->ClientID;
	}
	else
	{
		MessageBox::Show("���� �����, ������ �볺���.");
		return;
	}

	DateTime requestDate = dateTimePicker1->Value;
	String^ status = comboBox2->SelectedItem->ToString();
	bool materialsAvailable = checkBox1->Checked;

	// SQL-������ ��� ���������� ������
	String^ query = "UPDATE ConnectionRequests SET ClientID = @clientID, RequestDate = @requestDate, Status = @status, MaterialsAvailable = @materialsAvailable WHERE RequestID = @requestID";
	SqlCommand^ cmd = gcnew SqlCommand(query, dbFunctions->conn);
	cmd->Parameters->AddWithValue("@clientID", clientID);
	cmd->Parameters->AddWithValue("@requestDate", requestDate);
	cmd->Parameters->AddWithValue("@status", status);
	cmd->Parameters->AddWithValue("@materialsAvailable", materialsAvailable);
	cmd->Parameters->AddWithValue("@requestID", selectedRequestID);

	try
	{
		dbFunctions->OpenConnection();
		cmd->ExecuteNonQuery();
		MessageBox::Show("������ ��������");
		 LoadData(); // �������� ������, ���� ����� �������� DataGridView
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("�������: " + ex->Message);
	}
	finally
	{
		dbFunctions->CloseConnection();
	}
}
private: System::Void ���������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
private: System::Void ����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (selectedRequestID == -1)
	{
		MessageBox::Show("���� �����, ������, �� ����� ��������.");
		return;
	}

	// SQL-������ ��� �������� ������ ��������� ������
	String^ query = "DELETE FROM ConnectionRequests WHERE RequestID = @requestID";
	SqlCommand^ cmd = gcnew SqlCommand(query, dbFunctions->conn);
	cmd->Parameters->AddWithValue("@requestID", selectedRequestID);

	try
	{
		dbFunctions->OpenConnection();
		int rowsAffected = cmd->ExecuteNonQuery();

		if (rowsAffected > 0)
		{
			MessageBox::Show("������ ��������");
			// ������� ��������� ����� ��� ���������� ������ ������ (���� �����)
 			LoadData(); // �������� ������, ���� ����� �������� DataGridView
		}
		else
		{
			MessageBox::Show("����� �� ��������.");
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("�������: " + ex->Message);
	}
	finally
	{
		dbFunctions->CloseConnection();
	}
}
};
}
