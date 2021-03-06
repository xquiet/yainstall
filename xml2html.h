/**
    Copyright (C) 2012-2016  Matteo Pasotti <matteo.pasotti@gmail.com>

    This file is part of getaircrafts - Yet Another flightgear Aircraft Installer

    getaircrafts is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    getaircrafts is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
    */

#ifndef XML2HTML_H
#define XML2HTML_H

#include <QXmlStreamReader>
#include <QStringList>

class xml2html
{
public:
    xml2html();
    QString aircraftList(QString data, QStringList filter);
};

#endif // XML2HTML_H
