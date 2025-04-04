/****************************************************************************
 *
 *   (c) 2009-2024 QGROUNDCONTROL PROJECT <http://www.qgroundcontrol.org>
 *
 * QGroundControl is licensed according to the terms in the file
 * COPYING.md in the root of the source code directory.
 *
 ****************************************************************************/

#include "BrandImageSettings.h"

#include <QtQml/QQmlEngine>

DECLARE_SETTINGGROUP(BrandImage, "Branding")
{
    userBrandImageIndoor()->setRawValue("qrc:/qmlimages/logo.png");
    userBrandImageOutdoor()->setRawValue("qrc:/qmlimages/logo.png");
    qmlRegisterUncreatableType<BrandImageSettings>("QGroundControl.SettingsManager", 1, 0, "BrandImageSettings", "Reference only"); \
}


DECLARE_SETTINGSFACT(BrandImageSettings, userBrandImageIndoor)
DECLARE_SETTINGSFACT(BrandImageSettings, userBrandImageOutdoor)
