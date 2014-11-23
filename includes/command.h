//
// AMX Mod X, based on AMX Mod by Aleksander Naszko ("OLO").
// Copyright (C) The AMX Mod X Development Team.
//
// This software is licensed under the GNU General Public License, version 3 or higher.
// Additional exceptions apply. For full license details, see LICENSE.txt or visit:
//     https://alliedmods.net/amxmodx-license

//
// Okapi Module
//

#ifndef __COMMAND_H__
#define __COMMAND_H__

#include <game_library.h>

class Command
{
	public:

		virtual void show_help() = 0;
		virtual void exec() = 0;
		virtual const char* get_description() = 0;
};

int parseHex(char *s);

#endif // __COMMAND_H__

