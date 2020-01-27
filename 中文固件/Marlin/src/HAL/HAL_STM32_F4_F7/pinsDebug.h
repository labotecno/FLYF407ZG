/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2019 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

#ifdef NUM_DIGITAL_PINS             // Only in ST's Arduino core (STM32duino, STM32Core)
  #include "../HAL_STM32/pinsDebug_STM32duino.h"
#elif defined(BOARD_NR_GPIO_PINS)   // Only in STM32GENERIC (Maple)
  #include "../HAL_STM32/pinsDebug_STM32GENERIC.h"
#else
  #error "M43 Pins Debugging not supported for this board."
#endif
