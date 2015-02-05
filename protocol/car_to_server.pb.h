/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.1 at Thu Jan 15 18:44:33 2015. */

#ifndef PB_CAR_TO_SERVER_PB_H_INCLUDED
#define PB_CAR_TO_SERVER_PB_H_INCLUDED
#include <pb.h>

#include "common.pb.h"

#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _CarMessage_MessageType {
    CarMessage_MessageType_COLLISION_EVENT = 0,
    CarMessage_MessageType_FIRE_SHOT_EVENT = 1,
    CarMessage_MessageType_TIPPING_OVER_EVENT = 2,
    CarMessage_MessageType_LOCAL_DEADMAN_EVENT = 3,
    CarMessage_MessageType_CAR_STATUS_INFO = 4
} CarMessage_MessageType;

typedef enum _CarMessage_TeamType {
    CarMessage_TeamType_NO_TEAM = 0,
    CarMessage_TeamType_SPARKLE_TEAM = 1,
    CarMessage_TeamType_DEATH_TEAM = 2
} CarMessage_TeamType;

/* Struct definitions */
typedef struct _CarMessage {
    CarMessage_MessageType type;
    bool has_accelX;
    float accelX;
    bool has_accelY;
    float accelY;
    bool has_accelZ;
    float accelZ;
    bool has_fireType;
    FireType fireType;
    bool has_isFireLive;
    bool isFireLive;
    bool has_carId;
    int32_t carId;
    bool has_isActiveStatus;
    bool isActiveStatus;
    bool has_isFireLiveStatus;
    bool isFireLiveStatus;
    bool has_teamStatus;
    CarMessage_TeamType teamStatus;
    bool has_ledColour;
    uint32_t ledColour;
} CarMessage;

/* Default values for struct fields */
extern const float CarMessage_accelX_default;
extern const float CarMessage_accelY_default;
extern const float CarMessage_accelZ_default;
extern const FireType CarMessage_fireType_default;
extern const bool CarMessage_isFireLive_default;
extern const int32_t CarMessage_carId_default;
extern const bool CarMessage_isActiveStatus_default;
extern const bool CarMessage_isFireLiveStatus_default;
extern const CarMessage_TeamType CarMessage_teamStatus_default;
extern const uint32_t CarMessage_ledColour_default;

/* Initializer values for message structs */
#define CarMessage_init_default                  {(CarMessage_MessageType)0, false, 0, false, 0, false, 0, false, FireType_NO_FIRE, false, false, false, -1, false, false, false, false, false, CarMessage_TeamType_NO_TEAM, false, 0u}
#define CarMessage_init_zero                     {(CarMessage_MessageType)0, false, 0, false, 0, false, 0, false, (FireType)0, false, 0, false, 0, false, 0, false, 0, false, (CarMessage_TeamType)0, false, 0}

/* Field tags (for use in manual encoding/decoding) */
#define CarMessage_type_tag                      1
#define CarMessage_accelX_tag                    2
#define CarMessage_accelY_tag                    3
#define CarMessage_accelZ_tag                    4
#define CarMessage_fireType_tag                  5
#define CarMessage_isFireLive_tag                6
#define CarMessage_carId_tag                     7
#define CarMessage_isActiveStatus_tag            8
#define CarMessage_isFireLiveStatus_tag          9
#define CarMessage_teamStatus_tag                10
#define CarMessage_ledColour_tag                 11

/* Struct field encoding specification for nanopb */
extern const pb_field_t CarMessage_fields[12];

/* Maximum encoded size of messages (where known) */
#define CarMessage_size                          51

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
