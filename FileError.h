#ifndef FILEERROR_H
#define FILEERROR_H

#include <string>
#include <stdexcept>

class FileError : public std::runtime_error
{
public:
    FileError( const std::string &fileName ) :
        std::runtime_error( "" ),
        m_fileName( fileName ),
        m_message( "" )
    {

    }

    virtual ~FileError() throw()
    {

    }

    virtual const char *what() const throw()
    {
        return m_message.c_str();
    }

    std::string getMessage() const
    {
        return m_message;
    }

protected:
    std::string m_message;
    std::string m_fileName;
};

#endif // FILEERROR_H
