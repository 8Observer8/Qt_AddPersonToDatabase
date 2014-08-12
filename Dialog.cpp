
#include <QDir>
#include <QMessageBox>

#include "Dialog.h"
#include "ui_Dialog.h"
#include "Person.h"
#include "LogicError.h"
#include "FileError.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    QString path = QDir::currentPath() + QString( "/Persons.sqlite" );
    try {
        m_database.setDatabaseName( path );
    } catch ( const EmptyArgumentError &e ) {
        QString errorText( e.what() );
        QMessageBox::information( this, tr( "Error" ), errorText );
    } catch ( const FileError &e ) {
        QString errorText( e.what() );
        QMessageBox::information( this, tr( "Error" ), errorText );
    } catch( ... ) {
        QString errorText( "Unknown expection" );
        QMessageBox::information( this, tr( "Error" ), errorText );
    }
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_savePushButton_clicked()
{
    QString nickName = ui->nickNameLineEdit->text();
    QString firstName = ui->firstNameLineEdit->text();
    QString lastName = ui->lastNameLineEdit->text();
    QString phoneNumber = ui->phoneNumberLineEdit->text();
    QString email = ui->emailLineEdit->text();

    Person person( nickName, firstName, lastName,
                   phoneNumber, email );

    try {
        m_database.savePerson( person );
    } catch ( const LogicError &e ) {
        QString errorText( e.what() );
        QMessageBox::information( this, tr( "Error" ), errorText );
    } catch ( const FileError &e ) {
        QString errorText( e.what() );
        QMessageBox::information( this, tr( "Error" ), errorText );
    } catch( ... ) {
        QString errorText( "Unknown expection" );
        QMessageBox::information( this, tr( "Error" ), errorText );
    }
}
