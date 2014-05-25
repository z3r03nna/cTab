// cTab - Commander's Tablet with FBCB2 Blue Force Tracking
// Battlefield tablet to access real time intel and blue force tracker.
// By - Riouken
// http://forums.bistudio.com/member.php?64032-Riouken
// You may re-use any of this work as long as you provide credit back to me.


disableSerialization;

//#include <\cTab\cTab_gui_macros.hpp>
//#include <\cTab\usermenu_gui_macros.hpp>

_dsp = _this select 0;
_mainPop = _this select 1;
_cntrlScreen = _this select 2;
_sendingCtrlArry = _this select 3;


_display = (uiNamespace getVariable _dsp);
_mainPopup = _display displayCtrl _mainPop; // 3300
_cntrlScreen = _display displayCtrl _cntrlScreen;  // 1201

_xpos = _sendingCtrlArry select 2;
_ypos = _sendingCtrlArry select 3;

cTabUserPos = [_xpos,_ypos];

_tempWorldPos = _cntrlScreen  posScreenToWorld [_xpos,_ypos];
cTabUserSelIcon set [0,_tempWorldPos];

_dateAry = date;
_time = format["%1:%2",(_dateAry select 3),(_dateAry select 4)];
cTabUserSelIcon set [5,_time];

_mainPopup ctrlShow True;
_mainPopup ctrlSetPosition [_xpos, _ypos];
_mainPopup ctrlCommit 0;


