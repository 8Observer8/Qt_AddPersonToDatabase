#ifndef FILEDOESNTEXIST_H
#define FILEDOESNTEXIST_H

#include "FileError.h"

class FileDoesntExist : public FileError
{
public:
    FileDoesntExist( const std::string &fileName ) :
        FileError( fileName )
    {
        m_message = "Error: the file \"" + m_fileName + "\""
                " doesn't exist";
    }
};

#endif // FILEDOESNTEXIST_H
