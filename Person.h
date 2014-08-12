#ifndef PERSON_H
#define PERSON_H

#include <QString>

class Person
{
public:
    Person( const QString &nickName = QString( "" ),
            const QString &firstName = QString( "" ),
            const QString &lastName = QString( "" ),
            const QString &phoneNumber = QString( "" ),
            const QString &email = QString( "" ) ) :
        m_nickName( nickName ),
        m_firstName( firstName ),
        m_lastName( lastName ),
        m_phoneNumber( phoneNumber ),
        m_email( email )
    {

    }

    void setNickName( const QString &nickName )
    {
        m_nickName = nickName;
    }

    void setFirstName( const QString &firstName )
    {
        m_firstName = firstName;
    }

    void setLastName( const QString &lastName )
    {
        m_lastName = lastName;
    }

    void setPhoneNumber( const QString &phoneNumber )
    {
        m_phoneNumber = phoneNumber;
    }

    void setEmail( const QString &email )
    {
        m_email = email;
    }

    QString getNickName( ) const
    {
        return m_nickName;
    }

    QString getFirstName( ) const
    {
        return m_firstName;
    }

    QString getLastName( ) const
    {
        return m_lastName;
    }

    QString getPhoneNumber( ) const
    {
        return m_phoneNumber;
    }

    QString getEmail( ) const
    {
        return m_email;
    }

private:
    QString m_nickName;
    QString m_firstName;
    QString m_lastName;
    QString m_phoneNumber;
    QString m_email;
};

#endif // PERSON_H
