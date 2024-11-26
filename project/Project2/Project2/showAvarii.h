#pragma once
#include "Functions.h"

ref class showAvarii
{
private:
    Functions^ db;
public:
    showAvarii()
    {
        db = gcnew Functions();
    }

    DataTable^ AvariiTable()
    {
        DataTable^ table = gcnew DataTable(); // ������� ����� ������� ��� �������� ������

        String^ query = "SELECT CR.IncidentID, CR.ClientID, C.FirstName + ' ' + C.LastName AS ClientName, CR.IncidentDate, CR.Description, CR.Status, CR.MaterialsAvailable "
            "FROM Incidents CR "
            "INNER JOIN Clients C ON CR.ClientID = C.ClientID";

        try
        {
            db->ConnectToDB();

            SqlConnection^ connection = db->conn;
            SqlCommand^ command = gcnew SqlCommand(query, connection);
            connection->Open();

            SqlDataReader^ reader = command->ExecuteReader();

            table->Load(reader); // ��������� ������ �� SqlDataReader � DataTable

            reader->Close();
        }
        catch (SqlException^ ex)
        {
            MessageBox::Show("������� ��� �������� ������: " + ex->Message);
        }
        finally
        {
            if (db->conn->State == ConnectionState::Open)
                db->conn->Close();
        }

        return table; // ���������� ����������� �������
    }
};




