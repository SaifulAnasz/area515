#ifndef __IOPAUD_DEFINES
#define __IOPAUD_DEFINES

typedef enum
{
    CFXTYPE_ELEMENT,
    CFXTYPE_ELEMENT_STREAM,
    CFXTYPE_ELEMENT_HYBRID,
    CFXTYPE_COMPLEX,
    CFXTYPE_COMPLEX_LOOP,
    CFXTYPE_HOST_STREAM,
} cfxtype;

typedef enum
{
    CFXSTAT_IDLE,
    CFXSTAT_STARTING,
    CFXSTAT_PLAYING,
    CFXSTAT_STOPPING,
    CFXSTAT_EXPIRED,
} cfxstat;

typedef enum 
{
    STREAMSTAT_IDLE=0,
    STREAMSTAT_STARTING,
    STREAMSTAT_PLAYING,
    STREAMSTAT_DELAYED,
    STREAMSTAT_STOPPING,
} streamstat;

typedef enum
{
    VSTAT_FREE = 0,
    VSTAT_IDLE,
    VSTAT_STARTING,
    VSTAT_PLAYING,
    VSTAT_STOPPING,
    VSTAT_PAUSED,
} voicestat;

#endif