
#include "gtest/gtest.h"
#include "IncorrectQueryError.h"

TEST( IncorrectQueryError001, messageTest )
{
    std::string functionName = "savePerson()";
    std::string query = "SELECT";
    IncorrectQueryError error( functionName, query );

    std::string actual = error.getMessage();
    std::string expected = "SELECT";
    ASSERT_EQ( expected, actual );
}

int main( int argc, char *argv[] )
{
    ::testing::InitGoogleTest( &argc, argv );
    return RUN_ALL_TESTS();
}
