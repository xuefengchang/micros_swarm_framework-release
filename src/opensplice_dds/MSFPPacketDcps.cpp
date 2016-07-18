//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: MSFPPacketDcps.cpp
//  Source: gencxx/MSFPPacketDcps.idl
//  Generated: Mon Jul 11 22:29:42 2016
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************

#include "opensplice_dds/MSFPPacketDcps.h"

#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUVLSeq < micros_swarm_framework::MSFPPacket, struct MSFPPacketSeq_uniq_>;
#endif

const char * micros_swarm_framework::MSFPPacketTypeSupportInterface::_local_id = "IDL:micros_swarm_framework/MSFPPacketTypeSupportInterface:1.0";

micros_swarm_framework::MSFPPacketTypeSupportInterface_ptr micros_swarm_framework::MSFPPacketTypeSupportInterface::_duplicate (micros_swarm_framework::MSFPPacketTypeSupportInterface_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean micros_swarm_framework::MSFPPacketTypeSupportInterface::_local_is_a (const char * _id)
{
   if (strcmp (_id, micros_swarm_framework::MSFPPacketTypeSupportInterface::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::TypeSupport NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

micros_swarm_framework::MSFPPacketTypeSupportInterface_ptr micros_swarm_framework::MSFPPacketTypeSupportInterface::_narrow (DDS::Object_ptr p)
{
   micros_swarm_framework::MSFPPacketTypeSupportInterface_ptr result = NULL;
   if (p && p->_is_a (micros_swarm_framework::MSFPPacketTypeSupportInterface::_local_id))
   {
      result = dynamic_cast < micros_swarm_framework::MSFPPacketTypeSupportInterface_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

micros_swarm_framework::MSFPPacketTypeSupportInterface_ptr micros_swarm_framework::MSFPPacketTypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
   micros_swarm_framework::MSFPPacketTypeSupportInterface_ptr result;
   result = dynamic_cast < micros_swarm_framework::MSFPPacketTypeSupportInterface_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * micros_swarm_framework::MSFPPacketDataWriter::_local_id = "IDL:micros_swarm_framework/MSFPPacketDataWriter:1.0";

micros_swarm_framework::MSFPPacketDataWriter_ptr micros_swarm_framework::MSFPPacketDataWriter::_duplicate (micros_swarm_framework::MSFPPacketDataWriter_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean micros_swarm_framework::MSFPPacketDataWriter::_local_is_a (const char * _id)
{
   if (strcmp (_id, micros_swarm_framework::MSFPPacketDataWriter::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataWriter NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

micros_swarm_framework::MSFPPacketDataWriter_ptr micros_swarm_framework::MSFPPacketDataWriter::_narrow (DDS::Object_ptr p)
{
   micros_swarm_framework::MSFPPacketDataWriter_ptr result = NULL;
   if (p && p->_is_a (micros_swarm_framework::MSFPPacketDataWriter::_local_id))
   {
      result = dynamic_cast < micros_swarm_framework::MSFPPacketDataWriter_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

micros_swarm_framework::MSFPPacketDataWriter_ptr micros_swarm_framework::MSFPPacketDataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
   micros_swarm_framework::MSFPPacketDataWriter_ptr result;
   result = dynamic_cast < micros_swarm_framework::MSFPPacketDataWriter_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * micros_swarm_framework::MSFPPacketDataReader::_local_id = "IDL:micros_swarm_framework/MSFPPacketDataReader:1.0";

micros_swarm_framework::MSFPPacketDataReader_ptr micros_swarm_framework::MSFPPacketDataReader::_duplicate (micros_swarm_framework::MSFPPacketDataReader_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean micros_swarm_framework::MSFPPacketDataReader::_local_is_a (const char * _id)
{
   if (strcmp (_id, micros_swarm_framework::MSFPPacketDataReader::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataReader NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

micros_swarm_framework::MSFPPacketDataReader_ptr micros_swarm_framework::MSFPPacketDataReader::_narrow (DDS::Object_ptr p)
{
   micros_swarm_framework::MSFPPacketDataReader_ptr result = NULL;
   if (p && p->_is_a (micros_swarm_framework::MSFPPacketDataReader::_local_id))
   {
      result = dynamic_cast < micros_swarm_framework::MSFPPacketDataReader_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

micros_swarm_framework::MSFPPacketDataReader_ptr micros_swarm_framework::MSFPPacketDataReader::_unchecked_narrow (DDS::Object_ptr p)
{
   micros_swarm_framework::MSFPPacketDataReader_ptr result;
   result = dynamic_cast < micros_swarm_framework::MSFPPacketDataReader_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * micros_swarm_framework::MSFPPacketDataReaderView::_local_id = "IDL:micros_swarm_framework/MSFPPacketDataReaderView:1.0";

micros_swarm_framework::MSFPPacketDataReaderView_ptr micros_swarm_framework::MSFPPacketDataReaderView::_duplicate (micros_swarm_framework::MSFPPacketDataReaderView_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean micros_swarm_framework::MSFPPacketDataReaderView::_local_is_a (const char * _id)
{
   if (strcmp (_id, micros_swarm_framework::MSFPPacketDataReaderView::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataReaderView NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

micros_swarm_framework::MSFPPacketDataReaderView_ptr micros_swarm_framework::MSFPPacketDataReaderView::_narrow (DDS::Object_ptr p)
{
   micros_swarm_framework::MSFPPacketDataReaderView_ptr result = NULL;
   if (p && p->_is_a (micros_swarm_framework::MSFPPacketDataReaderView::_local_id))
   {
      result = dynamic_cast < micros_swarm_framework::MSFPPacketDataReaderView_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

micros_swarm_framework::MSFPPacketDataReaderView_ptr micros_swarm_framework::MSFPPacketDataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
   micros_swarm_framework::MSFPPacketDataReaderView_ptr result;
   result = dynamic_cast < micros_swarm_framework::MSFPPacketDataReaderView_ptr> (p);
   if (result) result->m_count++;
   return result;
}



