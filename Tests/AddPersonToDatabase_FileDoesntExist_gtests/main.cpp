
#include "gtest/gtest.h"
#include "FileDoesntExist.h"

TEST( FileDoesntExist001, messageTest )
{
    std::string fileName = "input.txt";
    FileDoesntExist error( fileName );

    std::string actual = error.getMessage();
    std::string expected = "Error: the file \"" + fileName + "\""
            " doesn't exist";
    ASSERT_EQ( expected, actual );
}

int main( int argc, char *argv[] )
{
    ::testing::InitGoogleTest( &argc, argv );
    return RUN_ALL_TESTS();
}
