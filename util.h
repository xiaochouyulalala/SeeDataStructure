#ifndef UTIL_H
#define UTIL_H

#include <QtCore/QString>
#include <QtCore/QStringList>
namespace SDS {

    QString         version         ();

    QString         filterEscapes   (const QString& str);
    QStringList     parse           (const QString& str, const QString& search, QChar startBracket, QChar endBracket, bool includeSearch);
    QString         parseFirst      (const QString& str, const QString& search, QChar startBracket, QChar endBracket, bool includeSearch);
    QString         parseFirst      (const QString& str, const QString& search, bool includeSearch);
    QString         filterBookEnds  (const QString& str, QChar startBracket, QChar endBracket);

    int             createID        ();

    unsigned char   ebcdicToAscii   (unsigned char byte);
    unsigned char   ucharToAscii    (unsigned char byte);

    int             typeBytes       (const QString& type);
}

#endif // UTIL_H
