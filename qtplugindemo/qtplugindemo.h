#ifndef QTPLUGINDEMOPLUGIN_H
#define QTPLUGINDEMOPLUGIN_H

#include "qtplugindemo_global.h"

#include <extensionsystem/iplugin.h>

namespace Qtplugindemo {
namespace Internal {

class QtplugindemoPlugin : public ExtensionSystem::IPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QtCreatorPlugin" FILE "Qtplugindemo.json")

public:
    QtplugindemoPlugin();
    ~QtplugindemoPlugin() override;

    bool initialize(const QStringList &arguments, QString *errorString) override;
    void extensionsInitialized() override;
    ShutdownFlag aboutToShutdown() override;

private:
    void triggerAction();
};

} // namespace Internal
} // namespace Qtplugindemo

#endif // QTPLUGINDEMOPLUGIN_H
