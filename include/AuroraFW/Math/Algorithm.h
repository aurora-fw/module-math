/****************************************************************************
** ┌─┐┬ ┬┬─┐┌─┐┬─┐┌─┐  ┌─┐┬─┐┌─┐┌┬┐┌─┐┬ ┬┌─┐┬─┐┬┌─
** ├─┤│ │├┬┘│ │├┬┘├─┤  ├┤ ├┬┘├─┤│││├┤ ││││ │├┬┘├┴┐
** ┴ ┴└─┘┴└─└─┘┴└─┴ ┴  └  ┴└─┴ ┴┴ ┴└─┘└┴┘└─┘┴└─┴ ┴
** A Powerful General Purpose Framework
** More information in: https://aurora-fw.github.io/
**
** Copyright (C) 2017 Aurora Framework, All rights reserved.
**
** This file is part of the Aurora Framework. This framework is free
** software; you can redistribute it and/or modify it under the terms of
** the GNU Lesser General Public License version 3 as published by the
** Free Software Foundation and appearing in the file LICENSE included in
** the packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl-3.0.html.
****************************************************************************/

#ifndef AURORAFW_MATH_ALGORITHM_H
#define AURORAFW_MATH_ALGORITHM_H

#include <AuroraFW/Global.h>
#if(AFW_TARGET_PRAGMA_ONCE_SUPPORT)
	#pragma once
#endif

#include <AuroraFW/Internal/Config.h>

#ifdef AFW_TARGET_CXX
namespace AuroraFW {
	namespace Math {
		/**
		 *	Returns the smallest of the two given variables.
		 *	@return The smallest variable between a and b.
		 *	@see inline const T& max()
		 */
		template<class T>
		AFW_API inline const T& min(const T& a, const T& b)
		{
			return (b < a) ? b : a;
		}

		/**
		 *	Returns the biggest of the two given variables.
		 *	@return The biggest variable between a and b.
		 *	@see inline const T& min()
		 */
		template<class T>
		AFW_API inline const T& max(const T& a, const T& b)
		{
			return (a < b) ? b : a;
		}

		/**
		 * 	Clamps the first given variable to the values delimited by the two given variables.
		 *	@return The clamped variable.
		 */
		template<class T>
		AFW_API inline constexpr const T& clamp( const T& v, const T& lo, const T& hi )
		{
			return (v > lo) ? (v < hi) ? v : hi : lo;
		}

		/**
		 * Returns the absolute value of a variable.
		 * @return The absolute value.
		 */
		template<class T>
		AFW_API inline const T abs(const T& v)
		{
			return (v > 0) ? v : -v;
		}
	}
}
#else
inline const int& min(const int& a, const int& b)
{
	return (b < a) ? b : a;
}
inline const int32& min(const int32& a, const int32& b)
{
	return (b < a) ? b : a;
}
#endif

#endif // AURORAFW_MATH_ALGORITHM_H
