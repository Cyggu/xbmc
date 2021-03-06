#pragma once
/*
 *      Copyright (C) 2012-2013 Team XBMC
 *      http://kodi.tv
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with XBMC; see the file COPYING.  If not, see
 *  <http://www.gnu.org/licenses/>.
 *
 */

#include <android/input.h>

class CAndroidMouse
{

public:
  CAndroidMouse();
  virtual ~CAndroidMouse();
  bool onMouseEvent(AInputEvent* event);

protected:

private:
  void MouseMove(float x, float y);
  void MouseButton(float x, float y, int32_t type, int32_t buttons);
  void MouseWheel(float x, float y, float value);

private:
  int32_t m_lastButtonState;
};
