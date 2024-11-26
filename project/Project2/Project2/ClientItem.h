#pragma once

using namespace System;

public ref class ClientItem
{
public:
    int ClientID;
    String^ FullName;

    ClientItem(int id, String^ name)
    {
        ClientID = id;
        FullName = name;
    }

    virtual String^ ToString() override
    {
        return FullName;
    }
};
