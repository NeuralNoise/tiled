/*
 * templatesdock.h
 * Copyright 2017, Thorbjørn Lindeijer <thorbjorn@lindeijer.nl>
 * Copyright 2017, Mohamed Thabet <thabetx@gmail.com>
 *
 * This file is part of Tiled.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2 of the License, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program. If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <QDockWidget>
#include <QListView>
#include <QAction>

class QAbstractProxyModel;

namespace Tiled {

class TemplateGroup;

namespace Internal {

class TemplatesView;

class TemplatesDock : public QDockWidget
{
    Q_OBJECT

public:
    TemplatesDock(QWidget *parent = nullptr);

private:
    void retranslateUi();

    QAction *mActionNewTemplateGroup;
    TemplatesView *mTemplatesView;
};

class TemplatesView : public QListView
{
    Q_OBJECT

public:
    QSize sizeHint() const override;
    TemplatesView(QWidget *parent = nullptr);

private:
    QAbstractProxyModel *mProxyModel;
};

} // namespace Internal
} // namespace Tiled