/** @file
 *  @brief MAVLink comm protocol built from ASLUAV.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_H
#define MAVLINK_H

#define MAVLINK_PRIMARY_XML_IDX 0

#ifndef MAVLINK_STX
// FIXED BY GANGTI/20190109/MAVLINK CUSTOMIZATION
#define MAVLINK_STX 223
// CLOSE BY GANGTI/20190109/MAVLINK CUSTOMIZATION
#endif

#ifndef MAVLINK_ENDIAN
#define MAVLINK_ENDIAN MAVLINK_LITTLE_ENDIAN
#endif

#ifndef MAVLINK_ALIGNED_FIELDS
#define MAVLINK_ALIGNED_FIELDS 1
#endif

#ifndef MAVLINK_CRC_EXTRA
#define MAVLINK_CRC_EXTRA 1
#endif

#ifndef MAVLINK_COMMAND_24BIT
#define MAVLINK_COMMAND_24BIT 1
#endif

#include "version.h"
#include "ASLUAV.h"

#endif // MAVLINK_H
