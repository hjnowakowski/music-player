#ifndef GLOBAL_H
#define GLOBAL_H
#include <QString>

QT_BEGIN_NAMESPACE
class QString;
QT_END_NAMESPACE

#define MAGIC_NUM 42

extern qreal g_some_double; // Note the important use of extern!
extern QString g_some_string;
extern QString g_username;

//class global
//{
//public:
//    global();

//};

#endif // GLOBAL_H
