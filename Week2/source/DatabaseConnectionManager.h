#ifndef __DATABASECONNECTIONMANAGER_H__
#define __DATABASECONNECTIONMANAGER_H__

#include <iostream>
#include <memory>
using namespace std;

//DatabaseConnectionManager is a Singleton
class DatabaseConnectionManager
{
    protected:
        DatabaseConnectionManager(){}
        
    public:
        DatabaseConnectionManager(DatabaseConnectionManager &other) = delete;
        void operator=(const DatabaseConnectionManager &) = delete;

        static DatabaseConnectionManager & getManagerInstance()
        {
            static DatabaseConnectionManager instance;
            return instance;
        }

        void connect() { cout << "Database Connected." << endl;}
        void getConnectionObject(); //does nothing
        void disconnect() { cout << "Database Disconnected." << endl; }
};

#endif // __DATABASECONNECTIONMANAGER_H__