#ifndef FILEOPENERROR_H
#define FILEOPENERROR_H

#include "FileError.h"

class FileOpenError : public FileError
{
public:
    FileOpenError( const std::string &fileName ) :
        FileError( fileName )
    {
        m_message = "Error: unable to open the file "
                "\"" + m_fileName + "\"";
    }
};

#endif // FILEOPENERROR_H
