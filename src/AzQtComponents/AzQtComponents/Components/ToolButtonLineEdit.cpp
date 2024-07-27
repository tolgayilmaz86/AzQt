/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */
#include <AzQtComponents/Components/ToolButtonLineEdit.h>

#include <QLineEdit>

namespace AzQtComponents
{
    ToolButtonLineEdit::ToolButtonLineEdit(QWidget* parent)
        : ToolButtonWithWidget(new QLineEdit(), parent)
        , m_lineEdit(static_cast<QLineEdit*>(widget()))
    {
        m_lineEdit->setProperty("class", "ToolButtonLineEdit");
    }

    void ToolButtonLineEdit::clear()
    {
        m_lineEdit->clear();
    }

    QString ToolButtonLineEdit::text() const
    {
        return m_lineEdit->text();
    }

    void ToolButtonLineEdit::setText(const QString& text)
    {
        m_lineEdit->setText(text);
    }

    void ToolButtonLineEdit::setPlaceholderText(const QString& text)
    {
        m_lineEdit->setPlaceholderText(text);
    }

    QLineEdit* ToolButtonLineEdit::lineEdit() const
    {
        return m_lineEdit;
    }

} // namespace AzQtComponents
