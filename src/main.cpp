/*
* Copyright 2012 Gwenael Pluchon <gwenael.pluchon@gmail.com>
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#include "DebugManager/Dbg.hpp"

int main(int argc, char const *argv[])
{
	//parse the content of the config file to get the information about what to display
	Dbg::init("config/debug.conf");


	Dbg::out("init")<< "Starting point" <<std::endl;

	return 0;
}