#pragma once
#include "Functions.h"

ref class showReq
{
private:
    Functions^ db;
public:
    showReq()
    {
        db = gcnew Functions();
    }

    DataTable^ ReqTable()
    {
        DataTable^ table = gcnew DataTable(); // ������� ����� ������� ��� �������� ������

        String^ query = "SELECT CR.RequestID, CR.ClientID, C.FirstName + ' ' + C.LastName AS ClientName, CR.RequestDate, CR.Status, CR.MaterialsAvailable "
            "FROM ConnectionRequests CR "
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




