#ifndef EMPTYARGUMENTERROR_H
#define EMPTYARGUMENTERROR_H

#include "LogicError.h"

class EmptyArgumentError : public LogicError
{
public:
    EmptyArgumentError( const std::string &argumentName,
                        const std::string &functionName ) :
        LogicError( functionName )
    {
        m_message = "Error: empty argument \"" + argumentName +
                "\" in the function \"" + m_functionName + "\"";
    }
};

#endif // EMPTYARGUMENTERROR_H
