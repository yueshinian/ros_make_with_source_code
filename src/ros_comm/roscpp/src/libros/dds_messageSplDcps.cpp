#include "ros/dds_messageSplDcps.h"
#include "ros/ccpp_dds_message.h"
#include "dds_type_aliases.h"

const char *
__ROSDDS_Msg__name(void)
{
    return (const char*)"ROSDDS::Msg";
}

const char *
__ROSDDS_Msg__keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__ROSDDS_OctSeq__copyIn(
    c_base base,
    ::ROSDDS::OctSeq *from,
    _ROSDDS_OctSeq *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

/* Code generated by /home/dev/OpenSpliceDDS6.4/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 2411 */

    static c_type type0 = NULL;
    c_type subtype0 = NULL;
    c_long length0;
    c_octet *dest0;

    if (type0 == NULL) {
        subtype0 = c_type(c_metaResolve (c_metaObject(base), "c_octet"));
        type0 = c_metaSequenceTypeNew(c_metaObject(base),"C_SEQUENCE<c_octet>",subtype0,0);
        c_free(subtype0);
    }
    length0 = (c_long)(*from).length();
#ifdef OSPL_BOUNDS_CHECK
    dest0 = (c_octet *)c_newSequence(c_collectionType(type0), length0);
    {
    /* Code generated by /home/dev/OpenSpliceDDS6.4/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 1873 */
            c_octet *buf0;
        buf0 = (c_octet *)(*from).get_buffer();
        memcpy (dest0,buf0,length0* sizeof(*dest0));
    }
    *to = (_ROSDDS_OctSeq)dest0;
#else
    dest0 = (c_octet *)c_newSequence(c_collectionType(type0), length0);
    {
    /* Code generated by /home/dev/OpenSpliceDDS6.4/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 1873 */
            c_octet *buf0;
        buf0 = (c_octet *)(*from).get_buffer();
        memcpy (dest0,buf0,length0* sizeof(*dest0));
    }
    *to = (_ROSDDS_OctSeq)dest0;
#endif
    return result;
}

c_bool
__ROSDDS_Msg__copyIn(
    c_base base,
    struct ::ROSDDS::Msg *from,
    struct _ROSDDS_Msg *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    if(result){
        extern c_bool __ROSDDS_OctSeq__copyIn(c_base, ::ROSDDS::OctSeq *, _ROSDDS_OctSeq *);
        result = __ROSDDS_OctSeq__copyIn(base, &from->message, &to->message);
    }
    return result;
}

void
__ROSDDS_OctSeq__copyOut(
    void *_from,
    void *_to)
{
    _ROSDDS_OctSeq *from = (_ROSDDS_OctSeq *)_from;
    ::ROSDDS::OctSeq *to = (::ROSDDS::OctSeq *)_to;
    long size0;
    c_octet *src0 = (c_octet *)(*from);

    size0 = c_arraySize(c_sequence(src0));
    (*to).length(size0);
    {
        c_octet *buf0;
        buf0 = (c_octet *)(*to).get_buffer();
        memcpy (buf0,src0,size0* sizeof(*buf0));
    }
}

void
__ROSDDS_Msg__copyOut(
    void *_from,
    void *_to)
{
    struct _ROSDDS_Msg *from = (struct _ROSDDS_Msg *)_from;
    struct ::ROSDDS::Msg *to = (struct ::ROSDDS::Msg *)_to;
    {
        extern void __ROSDDS_OctSeq__copyOut(void *, void *);
        __ROSDDS_OctSeq__copyOut((void *)&from->message, (void *)&to->message);
    }
}
