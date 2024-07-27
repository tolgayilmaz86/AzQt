/*
 * Copyright (c) Contributors to the Open 3D Engine Project. For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */

#include <AzQtComponents/AzQtComponentsAPI.h>
#include <AzQtComponents/Application/AzQtApplication.h>

#include <AzQtComponents/Utilities/QtPluginPaths.h>

namespace AzQtComponents
{

    AzQtApplication::AzQtApplication(int& argc, char** argv)
        : QApplication(argc, argv)
    {
         // Use a common Qt settings path for applications that don't register their own application name
         QApplication::setOrganizationName("O3DE");
         QApplication::setOrganizationDomain("o3de.org");
         QApplication::setApplicationName("O3DE Tools Application");

         AzQtComponents::PrepareQtPaths();
    }

    void AzQtApplication::InitializeDpiScaling()
    {    
         QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
         QCoreApplication::setAttribute(Qt::AA_UseHighDpiPixmaps);
         QCoreApplication::setAttribute(Qt::AA_DontCreateNativeWidgetSiblings);
         QGuiApplication::setHighDpiScaleFactorRoundingPolicy(Qt::HighDpiScaleFactorRoundingPolicy::PassThrough);
         AzQtComponents::Utilities::HandleDpiAwareness(AzQtComponents::Utilities::SystemDpiAware);
    }
} // namespace AzQtComponents

