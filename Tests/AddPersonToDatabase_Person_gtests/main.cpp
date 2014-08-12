
#include <string>
#include "gtest/gtest.h"
#include "Person.h"

TEST( Person001, constructorTest )
{
    QString nickName = "8Observer8";
    QString firstName = "Ivan";
    QString lastName = "Enzhaev";
    QString phoneNumber = "+79172122959";
    QString email = "8observer8@gmail.com";
    Person person( nickName, firstName, lastName,
                   phoneNumber, email );

    std::string actual = person.getNickName().toStdString();
    std::string expected = "8Observer8";
    ASSERT_EQ( expected, actual );

    actual = person.getFirstName().toStdString();
    expected = "Ivan";
    ASSERT_EQ( expected, actual );

    actual = person.getLastName().toStdString();
    expected = "Enzhaev";
    ASSERT_EQ( expected, actual );

    actual = person.getPhoneNumber().toStdString();
    expected = "+79172122959";
    ASSERT_EQ( expected, actual );

    actual = person.getEmail().toStdString();
    expected = "8observer8@gmail.com";
    ASSERT_EQ( expected, actual );
}

TEST( Person002, setNickNameTest )
{
    QString nickName = "8Observer8";
    Person person;
    person.setNickName( nickName );

    std::string actual = person.getNickName().toStdString();
    std::string expected = "8Observer8";
    ASSERT_EQ( expected, actual );
}


TEST( Person003, setFirstNameTest )
{
    QString firstName = "Ivan";
    Person person;
    person.setFirstName( firstName );

    std::string actual = person.getFirstName().toStdString();
    std::string expected = "Ivan";
    ASSERT_EQ( expected, actual );
}

TEST( Person004, setLastNameTest )
{
    QString lastName = "Enzhaev";
    Person person;
    person.setLastName( lastName );

    std::string actual = person.getLastName().toStdString();
    std::string expected = "Enzhaev";
    ASSERT_EQ( expected, actual );
}

TEST( Person005, setPhoneNumberTest )
{
    QString phoneNumber = "+79172122959";
    Person person;
    person.setPhoneNumber( phoneNumber );

    std::string actual = person.getPhoneNumber().toStdString();
    std::string expected = "+79172122959";
    ASSERT_EQ( expected, actual );
}

TEST( Person006, setEmailTest )
{
    QString email = "8observer8@gmail.com";
    Person person;
    person.setEmail( email );

    std::string actual = person.getEmail().toStdString();
    std::string expected = "8observer8@gmail.com";
    ASSERT_EQ( expected, actual );
}

int main( int argc, char *argv[] )
{
    ::testing::InitGoogleTest( &argc, argv );
    return RUN_ALL_TESTS();
}
