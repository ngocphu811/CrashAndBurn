/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.1 at Mon Feb 16 22:37:28 2015. */

#ifndef PB_SERVER_TO_CAR_PB_H_INCLUDED
#define PB_SERVER_TO_CAR_PB_H_INCLUDED
#include <pb.h>

#include "common.pb.h"

#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _ServerMessage_MessageType {
    ServerMessage_MessageType_STATUS_QUERY = 0,
    ServerMessage_MessageType_SET_LED_COLOUR_CMD = 1,
    ServerMessage_MessageType_SET_IS_ACTIVE_CMD = 2,
    ServerMessage_MessageType_SHOOT_FIRE_CMD = 3
} ServerMessage_MessageType;

/* Struct definitions */
typedef struct _ServerMessage {
    ServerMessage_MessageType type;
    bool has_ledColour;
    uint32_t ledColour;
    bool has_isActive;
    bool isActive;
    bool has_fireType;
    FireType fireType;
} ServerMessage;

/* Default values for struct fields */
extern const uint32_t ServerMessage_ledColour_default;
extern const bool ServerMessage_isActive_default;
extern const FireType ServerMessage_fireType_default;

/* Initializer values for message structs */
#define ServerMessage_init_default               {(ServerMessage_MessageType)0, false, 0u, false, false, false, FireType_NO_FIRE}
#define ServerMessage_init_zero                  {(ServerMessage_MessageType)0, false, 0, false, 0, false, (FireType)0}

/* Field tags (for use in manual encoding/decoding) */
#define ServerMessage_type_tag                   1
#define ServerMessage_ledColour_tag              2
#define ServerMessage_isActive_tag               3
#define ServerMessage_fireType_tag               4

/* Struct field encoding specification for nanopb */
extern const pb_field_t ServerMessage_fields[5];

/* Maximum encoded size of messages (where known) */
#define ServerMessage_size                       20

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
