
#include "gtest/gtest.h"
#include "FileOpenError.h"

TEST( FileOpenError001, messageTest )
{
    std::string fileName = "input.txt";
    FileOpenError error( fileName );

    std::string actual = error.getMessage();
    std::string expected = "Error: unable to open the file "
            "\"" + fileName + "\"";
    ASSERT_EQ( expected, actual );
}

int main( int argc, char *argv[] )
{
    ::testing::InitGoogleTest( &argc, argv );
    return RUN_ALL_TESTS();
}
