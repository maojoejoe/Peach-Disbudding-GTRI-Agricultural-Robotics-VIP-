
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CameraInfo_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef CameraInfo_Support_1321034346_h
#define CameraInfo_Support_1321034346_h

/* Uses */
#include "CameraInfo_.h"

#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_sensor_msgs)

class __declspec(dllimport) DDSTypeSupport;
class __declspec(dllimport) DDSDataWriter;
class __declspec(dllimport) DDSDataReader;

#endif

namespace sensor_msgs {
    namespace msg {
        namespace dds_ {
            /* ========================================================================= */
            /**
            Uses:     T

            Defines:  TTypeSupport, TDataWriter, TDataReader

            Organized using the well-documented "Generics Pattern" for
            implementing generics in C and C++.
            */

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_sensor_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)

            #endif

            DDS_TYPESUPPORT_CPP(
                CameraInfo_TypeSupport, 
                CameraInfo_);

            DDS_DATAWRITER_CPP(CameraInfo_DataWriter, CameraInfo_);
            DDS_DATAREADER_CPP(CameraInfo_DataReader, CameraInfo_Seq, CameraInfo_);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_sensor_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace sensor_msgs  */

#endif  /* CameraInfo_Support_1321034346_h */

