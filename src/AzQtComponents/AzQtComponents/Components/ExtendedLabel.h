/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */

#pragma once

#if !defined(Q_MOC_RUN)

#include <QLabel>

#include <AzQtComponents/AzQtComponentsAPI.h>
#endif

//! An improved QLabel control with better QPixmap resize functionality and click signal
/*!
    ExtendedLabel allows to automatically downscale its QPixmap
    while preserving image's aspect ratio. The maximum QPixmap size is set
    to the minimum of [QLabel size] OR [maxPixMapWidth and maxPixMapHeight values].
*/
namespace AzQtComponents
{
    class AZ_QT_COMPONENTS_API ExtendedLabel
        : public QLabel
    {
        Q_OBJECT

    public:
        explicit ExtendedLabel(QWidget* parent = nullptr);

        int heightForWidth(int width) const override;

    public Q_SLOTS:
        void setPixmap(const QPixmap& p);
        void setPixmapKeepAspectRatio(const QPixmap& pixmap);
        void setText(const QString& text);
        void resizeEvent(QResizeEvent* event) override;

    Q_SIGNALS:
        void clicked();

    protected:
        void mousePressEvent(QMouseEvent* event) override;

    private:
        QPixmap m_pix;
        QSize m_pixmapSize;

        bool m_keepAspectRatio = false;

        void rescale();

        static double aspectRatio(int w, int h);
    };
}
