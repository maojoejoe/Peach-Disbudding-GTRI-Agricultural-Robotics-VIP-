
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WrenchStamped_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef WrenchStamped_Support_982260710_h
#define WrenchStamped_Support_982260710_h

/* Uses */
#include "WrenchStamped_.h"

#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_geometry_msgs)

class __declspec(dllimport) DDSTypeSupport;
class __declspec(dllimport) DDSDataWriter;
class __declspec(dllimport) DDSDataReader;

#endif

namespace geometry_msgs {
    namespace msg {
        namespace dds_ {
            /* ========================================================================= */
            /**
            Uses:     T

            Defines:  TTypeSupport, TDataWriter, TDataReader

            Organized using the well-documented "Generics Pattern" for
            implementing generics in C and C++.
            */

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_geometry_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)

            #endif

            DDS_TYPESUPPORT_CPP(
                WrenchStamped_TypeSupport, 
                WrenchStamped_);

            DDS_DATAWRITER_CPP(WrenchStamped_DataWriter, WrenchStamped_);
            DDS_DATAREADER_CPP(WrenchStamped_DataReader, WrenchStamped_Seq, WrenchStamped_);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_geometry_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace geometry_msgs  */

#endif  /* WrenchStamped_Support_982260710_h */

