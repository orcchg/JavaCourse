/** 
 *   HTTP Server
 *
 *   Copyright (C) 2016  Maxim Alov
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software Foundation,
 *   Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
 *
 *   This program and text files composing it, and/or compiled binary files
 *   (object files, shared objects, binary executables) obtained from text
 *   files of this program using compiler, as well as other files (text, images, etc.)
 *   composing this program as a software project, or any part of it,
 *   cannot be used by 3rd-parties in any commercial way (selling for money or for free,
 *   advertising, commercial distribution, promotion, marketing, publishing in media, etc.).
 *   Only the original author - Maxim Alov - has right to do any of the above actions.
 */

#include "common.h"

const char* PATH_ALL    = D_PATH_ALL;
const char* PATH_GENRES = D_PATH_GENRES;
const char* PATH_GENRE  = D_PATH_GENRE;
const char* PATH_SINGLE = D_PATH_SINGLE;
const char* PATH_TOTAL  = D_PATH_TOTAL;
const char* PATH_TOTAL_GENRES = D_PATH_TOTAL_GENRES;

namespace common {

std::string arrayToJson(const std::vector<const Jsonable*>& array) {
  std::ostringstream oss;
  const char* delim = "";
  oss << "[";
  for (auto& item : array) {
    oss << delim << item->toJson();
    delim = ",";
  }
  oss << "]";
  return oss.str();
}

std::string whitespaceSeparated(const std::vector<std::string>& array) {
  std::ostringstream oss;
  const char* delim = "";
  for (auto& item : array) {
    oss << delim << item;
    delim = " ";
  }
  return oss.str();
}

}  // namespace common

