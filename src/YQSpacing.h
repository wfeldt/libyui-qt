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

  File:	      YQSpacing.h

  Author:     Stefan Hundhammer <sh@suse.de>

/-*/

#ifndef YQSpacing_h
#define YQSpacing_h

#include <qwidget.h>
#include "YSpacing.h"


class YQSpacing : public QWidget, public YSpacing
{
    Q_OBJECT

public:
    /**
     * Constructor.
     **/
    YQSpacing( YWidget *	parent,
	       YUIDimension 	dim,
	       bool 		stretchable	= false,
	       YLayoutSize_t 	layoutUnits	= 0.0 );

    virtual ~YQSpacing();

    /**
     * Set the new size of the widget.
     *
     * Reimplemented from YWidget.
     **/
    virtual void setSize( int newWidth, int newHeight );
};


#endif // YQSpacing_h
