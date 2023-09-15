#ifndef GDBWIDGET_H
#define GDBWIDGET_H


#include "gdblogwidget.h"
#include "LogWidget.h"
#include "SeerBreakpointsBrowserWidget.h"
#include "SeerWatchpointsBrowserWidget.h"
#include "SeerCatchpointsBrowserWidget.h"

#include "gdbmonitor.h"
#include <QtCore/QProcess>
#include <QtCore/QVector>
#include <QtWidgets/QWidget>
#include "ui_gdbwidget.h"
namespace Ui {
    class GdbWidget;
}

class GdbWidget : public QWidget
{
    Q_OBJECT

public:
    explicit GdbWidget(QWidget *parent = nullptr);
    ~GdbWidget();

    GdbMonitor*                         gdbMonitor                          ();
    QProcess*                           gdbProcess                          ();

    void                                setExecutableName                   (const QString& executableName);
    const QString&                      executableName                      () const;

    void                                setNewExecutableFlag                (bool flag);
    bool                                newExecutableFlag                   () const;

    void                                setExecutableArguments              (const QString& executableArguments);
    const QString&                      executableArguments                 () const;

    void                                setExecutableWorkingDirectory       (const QString& executableWorkingDirectory);
    const QString&                      executableWorkingDirectory          () const;

    void                                setExecutableBreakpointsFilename    (const QString& breakpointsFilename);
    const QString&                      executableBreakpointsFilename       () const;

    void                                setExecutablePid                    (int pid);
    int                                 executablePid                       () const;

    void                                setExecutableHostPort               (const QString& hostPort);
    const QString&                      executableHostPort                  () const;

    void                                setExecutableSerialBaud             (int executableBaudRate);
    int                                 executableSerialBaud                () const;

    void                                setExecutableSerialParity           (const QString& executableParity);
    const QString&                      executableSerialParity              () const;

    void                                setExecutableCoreFilename           (const QString& coreFilename);
    const QString&                      executableCoreFilename              () const;

    void                                setExecutableLaunchMode             (const QString& launchMode);
    const QString&                      executableLaunchMode                () const;

    // Gdb settings.
    void                                setGdbProgram                       (const QString& program);
    QString                             gdbProgram                          () const;

    void                                setGdbArguments                     (const QString& arguments);
    QString                             gdbArguments                        () const;

    void                                setGdbAsyncMode                     (bool flag);
    bool                                gdbAsyncMode                        () const;

    void                                setGdbHandleTerminatingException    (bool flag);
    bool                                gdbHandleTerminatingException       () const;

    void                                setDprintfStyle                     (const QString& style);
    QString                             dprintfStyle                        () const;

    void                                setDprintfFunction                  (const QString& function);
    QString                             dprintfFunction                     () const;

    void                                setDprintfChannel                   (const QString& channel);
    QString                             dprintfChannel                      () const;

    void                                setConsoleMode                      (const QString& mode);
    QString                             consoleMode                         () const;

    void                                setConsoleScrollLines               (int count);
    int                                 consoleScrollLines                  () const;

    void                                setManualCommands                   (const QStringList& commands);
    QStringList                         manualCommands                      (int count) const;

    void                                setRememberManualCommandCount       (int count);
    int                                 rememberManualCommandCount          () const;
    void                                clearManualCommandHistory           ();

    void                                setSourceAlternateDirectories       (const QStringList& alternateDirectories);
    const QStringList&                  sourceAlternateDirectories          () const;

    void                                setGdbOutputLogEnabled              (bool flag);
    bool                                isGdbOutputLogEnabled               () const;

    void                                setSeerOutputLogEnabled             (bool flag);
    bool                                isSeerOutputLogEnabled              () const;

    // Editor manager.
    SeerEditorManagerWidget*            editorManager                       ();
    const SeerEditorManagerWidget*      editorManager                       () const;

    // Settings
    void                                writeSettings                       ();
    void                                readSettings                        ();

    // Printpoints
    void                                resetDprintf                        ();

public slots:
    void                                handleText                          (const QString& text);
    void                                handleManualCommandExecute          ();
    void                                handleGdbCommand                    (const QString& command);
    void                                handleGdbExit                       ();
    void                                handleGdbRunExecutable              ();
    void                                handleGdbStartExecutable            ();
    void                                handleGdbAttachExecutable           ();
    void                                handleGdbConnectExecutable          ();
    void                                handleGdbCoreFileExecutable         ();
    void                                handleGdbShutdown                   ();
    void                                handleGdbRunToLine                  (QString fullname, int lineno);
    void                                handleGdbNext                       ();
    void                                handleGdbStep                       ();
    void                                handleGdbFinish                     ();
    void                                handleGdbContinue                   ();
    void                                handleGdbInterrupt                  ();
    void                                handleGdbInterruptSIGINT            ();
    void                                handleGdbInterruptSIGKILL           ();
    void                                handleGdbInterruptSIGFPE            ();
    void                                handleGdbInterruptSIGSEGV           ();
    void                                handleGdbInterruptSIGUSR1           ();
    void                                handleGdbInterruptSIGUSR2           ();
    void                                handleGdbExecutableSources          ();
    void                                handleGdbExecutableFunctions        (int id, const QString& functionRegex);
    void                                handleGdbExecutableTypes            (int id, const QString& typeRegex);
    void                                handleGdbExecutableVariables        (int id, const QString& variableNameRegex, const QString& variableTypeRegex);
    void                                handleGdbExecutableLibraries        ();
    void                                handleGdbExecutableName             ();
    void                                handleGdbExecutableArguments        ();
    void                                handleGdbExecutableWorkingDirectory ();
    void                                handleGdbExecutableLoadBreakpoints  ();
//    void                                handleGdbTtyDeviceName              ();
    void                                handleGdbStackListFrames            ();
    void                                handleGdbStackSelectFrame           (int frameno);
    void                                handleGdbStackListLocals            ();
    void                                handleGdbStackListArguments         ();
    void                                handleGdbGenericpointList           ();
    void                                handleGdbBreakpointDelete           (QString breakpoints);
    void                                handleGdbBreakpointEnable           (QString breakpoints);
    void                                handleGdbBreakpointDisable          (QString breakpoints);
    void                                handleGdbBreakpointInsert           (QString breakpoint);
    void                                handleGdbBreakpointReload           (QStringList breakpointsText);
    void                                handleGdbWatchpointReload           (QStringList watchpointsText);
    void                                handleGdbCatchpointReload           (QStringList catchpointsText);
    void                                handleGdbWatchpointDelete           (QString watchpoints);
    void                                handleGdbWatchpointEnable           (QString watchpoints);
    void                                handleGdbWatchpointDisable          (QString watchpoints);
    void                                handleGdbWatchpointInsert           (QString watchpoint);
    void                                handleGdbCatchpointDelete           (QString catchpoints);
    void                                handleGdbCatchpointEnable           (QString catchpoints);
    void                                handleGdbCatchpointDisable          (QString catchpoints);
    void                                handleGdbCatchpointInsert           (QString catchpoint);
    void                                handleGdbPrintpointDelete           (QString breakpoints);
    void                                handleGdbPrintpointEnable           (QString breakpoints);
    void                                handleGdbPrintpointDisable          (QString breakpoints);
    void                                handleGdbPrintpointInsert           (QString printpoint);
    void                                handleGdbThreadListIds              ();
    void                                handleGdbThreadListFrames           ();
    void                                handleGdbThreadSelectId             (int threadid);
    void                                handleGdbRegisterListNames          ();
    void                                handleGdbRegisterListValues         ();
    void                                handleGdbDataEvaluateExpression     (int expressionid, QString expression);
    void                                handleGdbDataListValues             ();
    void                                handleGdbDataListExpressions        ();
    void                                handleGdbDataAddExpression          (QString expression);
    void                                handleGdbDataDeleteExpressions      (QString expressionids);
    void                                handleGdbMemoryAddExpression        (QString expression);
    void                                handleGdbArrayAddExpression         (QString expression);
    void                                handleGdbMemoryEvaluateExpression   (int expressionid, QString address, int count);
    void                                handleGdbArrayEvaluateExpression    (int expressionid, QString address, int count);
    void                                handleGdbMemoryVisualizer           ();
    void                                handleGdbArrayVisualizer            ();
    void                                handleSplitterMoved                 (int pos, int index);
    void                                handleManualCommandChanged          ();
    void                                handleLogOuputChanged               ();
    void                                handleGdbLoadBreakpoints            ();
    void                                handleGdbSaveBreakpoints            ();
    void handleGdbArrVisualizer();
    void handleGdbStrVisualizer();
    void handleGdbSoloVisualizer();
    void handleGdbDoubleVisualizer();
    void handleGdbArrAddExpression(QString expression);
    void handleGdbArrStrExpression(QString expression);
    void handleGdbSoloAddExpression(QString expression);
    void handleGdbDoubleAddExpression(QString expression);

    void                                handleGdbProcessFinished            (int exitCode, QProcess::ExitStatus exitStatus);
    void                                handleGdbProcessErrored             (QProcess::ProcessError errorStatus);

signals:
    void                                stoppingPointReached                ();
    void                                changeWindowTitle                   (QString title);

protected:

private:
    bool                                isGdbRuning                         () const;
    void                                startGdb                            ();
    void                                killGdb                             ();
    void                                createConsole                       ();
    void                                deleteConsole                       ();
    void                                connectConsole                      ();
    void                                disconnectConsole                   ();
    void                                sendGdbInterrupt                    (int signal);

    QString                             _gdbProgram;
    QString                             _gdbArguments;
    bool                                _gdbASyncMode;
    bool                                _gdbHandleTerminatingException;
    QString                             _dprintfStyle;
    QString                             _dprintfFunction;
    QString                             _dprintfChannel;
    QString                             _executableName;
    QString                             _executableArguments;
    QString                             _executableWorkingDirectory;
    QString                             _executableBreakpointsFilename;
    int                                 _executablePid;
    QString                             _executableHostPort;
    int                                 _executableSerialBaud;
    QString                             _executableSerialParity;
    QString                             _executableCoreFilename;
    QString                             _executableLaunchMode;
    bool                                _newExecutableFlag;
    int                                 _currentFrame;

//        SeerConsoleWidget*                  _consoleWidget;
//        QString                             _consoleMode;
//        int                                 _consoleScrollLines;
    int                                 _rememberManualCommandCount;
    SeerBreakpointsBrowserWidget*       _breakpointsBrowserWidget;
    SeerWatchpointsBrowserWidget*       _watchpointsBrowserWidget;
    SeerCatchpointsBrowserWidget*       _catchpointsBrowserWidget;

    GdbLogWidget*                   _gdbOutputLog;
    LogWidget*                  _seerOutputLog;

    GdbMonitor*                         _gdbMonitor;
    QProcess*                           _gdbProcess;

    QVector<int>                        _dataExpressionId;
    QVector<QString>                    _dataExpressionName;

private:
    Ui::GdbWidget *ui;
};

#endif // GDBWIDGET_H
