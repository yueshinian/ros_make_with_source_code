//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: dds_message.h
//  Source: dds_message.idl
//  Generated: Wed Aug  5 20:37:35 2015
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _DDS_MESSAGE_H_
#define _DDS_MESSAGE_H_

#include "sacpp_mapping.h"
//#include "sacpp_DDS_DCPS.h"


namespace ROSDDS
{
   struct Msg;
   struct OctSeq_uniq_ {};
   typedef DDS_DCPSUFLSeq < DDS::Octet, struct OctSeq_uniq_> OctSeq;
   typedef DDS_DCPSSequence_var < OctSeq> OctSeq_var;
   typedef DDS_DCPSSequence_out < OctSeq> OctSeq_out;

   struct Msg
   {
         OctSeq message;
   };

   typedef DDS_DCPSStruct_var < Msg> Msg_var;
   typedef DDS_DCPSStruct_out < Msg> Msg_out;
}




#endif 