/*
	Copyright 2012 bigbiff/Dees_Troy TeamWin
	This file is part of TWRP/TeamWin Recovery Project.

	TWRP is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	TWRP is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with TWRP.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _OPENRECOVERYSCRIPT_HPP
#define _OPENRECOVERYSCRIPT_HPP

#include <string>

using namespace std;

// Partition class
class OpenRecoveryScript {
	public:
		// Checks to see if the ORS file is present in /cache
		static int check_for_script_file();                                            
		// Executes the commands in the ORS file
		static int run_script_file();
		// Inserts the Command into the SCRIPT_FILE_TMP file
		static int Insert_ORS_Command(string Command);
		// Installs a zip
		static int Install_Command(string Zip);                                        
		// Attempts to locate the zip file in storage
		static string Locate_Zip_File(string Path, string File);                       
		// Runs a backup
		static int Backup_Command(string Options);
		// Starts the GUI Page for running OpenRecoveryScript                                 
		static void Run_OpenRecoveryScript();
};

#endif // _OPENRECOVERYSCRIPT_HPP
