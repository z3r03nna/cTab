// cTab - Commander's Tablet with FBCB2 Blue Force Tracking
// Battlefield tablet to access real time intel and blue force tracker.
// By - Riouken
// http://forums.bistudio.com/member.php?64032-Riouken
// You may re-use any of this work as long as you provide credit back to me.


/* #Jufuca
$[
	1.062,
	["cTab",[["safezoneX","safezoneY","safezoneW","safezoneH"],"safezoneW / 40","safezoneH / 25","GUI_GRID"],3,1,0],
	[1200,"background",[2,"\cTab\img\15th_rugged_tab.paa",["5.71 * GUI_GRID_W + GUI_GRID_X","-0.74 * GUI_GRID_H + GUI_GRID_Y","27.5 * GUI_GRID_W","26.5 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1600,"btnF1",[2,"",["14.29 * GUI_GRID_W + GUI_GRID_X","19.5 * GUI_GRID_H + GUI_GRID_Y","0.683335 * GUI_GRID_W","0.731482 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1601,"btnF2",[2,"",["15.19 * GUI_GRID_W + GUI_GRID_X","19.5 * GUI_GRID_H + GUI_GRID_Y","0.683335 * GUI_GRID_W","0.731482 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1602,"btnF3",[2,"",["16.07 * GUI_GRID_W + GUI_GRID_X","19.49 * GUI_GRID_H + GUI_GRID_Y","0.683335 * GUI_GRID_W","0.731482 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1603,"btnF4",[2,"",["16.94 * GUI_GRID_W + GUI_GRID_X","19.49 * GUI_GRID_H + GUI_GRID_Y","0.683335 * GUI_GRID_W","0.731482 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1604,"btnF5",[2,"",["17.84 * GUI_GRID_W + GUI_GRID_X","19.49 * GUI_GRID_H + GUI_GRID_Y","0.683335 * GUI_GRID_W","0.731482 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1605,"btnF6",[2,"",["18.71 * GUI_GRID_W + GUI_GRID_X","19.49 * GUI_GRID_H + GUI_GRID_Y","0.683335 * GUI_GRID_W","0.731482 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1606,"btnMain",[2,"",["19.65 * GUI_GRID_W + GUI_GRID_X","19.35 * GUI_GRID_H + GUI_GRID_Y","0.683335 * GUI_GRID_W","0.731482 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1607,"btnFN",[2,"",["20.63 * GUI_GRID_W + GUI_GRID_X","19.51 * GUI_GRID_H + GUI_GRID_Y","0.683335 * GUI_GRID_W","0.731482 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1608,"btnOFF",[2,"",["21.48 * GUI_GRID_W + GUI_GRID_X","19.52 * GUI_GRID_H + GUI_GRID_Y","0.683335 * GUI_GRID_W","0.731482 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1609,"btnUP",[2,"",["22.35 * GUI_GRID_W + GUI_GRID_X","19.51 * GUI_GRID_H + GUI_GRID_Y","0.683335 * GUI_GRID_W","0.731482 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1610,"btnDWN",[2,"",["23.23 * GUI_GRID_W + GUI_GRID_X","19.53 * GUI_GRID_H + GUI_GRID_Y","0.683335 * GUI_GRID_W","0.731482 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1611,"btnACT",[2,"",["26.56 * GUI_GRID_W + GUI_GRID_X","19.49 * GUI_GRID_H + GUI_GRID_Y","1.1625 * GUI_GRID_W","0.824071 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1000,"loadingtxt",[2,"Loading ...",["2.5 * GUI_GRID_W + GUI_GRID_X","5.5 * GUI_GRID_H + GUI_GRID_Y","3 * GUI_GRID_W","1.5 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1001,"actBFTtxt",[2,"Blue Force Tracker",["2.5 * GUI_GRID_W + GUI_GRID_X","7.5 * GUI_GRID_H + GUI_GRID_Y","5 * GUI_GRID_W","1.5 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1002,"actUAVtxt",[2,"UAV Intelagence",["2.5 * GUI_GRID_W + GUI_GRID_X","9 * GUI_GRID_H + GUI_GRID_Y","5 * GUI_GRID_W","1.5 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1003,"actVIDtxt",[2,"Live Video Feeds",["2.5 * GUI_GRID_W + GUI_GRID_X","10.5 * GUI_GRID_H + GUI_GRID_Y","5 * GUI_GRID_W","1.5 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1201,"screen",[2,"#(argb,8,8,3)color(1,1,1,1)",["10.92 * GUI_GRID_W + GUI_GRID_X","5.4 * GUI_GRID_H + GUI_GRID_Y","18.2292 * GUI_GRID_W","13.4444 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]]
]
*/

