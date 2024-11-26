#pragma once
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::SqlClient;
public ref class Functions
{
public:
    SqlConnection^ conn;
    SqlConnectionStringBuilder^ connStrinfBuilder;
    void ConnectToDB()
    {
        connStrinfBuilder = gcnew SqlConnectionStringBuilder();
        connStrinfBuilder->DataSource = "DESKTOP-9VUOP99";
        connStrinfBuilder->InitialCatalog = "InternetProvider";
        connStrinfBuilder->IntegratedSecurity = true;
        conn = gcnew SqlConnection(Convert::ToString(connStrinfBuilder));
    }
    void OpenConnection()
    {
        if (conn->State == System::Data::ConnectionState::Closed)
        {
            conn->Open();
        }
    }

    void CloseConnection()
    {
        if (conn->State == System::Data::ConnectionState::Open)
        {
            conn->Close();
        }
    }
};


