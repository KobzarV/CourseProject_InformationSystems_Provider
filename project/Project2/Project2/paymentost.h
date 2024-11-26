#pragma once
#include "Functions.h"
ref class paymentost
{
private:
    Functions^ db;
public:
    paymentost()
    {
        db = gcnew Functions();
    }

    DataTable^ ClientsTable()
    {
        DataTable^ table = gcnew DataTable(); // Создаем новую таблицу для хранения данных

        String^ query = "SELECT * FROM Payments";

        try
        {
            db->ConnectToDB();

            SqlConnection^ connection = db->conn;
            SqlCommand^ command = gcnew SqlCommand(query, connection);
            connection->Open();

            SqlDataReader^ reader = command->ExecuteReader();

            table->Load(reader); // Загружаем данные из SqlDataReader в DataTable

            reader->Close();
        }
        catch (SqlException^ ex)
        {
            MessageBox::Show("Помилка при виконанні запиту: " + ex->Message);
        }
        finally
        {
            if (db->conn->State == ConnectionState::Open)
                db->conn->Close();
        }

        return table; // Возвращаем заполненную таблицу
    }
};

