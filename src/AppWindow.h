//========================================================================
//	AppWindow.h
//	
//	Copyright 2005-2009 Sergey Kazenyuk, All Rights Reserved.
//	Distributed under the terms of the MIT License.
//========================================================================
//	$Id: AppWindow.h 11 2009-02-01 16:13:11Z sergey.kazenyuk $
//	$Rev: 11 $
//	$Author: sergey.kazenyuk $
//	$Date: 2009-02-01 18:13:11 +0200 (Sun, 01 Feb 2009) $
//========================================================================

#ifndef APPWINDOW_H
#define APPWINDOW_H

#include <Button.h>
#include <CheckBox.h>
#include <Menu.h>
#include <MenuItem.h>
#include <TextControl.h>
#include <Window.h>

#include "AppView.h"
#include "RandoBox.h"
#include "RandoTextView.h"
#include "RandoMenuBar.h"

//====================================================================

class AppWindow : public BWindow
{
	public:
						AppWindow(BRect frame);
		virtual void	MessageReceived(BMessage* message);
		virtual bool	QuitRequested();
	private:
				void	SetupMenuBar();	//Menu bar setup
		
		//Menu bar
		RandoMenuBar	*MenuBar;
		BMenu			*FileMenu;
		BMenuItem		*AboutFileMenuItem;
		BMenuItem		*QuitFileMenuItem;
		
		AppView			*MainView;
		RandoTextView	*PassOut;		//Generated password output
		BButton			*GenerateBtn;
		BTextControl	*PassLength;
		RandoBox		*ParamsBox;
		BCheckBox		*UpperCaseCB;
		BCheckBox		*LowerCaseCB;
		BCheckBox		*NumCB;
		BCheckBox		*SpecSymbCB;
		BCheckBox		*CustSymbCB;	//Custom symbols checkbox
		BTextControl	*CustSymb;		//Custom symbols input field		
};
	
#endif

