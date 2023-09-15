#include "gdblogwidget.h"
#include "util.h"
#include <QtWidgets/QScrollBar>
#include <QtCore/QRegExp>
#include <QtCore/QDebug>
GdbLogWidget::GdbLogWidget(QWidget *parent) : LogWidget(parent)
{

}
GdbLogWidget::~GdbLogWidget(){}
void GdbLogWidget::processText (const QString& text) {

    QString str;

    // Remove leading "~"
    // ~"For help, type "help".
    // "
    if (text.front() == '~') {

        str = text.mid(1);

        // Remove leading """
        if (str.front() == '"') {
            str = str.mid(1);
        }

        // Remove trailing """
        if (str.back() == '"') {
            str.chop(1);
        }

        // Remove trailing "\n"
        if (str.back() == '\n') {
            str.chop(1);
        }

    // Remove leading "&"
    // &"p name
    // "
    }else if (text.front() == '&') {

        str = text.mid(1);

        // Remove leading """
        if (str.front() == '"') {
            str = str.mid(1);
        }

        // Remove trailing """
        if (str.back() == '"') {
            str.chop(1);
        }

        // Remove trailing "\n"
        if (str.back() == '\n') {
            str.chop(1);
        }


    // Use string as it is.
    }else{
        str = text;
    }

    // Filter escape characters.
    str = SDS::filterEscapes(str);

    // Remove trailing "\n"
    while (str.back() == '\n') {
        str.chop(1);
        break;
    }

    // Write the string to the log.
    ui->textEdit->append(str);

    // If there is breakpoint message (via a manual command), ask
    // for the breakpoint list to be refreshed.
    //
    // Breakpoint 2 at 0x403a40: file explorer.cpp, line 78.
    //
    if (str.contains(QRegExp("^Breakpoint ([0-9]+) at (0[xX][0-9a-fA-F]+): file (.*\\,) (line) ([0-9]+)"))) {
        //qDebug() << str;
        emit refreshBreakpointsList();
    }
}
