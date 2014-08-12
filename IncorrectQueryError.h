#ifndef INCORRECTQUERYERROR_H
#define INCORRECTQUERYERROR_H

#include "LogicError.h"

class IncorrectQueryError : public LogicError
{
public:
    IncorrectQueryError( const std::string &functionName,
                         const std::string &query) :
        LogicError( functionName )
    {
        m_message = "Error: incorrect query \"" + query + "\"";
    }
};

#endif // INCORRECTQUERYERROR_H
