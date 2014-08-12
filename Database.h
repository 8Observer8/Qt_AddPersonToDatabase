#ifndef DATABASE_H
#define DATABASE_H

#include <QtSql>
#include <QFileInfo>
#include "Person.h"
#include "FileDoesntExist.h"
#include "FileOpenError.h"
#include "EmptyArgumentError.h"
#include "IncorrectQueryError.h"

class Database
{
public:

    Database()
    {
        m_database = QSqlDatabase::addDatabase( "QSQLITE" );
    }

    ~Database()
    {
        m_database.close();
    }

    void setDatabaseName( const QString &path )
    throw( EmptyArgumentError, FileDoesntExist, FileOpenError )
    {
        std::string functionName = "setDatabaseName()";

        // Check the input argument
        if ( path.isEmpty() ) {
            std::string argumentName = "path";
            throw EmptyArgumentError( argumentName, functionName );
        }

        QFileInfo checkFile( path );

        if ( checkFile.isFile() ) {
            m_database.setDatabaseName( path );
            if ( !m_database.open() ) {
                throw FileOpenError( path.toStdString() );
            } else {
                m_path = path;
            }
        } else {
            throw FileDoesntExist( path.toStdString() );
        }
    }

    void savePerson( const Person &person )
    throw ( EmptyArgumentError, FileOpenError, IncorrectQueryError )
    {
        // Check argument
        std::string functionName = "savePerson()";
        if ( m_path.isEmpty() ) {
            std::string argumentName = "m_path";
            throw EmptyArgumentError( argumentName, functionName );
        }

        // Is the file open?
        if ( !m_database.isOpen() ) {
            throw FileOpenError( m_path.toStdString() );
        }

        // Query
        QSqlQuery query;
        QString strQuery = "Selectfff";
        if ( query.exec( strQuery ) ) {

        } else {
            throw IncorrectQueryError( functionName, strQuery.toStdString() );
        }
    }

private:
    QSqlDatabase m_database;
    QString m_path;
};

#endif // DATABASE_H
