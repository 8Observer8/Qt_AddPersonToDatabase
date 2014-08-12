
#include "gtest/gtest.h"
#include "EmptyArgumentError.h"

TEST( EmptyArgumentError001, messageTest )
{
    std::string functionName = "readData()";
    EmptyArgumentError error( functionName );

    std::string actual = error.getMessage();
    std::string expected = "Error: empty argument in the "
            "function \"" + functionName + "\"";
    ASSERT_EQ( expected, actual );
}

int main( int argc, char *argv[] )
{
    ::testing::InitGoogleTest( &argc, argv );
    return RUN_ALL_TESTS();
}
