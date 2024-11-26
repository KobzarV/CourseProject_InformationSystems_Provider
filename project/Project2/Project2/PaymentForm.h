#pragma once
#include "Functions.h"
#include "ClientItem.h"
namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для PaymentForm
	/// </summary>
	public ref class PaymentForm : public System::Windows::Forms::Form
	{
	public:
		PaymentForm(void)
		{
			InitializeComponent();
			//
            dbFunctions = gcnew Functions();
            dbFunctions->ConnectToDB();
            LoadClients();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~PaymentForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
    private:
        Functions^ dbFunctions; // Экземпляр класса для работы с базой данных

        System::Windows::Forms::Label^ label1;
        System::Windows::Forms::ComboBox^ comboBoxClients;
        System::Windows::Forms::Label^ label2;
        System::Windows::Forms::DateTimePicker^ dateTimePickerPaymentDate;
        System::Windows::Forms::Label^ label3;
        System::Windows::Forms::TextBox^ textBoxAmount;
        System::Windows::Forms::Button^ buttonAddPayment;

        void InitializeComponent(void)
        {
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->comboBoxClients = (gcnew System::Windows::Forms::ComboBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->dateTimePickerPaymentDate = (gcnew System::Windows::Forms::DateTimePicker());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->textBoxAmount = (gcnew System::Windows::Forms::TextBox());
            this->buttonAddPayment = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(37, 37);
            this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(52, 16);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Клієнт:";
            // 
            // comboBoxClients
            // 
            this->comboBoxClients->FormattingEnabled = true;
            this->comboBoxClients->Location = System::Drawing::Point(148, 33);
            this->comboBoxClients->Margin = System::Windows::Forms::Padding(4);
            this->comboBoxClients->Name = L"comboBoxClients";
            this->comboBoxClients->Size = System::Drawing::Size(265, 24);
            this->comboBoxClients->TabIndex = 1;
            this->comboBoxClients->SelectedIndexChanged += gcnew System::EventHandler(this, &PaymentForm::comboBoxClients_SelectedIndexChanged);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(37, 86);
            this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(92, 16);
            this->label2->TabIndex = 2;
            this->label2->Text = L"Дата оплати:";
            // 
            // dateTimePickerPaymentDate
            // 
            this->dateTimePickerPaymentDate->Location = System::Drawing::Point(148, 79);
            this->dateTimePickerPaymentDate->Margin = System::Windows::Forms::Padding(4);
            this->dateTimePickerPaymentDate->Name = L"dateTimePickerPaymentDate";
            this->dateTimePickerPaymentDate->Size = System::Drawing::Size(265, 22);
            this->dateTimePickerPaymentDate->TabIndex = 3;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(37, 134);
            this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(44, 16);
            this->label3->TabIndex = 4;
            this->label3->Text = L"Сума:";
            // 
            // textBoxAmount
            // 
            this->textBoxAmount->Location = System::Drawing::Point(148, 130);
            this->textBoxAmount->Margin = System::Windows::Forms::Padding(4);
            this->textBoxAmount->Name = L"textBoxAmount";
            this->textBoxAmount->Size = System::Drawing::Size(132, 22);
            this->textBoxAmount->TabIndex = 5;
            // 
            // buttonAddPayment
            // 
            this->buttonAddPayment->Location = System::Drawing::Point(41, 183);
            this->buttonAddPayment->Margin = System::Windows::Forms::Padding(4);
            this->buttonAddPayment->Name = L"buttonAddPayment";
            this->buttonAddPayment->Size = System::Drawing::Size(133, 28);
            this->buttonAddPayment->TabIndex = 6;
            this->buttonAddPayment->Text = L"Додати платіж";
            this->buttonAddPayment->UseVisualStyleBackColor = true;
            this->buttonAddPayment->Click += gcnew System::EventHandler(this, &PaymentForm::buttonAddPayment_Click);
            // 
            // PaymentForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(456, 242);
            this->Controls->Add(this->buttonAddPayment);
            this->Controls->Add(this->textBoxAmount);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->dateTimePickerPaymentDate);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->comboBoxClients);
            this->Controls->Add(this->label1);
            this->DoubleBuffered = true;
            this->Margin = System::Windows::Forms::Padding(4);
            this->Name = L"PaymentForm";
            this->Text = L"Додати платіж";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
	private: System::Void PaymentForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
           void InsertPayment(int clientID, DateTime paymentDate, Decimal amount)
           {
               // SQL-запрос для вставки платежа
               String^ query = "INSERT INTO Payments (ClientID, PaymentDate, Amount) VALUES (@clientID, @paymentDate, @amount)";
               SqlCommand^ cmd = gcnew SqlCommand(query, dbFunctions->conn);

               // Добавляем параметры
               cmd->Parameters->AddWithValue("@clientID", clientID);
               cmd->Parameters->AddWithValue("@paymentDate", paymentDate);
               cmd->Parameters->AddWithValue("@amount", amount);

               try
               {
                   dbFunctions->OpenConnection();
                   cmd->ExecuteNonQuery();
                   MessageBox::Show("Платіж успішно додано");
                   // Закрываем форму или обновляем данные в DataGridView
                   this->Close(); // Пример: закрыть форму после успешной вставки
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
           private:
               System::Void buttonAddPayment_Click(System::Object^ sender, System::EventArgs^ e)
               {
                   // Код для добавления платежа при нажатии на кнопку "Додати платіж"
                   // Получаем значения из элементов управления
                   if (comboBoxClients->SelectedIndex == -1)
                   {
                       MessageBox::Show("Будь ласка, оберіть клієнта.");
                       return;
                   }

                   ClientItem^ selectedClient = (ClientItem^)comboBoxClients->SelectedItem;
                   int clientID = selectedClient->ClientID;
                   DateTime paymentDate = dateTimePickerPaymentDate->Value;
                   Decimal amount;

                   if (!Decimal::TryParse(textBoxAmount->Text, amount))
                   {
                       MessageBox::Show("Некоректна сума платежа.");
                       return;
                   }

                   // Вызываем метод для вставки платежа
                   InsertPayment(clientID, paymentDate, amount);
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
                           comboBoxClients->Items->Add(gcnew ClientItem(clientID, fullName));
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
    private: System::Void comboBoxClients_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    }
};
}
