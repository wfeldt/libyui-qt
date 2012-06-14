/*
  |****************************************************************************
  |
  | Copyright (c) 2000 - 2012 Novell, Inc.
  | All Rights Reserved.
  |
  | This program is free software; you can redistribute it and/or
  | modify it under the terms of version 2 of the GNU General Public License as
  | published by the Free Software Foundation.
  |
  | This program is distributed in the hope that it will be useful,
  | but WITHOUT ANY WARRANTY; without even the implied warranty of
  | MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.   See the
  | GNU General Public License for more details.
  |
  | You should have received a copy of the GNU General Public License
  | along with this program; if not, contact Novell, Inc.
  |
  | To contact Novell about this file by physical or electronic mail,
  | you may find current contact information at www.novell.com
  |
  |****************************************************************************
*/


/*-/

  File:	      YQLayoutBox.h

  Author:     Stefan Hundhammer <sh@suse.de>

/-*/


#ifndef YQLayoutBox_h
#define YQLayoutBox_h

#include <qwidget.h>

#include "YLayoutBox.h"


class YQLayoutBox : public QWidget, public YLayoutBox
{
    Q_OBJECT

public:

    /**
     * Constructor.
     *
     * Creates a VBox for dim == YD_VERT or a HBox for YD_HORIZ.
     **/
    YQLayoutBox( YWidget * parent, YUIDimension dim );

    /**
     * Destructor.
     **/
    virtual ~YQLayoutBox();

    /**
     * Set enabled/disabled state.
     *
     * Reimplemented from YWidget.
     **/
    virtual void setEnabled( bool enabled );

    /**
     * Set the new size of the widget.
     *
     * Reimplemented from YWidget.
     **/
    virtual void setSize( int newWidth, int newHeight );

    /**
     * Move a child widget to a new position.
     *
     * Reimplemented from YLayoutBox.
     **/
    virtual void moveChild( YWidget * child, int newX, int newY );
};


typedef YQLayoutBox	YQVBox;
typedef YQLayoutBox	YQHBox;


#endif // YQLayoutBox_h
