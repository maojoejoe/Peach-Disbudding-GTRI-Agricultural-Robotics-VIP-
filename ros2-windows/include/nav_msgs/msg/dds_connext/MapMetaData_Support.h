
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MapMetaData_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef MapMetaData_Support_441916439_h
#define MapMetaData_Support_441916439_h

/* Uses */
#include "MapMetaData_.h"

#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_nav_msgs)

class __declspec(dllimport) DDSTypeSupport;
class __declspec(dllimport) DDSDataWriter;
class __declspec(dllimport) DDSDataReader;

#endif

namespace nav_msgs {
    namespace msg {
        namespace dds_ {
            /* ========================================================================= */
            /**
            Uses:     T

            Defines:  TTypeSupport, TDataWriter, TDataReader

            Organized using the well-documented "Generics Pattern" for
            implementing generics in C and C++.
            */

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_nav_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)

            #endif

            DDS_TYPESUPPORT_CPP(
                MapMetaData_TypeSupport, 
                MapMetaData_);

            DDS_DATAWRITER_CPP(MapMetaData_DataWriter, MapMetaData_);
            DDS_DATAREADER_CPP(MapMetaData_DataReader, MapMetaData_Seq, MapMetaData_);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_nav_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace nav_msgs  */

#endif  /* MapMetaData_Support_441916439_h */

