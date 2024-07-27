/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */

#pragma once

#if !defined(Q_MOC_RUN)
#include <AzCore/PlatformDef.h>

#include <QInputDialog>
#include <QLineEdit>
#include <QRegularExpression>

#include <AzQtComponents/AzQtComponentsAPI.h>
#endif

class QValidator;

namespace AzQtComponents
{
    //! An improved QInputDialog which allows a validator to be placed on the TextEdit line.
    class AZ_QT_COMPONENTS_API InputDialog
        : public QInputDialog
    {
        Q_OBJECT

    public:
        explicit InputDialog(QWidget* parent = nullptr);

        //! Sets a validator on the LineEdit.
        void SetValidator(QValidator* validator);
        //! Helper for setting a regular expression validator with a specified pattern.
        void SetRegularExpressionValidator(const QString& pattern);

        //! Sets a maximum character input length on the LineEdit
        void SetMaxLength(int length);

        void show();
        int exec();

        static QString getText(QWidget* parent,
                               const QString& title,
                               const QString& label,
                               QLineEdit::EchoMode echo = QLineEdit::Normal,
                               const QString& text = QString(),
                               const QString& validationRegExp = QString());
    private:
        void UpdateLineEdit();

        QValidator* m_validator = nullptr;
        int m_maxLength = -1;
    };
} // namespace AzQtComponents
