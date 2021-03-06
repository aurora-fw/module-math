# ┌─┐┬ ┬┬─┐┌─┐┬─┐┌─┐  ┌─┐┬─┐┌─┐┌┬┐┌─┐┬ ┬┌─┐┬─┐┬┌─
# ├─┤│ │├┬┘│ │├┬┘├─┤  ├┤ ├┬┘├─┤│││├┤ ││││ │├┬┘├┴┐
# ┴ ┴└─┘┴└─└─┘┴└─┴ ┴  └  ┴└─┴ ┴┴ ┴└─┘└┴┘└─┘┴└─┴ ┴
# A Powerful General Purpose Framework
# More information in: https://aurora-fw.github.io/
#
# Copyright (C) 2017 Aurora Framework, All rights reserved.
#
# This file is part of the Aurora Framework. This framework is free
# software; you can redistribute it and/or modify it under the terms of
# the GNU Lesser General Public License version 3 as published by the
# Free Software Foundation and appearing in the file LICENSE included in
# the packaging of this file. Please review the following information to
# ensure the GNU Lesser General Public License version 3 requirements
# will be met: https://www.gnu.org/licenses/lgpl-3.0.html.

message(STATUS "Loading math module...")

if (NOT CONFIGURED_ONCE)
	set(AURORAFW_MODULE_MATH_SOURCE_DIR ${AURORAFW_MODULE_MATH_DIR}/src)
endif()

include_directories(${AURORAFW_MODULE_MATH_DIR}/include)

file(GLOB_RECURSE AURORAFW_MODULE_MATH_HEADERS ${AURORAFW_MODULE_MATH_DIR}/include/*.*)
file(GLOB_RECURSE AURORAFW_MODULE_MATH_SOURCE ${AURORAFW_MODULE_MATH_SOURCE_DIR}/*.*)

#add_library (aurorafw-math SHARED ${AURORAFW_MODULE_MATH_SOURCE} ${AURORAFW_MODULE_MATH_HEADERS})
if(AURORAFW_PCH)
	add_precompiled_header(aurorafw-math "${AURORAFW_MODULE_MATH_HEADERS}")
endif()

#set_target_properties(aurorafw-math PROPERTIES OUTPUT_NAME aurorafw-math)
