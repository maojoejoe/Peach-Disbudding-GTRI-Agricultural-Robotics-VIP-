
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Defaults_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include <string.h>

#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif

#ifndef osapi_type_h
#include "osapi/osapi_type.h"
#endif
#ifndef osapi_heap_h
#include "osapi/osapi_heap.h"
#endif

#ifndef osapi_utility_h
#include "osapi/osapi_utility.h"
#endif

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif

#ifndef cdr_type_object_h
#include "cdr/cdr_typeObject.h"
#endif

#ifndef cdr_encapsulation_h
#include "cdr/cdr_encapsulation.h"
#endif

#ifndef cdr_stream_h
#include "cdr/cdr_stream.h"
#endif

#ifndef cdr_log_h
#include "cdr/cdr_log.h"
#endif

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#define RTI_CDR_CURRENT_SUBMODULE RTI_CDR_SUBMODULE_MASK_STREAM

#include <new>

#include "Defaults_Plugin.h"

namespace test_msgs {
    namespace msg {
        namespace dds_ {

            /* ----------------------------------------------------------------------------
            *  Type Defaults_
            * -------------------------------------------------------------------------- */

            /* -----------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------- */

            Defaults_*
            Defaults_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params) 
            {
                Defaults_ *sample = NULL;

                sample = new (std::nothrow) Defaults_ ;
                if (sample == NULL) {
                    return NULL;
                }

                if (!test_msgs::msg::dds_::Defaults__initialize_w_params(sample,alloc_params)) {
                    delete  sample;
                    sample=NULL;
                }
                return sample; 
            } 

            Defaults_ *
            Defaults_PluginSupport_create_data_ex(RTIBool allocate_pointers) 
            {
                Defaults_ *sample = NULL;

                sample = new (std::nothrow) Defaults_ ;

                if(sample == NULL) {
                    return NULL;
                }

                if (!test_msgs::msg::dds_::Defaults__initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                    delete  sample;
                    sample=NULL;
                }

                return sample; 
            }

            Defaults_ *
            Defaults_PluginSupport_create_data(void)
            {
                return test_msgs::msg::dds_::Defaults_PluginSupport_create_data_ex(RTI_TRUE);
            }

            void 
            Defaults_PluginSupport_destroy_data_w_params(
                Defaults_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params) {

                test_msgs::msg::dds_::Defaults__finalize_w_params(sample,dealloc_params);

                delete  sample;
                sample=NULL;
            }

            void 
            Defaults_PluginSupport_destroy_data_ex(
                Defaults_ *sample,RTIBool deallocate_pointers) {

                test_msgs::msg::dds_::Defaults__finalize_ex(sample,deallocate_pointers);

                delete  sample;
                sample=NULL;
            }

            void 
            Defaults_PluginSupport_destroy_data(
                Defaults_ *sample) {

                test_msgs::msg::dds_::Defaults_PluginSupport_destroy_data_ex(sample,RTI_TRUE);

            }

            RTIBool 
            Defaults_PluginSupport_copy_data(
                Defaults_ *dst,
                const Defaults_ *src)
            {
                return test_msgs::msg::dds_::Defaults__copy(dst,(const Defaults_*) src);
            }

            void 
            Defaults_PluginSupport_print_data(
                const Defaults_ *sample,
                const char *desc,
                unsigned int indent_level)
            {

                RTICdrType_printIndent(indent_level);

                if (desc != NULL) {
                    RTILog_debug("%s:\n", desc);
                } else {
                    RTILog_debug("\n");
                }

                if (sample == NULL) {
                    RTILog_debug("NULL\n");
                    return;
                }

                RTICdrType_printBoolean(
                    &sample->bool_value_, "bool_value_", indent_level + 1);    

                RTICdrType_printOctet(
                    &sample->byte_value_, "byte_value_", indent_level + 1);    

                RTICdrType_printOctet(
                    &sample->char_value_, "char_value_", indent_level + 1);    

                RTICdrType_printFloat(
                    &sample->float32_value_, "float32_value_", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->float64_value_, "float64_value_", indent_level + 1);    

                RTICdrType_printOctet(
                    &sample->int8_value_, "int8_value_", indent_level + 1);    

                RTICdrType_printOctet(
                    &sample->uint8_value_, "uint8_value_", indent_level + 1);    

                RTICdrType_printShort(
                    &sample->int16_value_, "int16_value_", indent_level + 1);    

                RTICdrType_printUnsignedShort(
                    &sample->uint16_value_, "uint16_value_", indent_level + 1);    

                RTICdrType_printLong(
                    &sample->int32_value_, "int32_value_", indent_level + 1);    

                RTICdrType_printUnsignedLong(
                    &sample->uint32_value_, "uint32_value_", indent_level + 1);    

                RTICdrType_printLongLong(
                    &sample->int64_value_, "int64_value_", indent_level + 1);    

                RTICdrType_printUnsignedLongLong(
                    &sample->uint64_value_, "uint64_value_", indent_level + 1);    

            }

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            PRESTypePluginParticipantData 
            Defaults_Plugin_on_participant_attached(
                void *registration_data,
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration,
                void *container_plugin_context,
                RTICdrTypeCode *type_code)
            {
                if (registration_data) {} /* To avoid warnings */
                if (participant_info) {} /* To avoid warnings */
                if (top_level_registration) {} /* To avoid warnings */
                if (container_plugin_context) {} /* To avoid warnings */
                if (type_code) {} /* To avoid warnings */

                return PRESTypePluginDefaultParticipantData_new(participant_info);

            }

            void 
            Defaults_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data)
            {

                PRESTypePluginDefaultParticipantData_delete(participant_data);
            }

            PRESTypePluginEndpointData
            Defaults_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *containerPluginContext)
            {
                PRESTypePluginEndpointData epd = NULL;

                unsigned int serializedSampleMaxSize;

                if (top_level_registration) {} /* To avoid warnings */
                if (containerPluginContext) {} /* To avoid warnings */

                epd = PRESTypePluginDefaultEndpointData_new(
                    participant_data,
                    endpoint_info,
                    (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                    test_msgs::msg::dds_::Defaults_PluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    test_msgs::msg::dds_::Defaults_PluginSupport_destroy_data,
                    NULL , NULL );

                if (epd == NULL) {
                    return NULL;
                } 

                if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                    serializedSampleMaxSize = test_msgs::msg::dds_::Defaults_Plugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        test_msgs::msg::dds_::Defaults_Plugin_get_serialized_sample_max_size, epd,
                        (PRESTypePluginGetSerializedSampleSizeFunction)
                        test_msgs::msg::dds_::Defaults_Plugin_get_serialized_sample_size,
                        epd) == RTI_FALSE) {
                        PRESTypePluginDefaultEndpointData_delete(epd);
                        return NULL;
                    }
                }

                return epd;    
            }

            void 
            Defaults_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data)
            {  

                PRESTypePluginDefaultEndpointData_delete(endpoint_data);
            }

            void    
            Defaults_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                Defaults_ *sample,
                void *handle)
            {

                Defaults__finalize_optional_members(sample, RTI_TRUE);

                PRESTypePluginDefaultEndpointData_returnSample(
                    endpoint_data, sample, handle);
            }

            RTIBool 
            Defaults_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Defaults_ *dst,
                const Defaults_ *src)
            {
                if (endpoint_data) {} /* To avoid warnings */
                return test_msgs::msg::dds_::Defaults_PluginSupport_copy_data(dst,src);
            }

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */
            unsigned int 
            Defaults_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            RTIBool 
            Defaults_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const Defaults_ *sample, 
                struct RTICdrStream *stream,    
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos)
            {
                char * position = NULL;
                RTIBool retval = RTI_TRUE;

                if (endpoint_data) {} /* To avoid warnings */
                if (endpoint_plugin_qos) {} /* To avoid warnings */

                if(serialize_encapsulation) {
                    if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
                        return RTI_FALSE;
                    }

                    position = RTICdrStream_resetAlignment(stream);
                }

                if(serialize_sample) {

                    if (!RTICdrStream_serializeBoolean(
                        stream, &sample->bool_value_)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializeOctet(
                        stream, &sample->byte_value_)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializeOctet(
                        stream, &sample->char_value_)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializeFloat(
                        stream, &sample->float32_value_)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializeDouble(
                        stream, &sample->float64_value_)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializeOctet(
                        stream, &sample->int8_value_)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializeOctet(
                        stream, &sample->uint8_value_)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializeShort(
                        stream, &sample->int16_value_)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializeUnsignedShort(
                        stream, &sample->uint16_value_)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializeLong(
                        stream, &sample->int32_value_)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializeUnsignedLong(
                        stream, &sample->uint32_value_)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializeLongLong(
                        stream, &sample->int64_value_)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializeUnsignedLongLong(
                        stream, &sample->uint64_value_)) {
                        return RTI_FALSE;
                    }

                }

                if(serialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return retval;
            }

            RTIBool 
            Defaults_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                Defaults_ *sample,
                struct RTICdrStream *stream,   
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos)
            {

                char * position = NULL;

                RTIBool done = RTI_FALSE;

                try {

                    if (endpoint_data) {} /* To avoid warnings */
                    if (endpoint_plugin_qos) {} /* To avoid warnings */
                    if(deserialize_encapsulation) {

                        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                            return RTI_FALSE;
                        }

                        position = RTICdrStream_resetAlignment(stream);
                    }
                    if(deserialize_sample) {

                        test_msgs::msg::dds_::Defaults__initialize_ex(sample, RTI_FALSE, RTI_FALSE);

                        if (!RTICdrStream_deserializeBoolean(
                            stream, &sample->bool_value_)) {
                            goto fin; 
                        }
                        if (!RTICdrStream_deserializeOctet(
                            stream, &sample->byte_value_)) {
                            goto fin; 
                        }
                        if (!RTICdrStream_deserializeOctet(
                            stream, &sample->char_value_)) {
                            goto fin; 
                        }
                        if (!RTICdrStream_deserializeFloat(
                            stream, &sample->float32_value_)) {
                            goto fin; 
                        }
                        if (!RTICdrStream_deserializeDouble(
                            stream, &sample->float64_value_)) {
                            goto fin; 
                        }
                        if (!RTICdrStream_deserializeOctet(
                            stream, &sample->int8_value_)) {
                            goto fin; 
                        }
                        if (!RTICdrStream_deserializeOctet(
                            stream, &sample->uint8_value_)) {
                            goto fin; 
                        }
                        if (!RTICdrStream_deserializeShort(
                            stream, &sample->int16_value_)) {
                            goto fin; 
                        }
                        if (!RTICdrStream_deserializeUnsignedShort(
                            stream, &sample->uint16_value_)) {
                            goto fin; 
                        }
                        if (!RTICdrStream_deserializeLong(
                            stream, &sample->int32_value_)) {
                            goto fin; 
                        }
                        if (!RTICdrStream_deserializeUnsignedLong(
                            stream, &sample->uint32_value_)) {
                            goto fin; 
                        }
                        if (!RTICdrStream_deserializeLongLong(
                            stream, &sample->int64_value_)) {
                            goto fin; 
                        }
                        if (!RTICdrStream_deserializeUnsignedLongLong(
                            stream, &sample->uint64_value_)) {
                            goto fin; 
                        }
                    }

                    done = RTI_TRUE;
                  fin:
                    if (done != RTI_TRUE && 
                    RTICdrStream_getRemainder(stream) >=
                    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                        return RTI_FALSE;   
                    }
                    if(deserialize_encapsulation) {
                        RTICdrStream_restoreAlignment(stream,position);
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            RTIBool
            Defaults_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const Defaults_ *sample)
            {
                struct RTICdrStream stream;
                struct PRESTypePluginDefaultEndpointData epd;
                RTIBool result;

                if (length == NULL) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                Defaults_Plugin_get_serialized_sample_max_size(
                    NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

                if (buffer == NULL) {
                    *length = 
                    Defaults_Plugin_get_serialized_sample_size(
                        (PRESTypePluginEndpointData)&epd,
                        RTI_TRUE,
                        RTICdrEncapsulation_getNativeCdrEncapsulationId(),
                        0,
                        sample);

                    if (*length == 0) {
                        return RTI_FALSE;
                    }

                    return RTI_TRUE;
                }    

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, *length);

                result = test_msgs::msg::dds_::Defaults_Plugin_serialize(
                    (PRESTypePluginEndpointData)&epd, sample, &stream, 
                    RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
                    RTI_TRUE, NULL);  

                *length = RTICdrStream_getCurrentPositionOffset(&stream);
                return result;     
            }

            RTIBool
            Defaults_Plugin_deserialize_from_cdr_buffer(
                Defaults_ *sample,
                const char * buffer,
                unsigned int length)
            {
                struct RTICdrStream stream;

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, length);

                Defaults__finalize_optional_members(sample, RTI_TRUE);
                return Defaults_Plugin_deserialize_sample( 
                    NULL, sample,
                    &stream, RTI_TRUE, RTI_TRUE, 
                    NULL);
            }

            DDS_ReturnCode_t
            Defaults_Plugin_data_to_string(
                const Defaults_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property)
            {
                DDS_DynamicData *data = NULL;
                char *buffer = NULL;
                unsigned int length = 0;
                struct DDS_PrintFormat printFormat;
                DDS_ReturnCode_t retCode = DDS_RETCODE_ERROR;

                if (sample == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (str_size == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (property == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (!Defaults_Plugin_serialize_to_cdr_buffer(
                    NULL, 
                    &length, 
                    sample)) {
                    return DDS_RETCODE_ERROR;
                }

                RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
                if (buffer == NULL) {
                    return DDS_RETCODE_ERROR;
                }

                if (!Defaults_Plugin_serialize_to_cdr_buffer(
                    buffer, 
                    &length, 
                    sample)) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }

                data = DDS_DynamicData_new(
                    Defaults__get_typecode(), 
                    &DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
                if (data == NULL) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }

                retCode = DDS_DynamicData_from_cdr_buffer(data, buffer, length);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                retCode = DDS_PrintFormatProperty_to_print_format(
                    property, 
                    &printFormat);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                retCode = DDS_DynamicDataFormatter_to_string_w_format(
                    data, 
                    str,
                    str_size, 
                    &printFormat);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                RTIOsapiHeap_freeBuffer(buffer);
                DDS_DynamicData_delete(data);
                return DDS_RETCODE_OK;
            }

            RTIBool 
            Defaults_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                Defaults_ **sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,   
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos)
            {

                RTIBool result;
                const char *METHOD_NAME = "Defaults_Plugin_deserialize";
                if (drop_sample) {} /* To avoid warnings */

                stream->_xTypesState.unassignable = RTI_FALSE;
                result= test_msgs::msg::dds_::Defaults_Plugin_deserialize_sample( 
                    endpoint_data, (sample != NULL)?*sample:NULL,
                    stream, deserialize_encapsulation, deserialize_sample, 
                    endpoint_plugin_qos);
                if (result) {
                    if (stream->_xTypesState.unassignable) {
                        result = RTI_FALSE;
                    }
                }
                if (!result && stream->_xTypesState.unassignable ) {

                    RTICdrLog_exception(
                        METHOD_NAME, 
                        &RTI_CDR_LOG_UNASSIGNABLE_SAMPLE_OF_TYPE_s, 
                        "Defaults_");

                }

                return result;

            }

            RTIBool Defaults_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream,   
                RTIBool skip_encapsulation,
                RTIBool skip_sample, 
                void *endpoint_plugin_qos)
            {
                char * position = NULL;

                RTIBool done = RTI_FALSE;

                if (endpoint_data) {} /* To avoid warnings */
                if (endpoint_plugin_qos) {} /* To avoid warnings */

                if(skip_encapsulation) {
                    if (!RTICdrStream_skipEncapsulation(stream)) {
                        return RTI_FALSE;
                    }

                    position = RTICdrStream_resetAlignment(stream);
                }

                if (skip_sample) {

                    if (!RTICdrStream_skipBoolean (stream)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_skipOctet (stream)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_skipOctet (stream)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_skipFloat (stream)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_skipDouble (stream)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_skipOctet (stream)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_skipOctet (stream)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_skipShort (stream)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_skipUnsignedShort (stream)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_skipLong (stream)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_skipUnsignedLong (stream)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_skipLongLong (stream)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_skipUnsignedLongLong (stream)) {
                        goto fin; 
                    }
                }

                done = RTI_TRUE;
              fin:
                if (done != RTI_TRUE && 
                RTICdrStream_getRemainder(stream) >=
                RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                    return RTI_FALSE;   
                }
                if(skip_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return RTI_TRUE;
            }

            unsigned int 
            Defaults_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;

                if (endpoint_data) {} /* To avoid warnings */ 
                if (overflow) {} /* To avoid warnings */

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                }

                current_alignment +=RTICdrType_getBooleanMaxSizeSerialized(
                    current_alignment);

                current_alignment +=RTICdrType_getOctetMaxSizeSerialized(
                    current_alignment);

                current_alignment +=RTICdrType_getOctetMaxSizeSerialized(
                    current_alignment);

                current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
                    current_alignment);

                current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
                    current_alignment);

                current_alignment +=RTICdrType_getOctetMaxSizeSerialized(
                    current_alignment);

                current_alignment +=RTICdrType_getOctetMaxSizeSerialized(
                    current_alignment);

                current_alignment +=RTICdrType_getShortMaxSizeSerialized(
                    current_alignment);

                current_alignment +=RTICdrType_getUnsignedShortMaxSizeSerialized(
                    current_alignment);

                current_alignment +=RTICdrType_getLongMaxSizeSerialized(
                    current_alignment);

                current_alignment +=RTICdrType_getUnsignedLongMaxSizeSerialized(
                    current_alignment);

                current_alignment +=RTICdrType_getLongLongMaxSizeSerialized(
                    current_alignment);

                current_alignment +=RTICdrType_getLongLongMaxSizeSerialized(
                    current_alignment);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return  current_alignment - initial_alignment;
            }

            unsigned int 
            Defaults_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = Defaults_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            unsigned int 
            Defaults_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;

                if (endpoint_data) {} /* To avoid warnings */ 

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                }

                current_alignment +=RTICdrType_getBooleanMaxSizeSerialized(
                    current_alignment);
                current_alignment +=RTICdrType_getOctetMaxSizeSerialized(
                    current_alignment);
                current_alignment +=RTICdrType_getOctetMaxSizeSerialized(
                    current_alignment);
                current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
                    current_alignment);
                current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
                    current_alignment);
                current_alignment +=RTICdrType_getOctetMaxSizeSerialized(
                    current_alignment);
                current_alignment +=RTICdrType_getOctetMaxSizeSerialized(
                    current_alignment);
                current_alignment +=RTICdrType_getShortMaxSizeSerialized(
                    current_alignment);
                current_alignment +=RTICdrType_getUnsignedShortMaxSizeSerialized(
                    current_alignment);
                current_alignment +=RTICdrType_getLongMaxSizeSerialized(
                    current_alignment);
                current_alignment +=RTICdrType_getUnsignedLongMaxSizeSerialized(
                    current_alignment);
                current_alignment +=RTICdrType_getLongLongMaxSizeSerialized(
                    current_alignment);
                current_alignment +=RTICdrType_getLongLongMaxSizeSerialized(
                    current_alignment);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return  current_alignment - initial_alignment;
            }

            /* Returns the size of the sample in its serialized form (in bytes).
            * It can also be an estimation in excess of the real buffer needed 
            * during a call to the serialize() function.
            * The value reported does not have to include the space for the
            * encapsulation flags.
            */
            unsigned int
            Defaults_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const Defaults_ * sample) 
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;
                struct PRESTypePluginDefaultEndpointData epd;   

                if (sample==NULL) {
                    return 0;
                }
                if (endpoint_data == NULL) {
                    endpoint_data = (PRESTypePluginEndpointData) &epd;
                    PRESTypePluginDefaultEndpointData_setBaseAlignment(
                        endpoint_data,
                        current_alignment);        
                }

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                    PRESTypePluginDefaultEndpointData_setBaseAlignment(
                        endpoint_data,
                        current_alignment);
                }

                current_alignment += RTICdrType_getBooleanMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment));

                current_alignment += RTICdrType_getOctetMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment));

                current_alignment += RTICdrType_getOctetMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment));

                current_alignment += RTICdrType_getFloatMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment));

                current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment));

                current_alignment += RTICdrType_getOctetMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment));

                current_alignment += RTICdrType_getOctetMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment));

                current_alignment += RTICdrType_getShortMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment));

                current_alignment += RTICdrType_getUnsignedShortMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment));

                current_alignment += RTICdrType_getLongMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment));

                current_alignment += RTICdrType_getUnsignedLongMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment));

                current_alignment += RTICdrType_getLongLongMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment));

                current_alignment += RTICdrType_getLongLongMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment));

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return current_alignment - initial_alignment;
            }

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */

            PRESTypePluginKeyKind 
            Defaults_Plugin_get_key_kind(void)
            {
                return PRES_TYPEPLUGIN_NO_KEY;
            }

            RTIBool 
            Defaults_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const Defaults_ *sample, 
                struct RTICdrStream *stream,    
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos)
            {
                char * position = NULL;

                if(serialize_encapsulation) {
                    if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
                        return RTI_FALSE;
                    }

                    position = RTICdrStream_resetAlignment(stream);
                }

                if(serialize_key) {

                    if (!test_msgs::msg::dds_::Defaults_Plugin_serialize(
                        endpoint_data,
                        sample,
                        stream,
                        RTI_FALSE, encapsulation_id,
                        RTI_TRUE,
                        endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                }

                if(serialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return RTI_TRUE;
            }

            RTIBool Defaults_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                Defaults_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos)
            {
                try {

                    char * position = NULL;

                    if (endpoint_data) {} /* To avoid warnings */
                    if (endpoint_plugin_qos) {} /* To avoid warnings */

                    if(deserialize_encapsulation) {

                        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                            return RTI_FALSE;
                        }

                        position = RTICdrStream_resetAlignment(stream);
                    }
                    if (deserialize_key) {

                        if (!test_msgs::msg::dds_::Defaults_Plugin_deserialize_sample(
                            endpoint_data, sample, stream, 
                            RTI_FALSE, RTI_TRUE, 
                            endpoint_plugin_qos)) {
                            return RTI_FALSE;
                        }
                    }

                    if(deserialize_encapsulation) {
                        RTICdrStream_restoreAlignment(stream,position);
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            RTIBool Defaults_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                Defaults_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos)
            {
                RTIBool result;
                if (drop_sample) {} /* To avoid warnings */
                stream->_xTypesState.unassignable = RTI_FALSE;
                result= test_msgs::msg::dds_::Defaults_Plugin_deserialize_key_sample(
                    endpoint_data, (sample != NULL)?*sample:NULL, stream,
                    deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
                if (result) {
                    if (stream->_xTypesState.unassignable) {
                        result = RTI_FALSE;
                    }
                }

                return result;    

            }

            unsigned int
            Defaults_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;

                if (endpoint_data) {} /* To avoid warnings */
                if (overflow) {} /* To avoid warnings */

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                }

                current_alignment += test_msgs::msg::dds_::Defaults_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data, overflow,RTI_FALSE, encapsulation_id, current_alignment);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return current_alignment - initial_alignment;
            }

            unsigned int
            Defaults_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = Defaults_Plugin_get_serialized_key_max_size_ex(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            RTIBool 
            Defaults_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                Defaults_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos)
            {
                char * position = NULL;

                RTIBool done = RTI_FALSE;
                RTIBool error = RTI_FALSE;

                if (stream == NULL) {
                    error = RTI_TRUE;
                    goto fin;
                }
                if(deserialize_encapsulation) {
                    if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                        return RTI_FALSE;
                    }
                    position = RTICdrStream_resetAlignment(stream);
                }

                if (deserialize_key) {

                    if (!test_msgs::msg::dds_::Defaults_Plugin_deserialize_sample(
                        endpoint_data, sample, stream, RTI_FALSE, 
                        RTI_TRUE, endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                }

                done = RTI_TRUE;
              fin:
                if(!error) {
                    if (done != RTI_TRUE && 
                    RTICdrStream_getRemainder(stream) >=
                    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                        return RTI_FALSE;   
                    }
                } else {
                    return RTI_FALSE;
                }       

                if(deserialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return RTI_TRUE;
            }

            /* ------------------------------------------------------------------------
            * Plug-in Installation Methods
            * ------------------------------------------------------------------------ */
            struct PRESTypePlugin *Defaults_Plugin_new(void) 
            { 
                struct PRESTypePlugin *plugin = NULL;
                const struct PRESTypePluginVersion PLUGIN_VERSION = 
                PRES_TYPE_PLUGIN_VERSION_2_0;

                RTIOsapiHeap_allocateStructure(
                    &plugin, struct PRESTypePlugin);

                if (plugin == NULL) {
                    return NULL;
                }

                plugin->version = PLUGIN_VERSION;

                /* set up parent's function pointers */
                plugin->onParticipantAttached =
                (PRESTypePluginOnParticipantAttachedCallback)
                test_msgs::msg::dds_::Defaults_Plugin_on_participant_attached;
                plugin->onParticipantDetached =
                (PRESTypePluginOnParticipantDetachedCallback)
                test_msgs::msg::dds_::Defaults_Plugin_on_participant_detached;
                plugin->onEndpointAttached =
                (PRESTypePluginOnEndpointAttachedCallback)
                test_msgs::msg::dds_::Defaults_Plugin_on_endpoint_attached;
                plugin->onEndpointDetached =
                (PRESTypePluginOnEndpointDetachedCallback)
                test_msgs::msg::dds_::Defaults_Plugin_on_endpoint_detached;

                plugin->copySampleFnc =
                (PRESTypePluginCopySampleFunction)
                test_msgs::msg::dds_::Defaults_Plugin_copy_sample;
                plugin->createSampleFnc =
                (PRESTypePluginCreateSampleFunction)
                Defaults_Plugin_create_sample;
                plugin->destroySampleFnc =
                (PRESTypePluginDestroySampleFunction)
                Defaults_Plugin_destroy_sample;
                plugin->finalizeOptionalMembersFnc =
                (PRESTypePluginFinalizeOptionalMembersFunction)
                Defaults__finalize_optional_members;

                plugin->serializeFnc =
                (PRESTypePluginSerializeFunction)
                test_msgs::msg::dds_::Defaults_Plugin_serialize;
                plugin->deserializeFnc =
                (PRESTypePluginDeserializeFunction)
                test_msgs::msg::dds_::Defaults_Plugin_deserialize;
                plugin->getSerializedSampleMaxSizeFnc =
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                test_msgs::msg::dds_::Defaults_Plugin_get_serialized_sample_max_size;
                plugin->getSerializedSampleMinSizeFnc =
                (PRESTypePluginGetSerializedSampleMinSizeFunction)
                test_msgs::msg::dds_::Defaults_Plugin_get_serialized_sample_min_size;

                plugin->getSampleFnc =
                (PRESTypePluginGetSampleFunction)
                Defaults_Plugin_get_sample;
                plugin->returnSampleFnc =
                (PRESTypePluginReturnSampleFunction)
                Defaults_Plugin_return_sample;

                plugin->getKeyKindFnc =
                (PRESTypePluginGetKeyKindFunction)
                test_msgs::msg::dds_::Defaults_Plugin_get_key_kind;

                /* These functions are only used for keyed types. As this is not a keyed
                type they are all set to NULL
                */
                plugin->serializeKeyFnc = NULL ;    
                plugin->deserializeKeyFnc = NULL;  
                plugin->getKeyFnc = NULL;
                plugin->returnKeyFnc = NULL;
                plugin->instanceToKeyFnc = NULL;
                plugin->keyToInstanceFnc = NULL;
                plugin->getSerializedKeyMaxSizeFnc = NULL;
                plugin->instanceToKeyHashFnc = NULL;
                plugin->serializedSampleToKeyHashFnc = NULL;
                plugin->serializedKeyToKeyHashFnc = NULL;    
                plugin->typeCode =  (struct RTICdrTypeCode *)test_msgs::msg::dds_::Defaults__get_typecode();

                plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

                /* Serialized buffer */
                plugin->getBuffer = 
                (PRESTypePluginGetBufferFunction)
                Defaults_Plugin_get_buffer;
                plugin->returnBuffer = 
                (PRESTypePluginReturnBufferFunction)
                Defaults_Plugin_return_buffer;
                plugin->getSerializedSampleSizeFnc =
                (PRESTypePluginGetSerializedSampleSizeFunction)
                test_msgs::msg::dds_::Defaults_Plugin_get_serialized_sample_size;

                plugin->endpointTypeName = Defaults_TYPENAME;

                return plugin;
            }

            void
            Defaults_Plugin_delete(struct PRESTypePlugin *plugin)
            {
                RTIOsapiHeap_freeStructure(plugin);
            } 
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace test_msgs  */
#undef RTI_CDR_CURRENT_SUBMODULE 
