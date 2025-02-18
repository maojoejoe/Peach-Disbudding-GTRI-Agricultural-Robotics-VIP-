
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Fibonacci_.idl using "rtiddsgen".
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

#include "Fibonacci_Plugin.h"

namespace test_msgs {
    namespace action {
        namespace dds_ {

            /* ----------------------------------------------------------------------------
            *  Type Fibonacci_Goal_
            * -------------------------------------------------------------------------- */

            /* -----------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------- */

            Fibonacci_Goal_*
            Fibonacci_Goal_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params) 
            {
                Fibonacci_Goal_ *sample = NULL;

                sample = new (std::nothrow) Fibonacci_Goal_ ;
                if (sample == NULL) {
                    return NULL;
                }

                if (!test_msgs::action::dds_::Fibonacci_Goal__initialize_w_params(sample,alloc_params)) {
                    delete  sample;
                    sample=NULL;
                }
                return sample; 
            } 

            Fibonacci_Goal_ *
            Fibonacci_Goal_PluginSupport_create_data_ex(RTIBool allocate_pointers) 
            {
                Fibonacci_Goal_ *sample = NULL;

                sample = new (std::nothrow) Fibonacci_Goal_ ;

                if(sample == NULL) {
                    return NULL;
                }

                if (!test_msgs::action::dds_::Fibonacci_Goal__initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                    delete  sample;
                    sample=NULL;
                }

                return sample; 
            }

            Fibonacci_Goal_ *
            Fibonacci_Goal_PluginSupport_create_data(void)
            {
                return test_msgs::action::dds_::Fibonacci_Goal_PluginSupport_create_data_ex(RTI_TRUE);
            }

            void 
            Fibonacci_Goal_PluginSupport_destroy_data_w_params(
                Fibonacci_Goal_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params) {

                test_msgs::action::dds_::Fibonacci_Goal__finalize_w_params(sample,dealloc_params);

                delete  sample;
                sample=NULL;
            }

            void 
            Fibonacci_Goal_PluginSupport_destroy_data_ex(
                Fibonacci_Goal_ *sample,RTIBool deallocate_pointers) {

                test_msgs::action::dds_::Fibonacci_Goal__finalize_ex(sample,deallocate_pointers);

                delete  sample;
                sample=NULL;
            }

            void 
            Fibonacci_Goal_PluginSupport_destroy_data(
                Fibonacci_Goal_ *sample) {

                test_msgs::action::dds_::Fibonacci_Goal_PluginSupport_destroy_data_ex(sample,RTI_TRUE);

            }

            RTIBool 
            Fibonacci_Goal_PluginSupport_copy_data(
                Fibonacci_Goal_ *dst,
                const Fibonacci_Goal_ *src)
            {
                return test_msgs::action::dds_::Fibonacci_Goal__copy(dst,(const Fibonacci_Goal_*) src);
            }

            void 
            Fibonacci_Goal_PluginSupport_print_data(
                const Fibonacci_Goal_ *sample,
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

                RTICdrType_printLong(
                    &sample->order_, "order_", indent_level + 1);    

            }

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            PRESTypePluginParticipantData 
            Fibonacci_Goal_Plugin_on_participant_attached(
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
            Fibonacci_Goal_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data)
            {

                PRESTypePluginDefaultParticipantData_delete(participant_data);
            }

            PRESTypePluginEndpointData
            Fibonacci_Goal_Plugin_on_endpoint_attached(
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
                    test_msgs::action::dds_::Fibonacci_Goal_PluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    test_msgs::action::dds_::Fibonacci_Goal_PluginSupport_destroy_data,
                    NULL , NULL );

                if (epd == NULL) {
                    return NULL;
                } 

                if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                    serializedSampleMaxSize = test_msgs::action::dds_::Fibonacci_Goal_Plugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        test_msgs::action::dds_::Fibonacci_Goal_Plugin_get_serialized_sample_max_size, epd,
                        (PRESTypePluginGetSerializedSampleSizeFunction)
                        test_msgs::action::dds_::Fibonacci_Goal_Plugin_get_serialized_sample_size,
                        epd) == RTI_FALSE) {
                        PRESTypePluginDefaultEndpointData_delete(epd);
                        return NULL;
                    }
                }

                return epd;    
            }

            void 
            Fibonacci_Goal_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data)
            {  

                PRESTypePluginDefaultEndpointData_delete(endpoint_data);
            }

            void    
            Fibonacci_Goal_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_Goal_ *sample,
                void *handle)
            {

                Fibonacci_Goal__finalize_optional_members(sample, RTI_TRUE);

                PRESTypePluginDefaultEndpointData_returnSample(
                    endpoint_data, sample, handle);
            }

            RTIBool 
            Fibonacci_Goal_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_Goal_ *dst,
                const Fibonacci_Goal_ *src)
            {
                if (endpoint_data) {} /* To avoid warnings */
                return test_msgs::action::dds_::Fibonacci_Goal_PluginSupport_copy_data(dst,src);
            }

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */
            unsigned int 
            Fibonacci_Goal_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            RTIBool 
            Fibonacci_Goal_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const Fibonacci_Goal_ *sample, 
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

                    if (!RTICdrStream_serializeLong(
                        stream, &sample->order_)) {
                        return RTI_FALSE;
                    }

                }

                if(serialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return retval;
            }

            RTIBool 
            Fibonacci_Goal_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_Goal_ *sample,
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

                        test_msgs::action::dds_::Fibonacci_Goal__initialize_ex(sample, RTI_FALSE, RTI_FALSE);

                        if (!RTICdrStream_deserializeLong(
                            stream, &sample->order_)) {
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
            Fibonacci_Goal_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const Fibonacci_Goal_ *sample)
            {
                struct RTICdrStream stream;
                struct PRESTypePluginDefaultEndpointData epd;
                RTIBool result;

                if (length == NULL) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                Fibonacci_Goal_Plugin_get_serialized_sample_max_size(
                    NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

                if (buffer == NULL) {
                    *length = 
                    Fibonacci_Goal_Plugin_get_serialized_sample_size(
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

                result = test_msgs::action::dds_::Fibonacci_Goal_Plugin_serialize(
                    (PRESTypePluginEndpointData)&epd, sample, &stream, 
                    RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
                    RTI_TRUE, NULL);  

                *length = RTICdrStream_getCurrentPositionOffset(&stream);
                return result;     
            }

            RTIBool
            Fibonacci_Goal_Plugin_deserialize_from_cdr_buffer(
                Fibonacci_Goal_ *sample,
                const char * buffer,
                unsigned int length)
            {
                struct RTICdrStream stream;

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, length);

                Fibonacci_Goal__finalize_optional_members(sample, RTI_TRUE);
                return Fibonacci_Goal_Plugin_deserialize_sample( 
                    NULL, sample,
                    &stream, RTI_TRUE, RTI_TRUE, 
                    NULL);
            }

            DDS_ReturnCode_t
            Fibonacci_Goal_Plugin_data_to_string(
                const Fibonacci_Goal_ *sample,
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

                if (!Fibonacci_Goal_Plugin_serialize_to_cdr_buffer(
                    NULL, 
                    &length, 
                    sample)) {
                    return DDS_RETCODE_ERROR;
                }

                RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
                if (buffer == NULL) {
                    return DDS_RETCODE_ERROR;
                }

                if (!Fibonacci_Goal_Plugin_serialize_to_cdr_buffer(
                    buffer, 
                    &length, 
                    sample)) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }

                data = DDS_DynamicData_new(
                    Fibonacci_Goal__get_typecode(), 
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
            Fibonacci_Goal_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_Goal_ **sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,   
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos)
            {

                RTIBool result;
                const char *METHOD_NAME = "Fibonacci_Goal_Plugin_deserialize";
                if (drop_sample) {} /* To avoid warnings */

                stream->_xTypesState.unassignable = RTI_FALSE;
                result= test_msgs::action::dds_::Fibonacci_Goal_Plugin_deserialize_sample( 
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
                        "Fibonacci_Goal_");

                }

                return result;

            }

            RTIBool Fibonacci_Goal_Plugin_skip(
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

                    if (!RTICdrStream_skipLong (stream)) {
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
            Fibonacci_Goal_Plugin_get_serialized_sample_max_size_ex(
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

                current_alignment +=RTICdrType_getLongMaxSizeSerialized(
                    current_alignment);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return  current_alignment - initial_alignment;
            }

            unsigned int 
            Fibonacci_Goal_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = Fibonacci_Goal_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            unsigned int 
            Fibonacci_Goal_Plugin_get_serialized_sample_min_size(
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

                current_alignment +=RTICdrType_getLongMaxSizeSerialized(
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
            Fibonacci_Goal_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const Fibonacci_Goal_ * sample) 
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

                current_alignment += RTICdrType_getLongMaxSizeSerialized(
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
            Fibonacci_Goal_Plugin_get_key_kind(void)
            {
                return PRES_TYPEPLUGIN_NO_KEY;
            }

            RTIBool 
            Fibonacci_Goal_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const Fibonacci_Goal_ *sample, 
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

                    if (!test_msgs::action::dds_::Fibonacci_Goal_Plugin_serialize(
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

            RTIBool Fibonacci_Goal_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_Goal_ *sample, 
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

                        if (!test_msgs::action::dds_::Fibonacci_Goal_Plugin_deserialize_sample(
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

            RTIBool Fibonacci_Goal_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_Goal_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos)
            {
                RTIBool result;
                if (drop_sample) {} /* To avoid warnings */
                stream->_xTypesState.unassignable = RTI_FALSE;
                result= test_msgs::action::dds_::Fibonacci_Goal_Plugin_deserialize_key_sample(
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
            Fibonacci_Goal_Plugin_get_serialized_key_max_size_ex(
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

                current_alignment += test_msgs::action::dds_::Fibonacci_Goal_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data, overflow,RTI_FALSE, encapsulation_id, current_alignment);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return current_alignment - initial_alignment;
            }

            unsigned int
            Fibonacci_Goal_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = Fibonacci_Goal_Plugin_get_serialized_key_max_size_ex(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            RTIBool 
            Fibonacci_Goal_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_Goal_ *sample,
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

                    if (!test_msgs::action::dds_::Fibonacci_Goal_Plugin_deserialize_sample(
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
            struct PRESTypePlugin *Fibonacci_Goal_Plugin_new(void) 
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
                test_msgs::action::dds_::Fibonacci_Goal_Plugin_on_participant_attached;
                plugin->onParticipantDetached =
                (PRESTypePluginOnParticipantDetachedCallback)
                test_msgs::action::dds_::Fibonacci_Goal_Plugin_on_participant_detached;
                plugin->onEndpointAttached =
                (PRESTypePluginOnEndpointAttachedCallback)
                test_msgs::action::dds_::Fibonacci_Goal_Plugin_on_endpoint_attached;
                plugin->onEndpointDetached =
                (PRESTypePluginOnEndpointDetachedCallback)
                test_msgs::action::dds_::Fibonacci_Goal_Plugin_on_endpoint_detached;

                plugin->copySampleFnc =
                (PRESTypePluginCopySampleFunction)
                test_msgs::action::dds_::Fibonacci_Goal_Plugin_copy_sample;
                plugin->createSampleFnc =
                (PRESTypePluginCreateSampleFunction)
                Fibonacci_Goal_Plugin_create_sample;
                plugin->destroySampleFnc =
                (PRESTypePluginDestroySampleFunction)
                Fibonacci_Goal_Plugin_destroy_sample;
                plugin->finalizeOptionalMembersFnc =
                (PRESTypePluginFinalizeOptionalMembersFunction)
                Fibonacci_Goal__finalize_optional_members;

                plugin->serializeFnc =
                (PRESTypePluginSerializeFunction)
                test_msgs::action::dds_::Fibonacci_Goal_Plugin_serialize;
                plugin->deserializeFnc =
                (PRESTypePluginDeserializeFunction)
                test_msgs::action::dds_::Fibonacci_Goal_Plugin_deserialize;
                plugin->getSerializedSampleMaxSizeFnc =
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                test_msgs::action::dds_::Fibonacci_Goal_Plugin_get_serialized_sample_max_size;
                plugin->getSerializedSampleMinSizeFnc =
                (PRESTypePluginGetSerializedSampleMinSizeFunction)
                test_msgs::action::dds_::Fibonacci_Goal_Plugin_get_serialized_sample_min_size;

                plugin->getSampleFnc =
                (PRESTypePluginGetSampleFunction)
                Fibonacci_Goal_Plugin_get_sample;
                plugin->returnSampleFnc =
                (PRESTypePluginReturnSampleFunction)
                Fibonacci_Goal_Plugin_return_sample;

                plugin->getKeyKindFnc =
                (PRESTypePluginGetKeyKindFunction)
                test_msgs::action::dds_::Fibonacci_Goal_Plugin_get_key_kind;

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
                plugin->typeCode =  (struct RTICdrTypeCode *)test_msgs::action::dds_::Fibonacci_Goal__get_typecode();

                plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

                /* Serialized buffer */
                plugin->getBuffer = 
                (PRESTypePluginGetBufferFunction)
                Fibonacci_Goal_Plugin_get_buffer;
                plugin->returnBuffer = 
                (PRESTypePluginReturnBufferFunction)
                Fibonacci_Goal_Plugin_return_buffer;
                plugin->getSerializedSampleSizeFnc =
                (PRESTypePluginGetSerializedSampleSizeFunction)
                test_msgs::action::dds_::Fibonacci_Goal_Plugin_get_serialized_sample_size;

                plugin->endpointTypeName = Fibonacci_Goal_TYPENAME;

                return plugin;
            }

            void
            Fibonacci_Goal_Plugin_delete(struct PRESTypePlugin *plugin)
            {
                RTIOsapiHeap_freeStructure(plugin);
            } 
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace test_msgs  */
namespace test_msgs {
    namespace action {
        namespace dds_ {

            /* ----------------------------------------------------------------------------
            *  Type Fibonacci_SendGoal_Request_
            * -------------------------------------------------------------------------- */

            /* -----------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------- */

            Fibonacci_SendGoal_Request_*
            Fibonacci_SendGoal_Request_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params) 
            {
                Fibonacci_SendGoal_Request_ *sample = NULL;

                sample = new (std::nothrow) Fibonacci_SendGoal_Request_ ;
                if (sample == NULL) {
                    return NULL;
                }

                if (!test_msgs::action::dds_::Fibonacci_SendGoal_Request__initialize_w_params(sample,alloc_params)) {
                    delete  sample;
                    sample=NULL;
                }
                return sample; 
            } 

            Fibonacci_SendGoal_Request_ *
            Fibonacci_SendGoal_Request_PluginSupport_create_data_ex(RTIBool allocate_pointers) 
            {
                Fibonacci_SendGoal_Request_ *sample = NULL;

                sample = new (std::nothrow) Fibonacci_SendGoal_Request_ ;

                if(sample == NULL) {
                    return NULL;
                }

                if (!test_msgs::action::dds_::Fibonacci_SendGoal_Request__initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                    delete  sample;
                    sample=NULL;
                }

                return sample; 
            }

            Fibonacci_SendGoal_Request_ *
            Fibonacci_SendGoal_Request_PluginSupport_create_data(void)
            {
                return test_msgs::action::dds_::Fibonacci_SendGoal_Request_PluginSupport_create_data_ex(RTI_TRUE);
            }

            void 
            Fibonacci_SendGoal_Request_PluginSupport_destroy_data_w_params(
                Fibonacci_SendGoal_Request_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params) {

                test_msgs::action::dds_::Fibonacci_SendGoal_Request__finalize_w_params(sample,dealloc_params);

                delete  sample;
                sample=NULL;
            }

            void 
            Fibonacci_SendGoal_Request_PluginSupport_destroy_data_ex(
                Fibonacci_SendGoal_Request_ *sample,RTIBool deallocate_pointers) {

                test_msgs::action::dds_::Fibonacci_SendGoal_Request__finalize_ex(sample,deallocate_pointers);

                delete  sample;
                sample=NULL;
            }

            void 
            Fibonacci_SendGoal_Request_PluginSupport_destroy_data(
                Fibonacci_SendGoal_Request_ *sample) {

                test_msgs::action::dds_::Fibonacci_SendGoal_Request_PluginSupport_destroy_data_ex(sample,RTI_TRUE);

            }

            RTIBool 
            Fibonacci_SendGoal_Request_PluginSupport_copy_data(
                Fibonacci_SendGoal_Request_ *dst,
                const Fibonacci_SendGoal_Request_ *src)
            {
                return test_msgs::action::dds_::Fibonacci_SendGoal_Request__copy(dst,(const Fibonacci_SendGoal_Request_*) src);
            }

            void 
            Fibonacci_SendGoal_Request_PluginSupport_print_data(
                const Fibonacci_SendGoal_Request_ *sample,
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

                unique_identifier_msgs::msg::dds_::UUID_PluginSupport_print_data(
                    (const unique_identifier_msgs::msg::dds_::UUID_*) &sample->goal_id_, "goal_id_", indent_level + 1);

                test_msgs::action::dds_::Fibonacci_Goal_PluginSupport_print_data(
                    (const test_msgs::action::dds_::Fibonacci_Goal_*) &sample->goal_, "goal_", indent_level + 1);

            }

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            PRESTypePluginParticipantData 
            Fibonacci_SendGoal_Request_Plugin_on_participant_attached(
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
            Fibonacci_SendGoal_Request_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data)
            {

                PRESTypePluginDefaultParticipantData_delete(participant_data);
            }

            PRESTypePluginEndpointData
            Fibonacci_SendGoal_Request_Plugin_on_endpoint_attached(
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
                    test_msgs::action::dds_::Fibonacci_SendGoal_Request_PluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    test_msgs::action::dds_::Fibonacci_SendGoal_Request_PluginSupport_destroy_data,
                    NULL , NULL );

                if (epd == NULL) {
                    return NULL;
                } 

                if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                    serializedSampleMaxSize = test_msgs::action::dds_::Fibonacci_SendGoal_Request_Plugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        test_msgs::action::dds_::Fibonacci_SendGoal_Request_Plugin_get_serialized_sample_max_size, epd,
                        (PRESTypePluginGetSerializedSampleSizeFunction)
                        test_msgs::action::dds_::Fibonacci_SendGoal_Request_Plugin_get_serialized_sample_size,
                        epd) == RTI_FALSE) {
                        PRESTypePluginDefaultEndpointData_delete(epd);
                        return NULL;
                    }
                }

                return epd;    
            }

            void 
            Fibonacci_SendGoal_Request_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data)
            {  

                PRESTypePluginDefaultEndpointData_delete(endpoint_data);
            }

            void    
            Fibonacci_SendGoal_Request_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_SendGoal_Request_ *sample,
                void *handle)
            {

                Fibonacci_SendGoal_Request__finalize_optional_members(sample, RTI_TRUE);

                PRESTypePluginDefaultEndpointData_returnSample(
                    endpoint_data, sample, handle);
            }

            RTIBool 
            Fibonacci_SendGoal_Request_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_SendGoal_Request_ *dst,
                const Fibonacci_SendGoal_Request_ *src)
            {
                if (endpoint_data) {} /* To avoid warnings */
                return test_msgs::action::dds_::Fibonacci_SendGoal_Request_PluginSupport_copy_data(dst,src);
            }

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */
            unsigned int 
            Fibonacci_SendGoal_Request_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            RTIBool 
            Fibonacci_SendGoal_Request_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const Fibonacci_SendGoal_Request_ *sample, 
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

                    if(!unique_identifier_msgs::msg::dds_::UUID_Plugin_serialize(
                        endpoint_data,
                        (const unique_identifier_msgs::msg::dds_::UUID_*) &sample->goal_id_,
                        stream,
                        RTI_FALSE, encapsulation_id,
                        RTI_TRUE,
                        endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                    if(!test_msgs::action::dds_::Fibonacci_Goal_Plugin_serialize(
                        endpoint_data,
                        (const test_msgs::action::dds_::Fibonacci_Goal_*) &sample->goal_,
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

                return retval;
            }

            RTIBool 
            Fibonacci_SendGoal_Request_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_SendGoal_Request_ *sample,
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

                        test_msgs::action::dds_::Fibonacci_SendGoal_Request__initialize_ex(sample, RTI_FALSE, RTI_FALSE);

                        if(!unique_identifier_msgs::msg::dds_::UUID_Plugin_deserialize_sample(
                            endpoint_data,
                            &sample->goal_id_,
                            stream,
                            RTI_FALSE, RTI_TRUE,
                            endpoint_plugin_qos)) {
                            goto fin; 
                        }
                        if(!test_msgs::action::dds_::Fibonacci_Goal_Plugin_deserialize_sample(
                            endpoint_data,
                            &sample->goal_,
                            stream,
                            RTI_FALSE, RTI_TRUE,
                            endpoint_plugin_qos)) {
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
            Fibonacci_SendGoal_Request_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const Fibonacci_SendGoal_Request_ *sample)
            {
                struct RTICdrStream stream;
                struct PRESTypePluginDefaultEndpointData epd;
                RTIBool result;

                if (length == NULL) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                Fibonacci_SendGoal_Request_Plugin_get_serialized_sample_max_size(
                    NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

                if (buffer == NULL) {
                    *length = 
                    Fibonacci_SendGoal_Request_Plugin_get_serialized_sample_size(
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

                result = test_msgs::action::dds_::Fibonacci_SendGoal_Request_Plugin_serialize(
                    (PRESTypePluginEndpointData)&epd, sample, &stream, 
                    RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
                    RTI_TRUE, NULL);  

                *length = RTICdrStream_getCurrentPositionOffset(&stream);
                return result;     
            }

            RTIBool
            Fibonacci_SendGoal_Request_Plugin_deserialize_from_cdr_buffer(
                Fibonacci_SendGoal_Request_ *sample,
                const char * buffer,
                unsigned int length)
            {
                struct RTICdrStream stream;

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, length);

                Fibonacci_SendGoal_Request__finalize_optional_members(sample, RTI_TRUE);
                return Fibonacci_SendGoal_Request_Plugin_deserialize_sample( 
                    NULL, sample,
                    &stream, RTI_TRUE, RTI_TRUE, 
                    NULL);
            }

            DDS_ReturnCode_t
            Fibonacci_SendGoal_Request_Plugin_data_to_string(
                const Fibonacci_SendGoal_Request_ *sample,
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

                if (!Fibonacci_SendGoal_Request_Plugin_serialize_to_cdr_buffer(
                    NULL, 
                    &length, 
                    sample)) {
                    return DDS_RETCODE_ERROR;
                }

                RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
                if (buffer == NULL) {
                    return DDS_RETCODE_ERROR;
                }

                if (!Fibonacci_SendGoal_Request_Plugin_serialize_to_cdr_buffer(
                    buffer, 
                    &length, 
                    sample)) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }

                data = DDS_DynamicData_new(
                    Fibonacci_SendGoal_Request__get_typecode(), 
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
            Fibonacci_SendGoal_Request_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_SendGoal_Request_ **sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,   
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos)
            {

                RTIBool result;
                const char *METHOD_NAME = "Fibonacci_SendGoal_Request_Plugin_deserialize";
                if (drop_sample) {} /* To avoid warnings */

                stream->_xTypesState.unassignable = RTI_FALSE;
                result= test_msgs::action::dds_::Fibonacci_SendGoal_Request_Plugin_deserialize_sample( 
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
                        "Fibonacci_SendGoal_Request_");

                }

                return result;

            }

            RTIBool Fibonacci_SendGoal_Request_Plugin_skip(
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

                    if (!unique_identifier_msgs::msg::dds_::UUID_Plugin_skip(
                        endpoint_data,
                        stream, 
                        RTI_FALSE, RTI_TRUE, 
                        endpoint_plugin_qos)) {
                        goto fin; 
                    }
                    if (!test_msgs::action::dds_::Fibonacci_Goal_Plugin_skip(
                        endpoint_data,
                        stream, 
                        RTI_FALSE, RTI_TRUE, 
                        endpoint_plugin_qos)) {
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
            Fibonacci_SendGoal_Request_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                }

                current_alignment +=unique_identifier_msgs::msg::dds_::UUID_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

                current_alignment +=test_msgs::action::dds_::Fibonacci_Goal_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return  current_alignment - initial_alignment;
            }

            unsigned int 
            Fibonacci_SendGoal_Request_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = Fibonacci_SendGoal_Request_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            unsigned int 
            Fibonacci_SendGoal_Request_Plugin_get_serialized_sample_min_size(
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

                current_alignment +=unique_identifier_msgs::msg::dds_::UUID_Plugin_get_serialized_sample_min_size(
                    endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
                current_alignment +=test_msgs::action::dds_::Fibonacci_Goal_Plugin_get_serialized_sample_min_size(
                    endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);

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
            Fibonacci_SendGoal_Request_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const Fibonacci_SendGoal_Request_ * sample) 
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

                current_alignment += unique_identifier_msgs::msg::dds_::UUID_Plugin_get_serialized_sample_size(
                    endpoint_data,RTI_FALSE, encapsulation_id,
                    current_alignment, (const unique_identifier_msgs::msg::dds_::UUID_*) &sample->goal_id_);

                current_alignment += test_msgs::action::dds_::Fibonacci_Goal_Plugin_get_serialized_sample_size(
                    endpoint_data,RTI_FALSE, encapsulation_id,
                    current_alignment, (const test_msgs::action::dds_::Fibonacci_Goal_*) &sample->goal_);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return current_alignment - initial_alignment;
            }

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */

            PRESTypePluginKeyKind 
            Fibonacci_SendGoal_Request_Plugin_get_key_kind(void)
            {
                return PRES_TYPEPLUGIN_NO_KEY;
            }

            RTIBool 
            Fibonacci_SendGoal_Request_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const Fibonacci_SendGoal_Request_ *sample, 
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

                    if (!test_msgs::action::dds_::Fibonacci_SendGoal_Request_Plugin_serialize(
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

            RTIBool Fibonacci_SendGoal_Request_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_SendGoal_Request_ *sample, 
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

                        if (!test_msgs::action::dds_::Fibonacci_SendGoal_Request_Plugin_deserialize_sample(
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

            RTIBool Fibonacci_SendGoal_Request_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_SendGoal_Request_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos)
            {
                RTIBool result;
                if (drop_sample) {} /* To avoid warnings */
                stream->_xTypesState.unassignable = RTI_FALSE;
                result= test_msgs::action::dds_::Fibonacci_SendGoal_Request_Plugin_deserialize_key_sample(
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
            Fibonacci_SendGoal_Request_Plugin_get_serialized_key_max_size_ex(
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

                current_alignment += test_msgs::action::dds_::Fibonacci_SendGoal_Request_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data, overflow,RTI_FALSE, encapsulation_id, current_alignment);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return current_alignment - initial_alignment;
            }

            unsigned int
            Fibonacci_SendGoal_Request_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = Fibonacci_SendGoal_Request_Plugin_get_serialized_key_max_size_ex(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            RTIBool 
            Fibonacci_SendGoal_Request_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_SendGoal_Request_ *sample,
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

                    if (!test_msgs::action::dds_::Fibonacci_SendGoal_Request_Plugin_deserialize_sample(
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
            struct PRESTypePlugin *Fibonacci_SendGoal_Request_Plugin_new(void) 
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
                test_msgs::action::dds_::Fibonacci_SendGoal_Request_Plugin_on_participant_attached;
                plugin->onParticipantDetached =
                (PRESTypePluginOnParticipantDetachedCallback)
                test_msgs::action::dds_::Fibonacci_SendGoal_Request_Plugin_on_participant_detached;
                plugin->onEndpointAttached =
                (PRESTypePluginOnEndpointAttachedCallback)
                test_msgs::action::dds_::Fibonacci_SendGoal_Request_Plugin_on_endpoint_attached;
                plugin->onEndpointDetached =
                (PRESTypePluginOnEndpointDetachedCallback)
                test_msgs::action::dds_::Fibonacci_SendGoal_Request_Plugin_on_endpoint_detached;

                plugin->copySampleFnc =
                (PRESTypePluginCopySampleFunction)
                test_msgs::action::dds_::Fibonacci_SendGoal_Request_Plugin_copy_sample;
                plugin->createSampleFnc =
                (PRESTypePluginCreateSampleFunction)
                Fibonacci_SendGoal_Request_Plugin_create_sample;
                plugin->destroySampleFnc =
                (PRESTypePluginDestroySampleFunction)
                Fibonacci_SendGoal_Request_Plugin_destroy_sample;
                plugin->finalizeOptionalMembersFnc =
                (PRESTypePluginFinalizeOptionalMembersFunction)
                Fibonacci_SendGoal_Request__finalize_optional_members;

                plugin->serializeFnc =
                (PRESTypePluginSerializeFunction)
                test_msgs::action::dds_::Fibonacci_SendGoal_Request_Plugin_serialize;
                plugin->deserializeFnc =
                (PRESTypePluginDeserializeFunction)
                test_msgs::action::dds_::Fibonacci_SendGoal_Request_Plugin_deserialize;
                plugin->getSerializedSampleMaxSizeFnc =
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                test_msgs::action::dds_::Fibonacci_SendGoal_Request_Plugin_get_serialized_sample_max_size;
                plugin->getSerializedSampleMinSizeFnc =
                (PRESTypePluginGetSerializedSampleMinSizeFunction)
                test_msgs::action::dds_::Fibonacci_SendGoal_Request_Plugin_get_serialized_sample_min_size;

                plugin->getSampleFnc =
                (PRESTypePluginGetSampleFunction)
                Fibonacci_SendGoal_Request_Plugin_get_sample;
                plugin->returnSampleFnc =
                (PRESTypePluginReturnSampleFunction)
                Fibonacci_SendGoal_Request_Plugin_return_sample;

                plugin->getKeyKindFnc =
                (PRESTypePluginGetKeyKindFunction)
                test_msgs::action::dds_::Fibonacci_SendGoal_Request_Plugin_get_key_kind;

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
                plugin->typeCode =  (struct RTICdrTypeCode *)test_msgs::action::dds_::Fibonacci_SendGoal_Request__get_typecode();

                plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

                /* Serialized buffer */
                plugin->getBuffer = 
                (PRESTypePluginGetBufferFunction)
                Fibonacci_SendGoal_Request_Plugin_get_buffer;
                plugin->returnBuffer = 
                (PRESTypePluginReturnBufferFunction)
                Fibonacci_SendGoal_Request_Plugin_return_buffer;
                plugin->getSerializedSampleSizeFnc =
                (PRESTypePluginGetSerializedSampleSizeFunction)
                test_msgs::action::dds_::Fibonacci_SendGoal_Request_Plugin_get_serialized_sample_size;

                plugin->endpointTypeName = Fibonacci_SendGoal_Request_TYPENAME;

                return plugin;
            }

            void
            Fibonacci_SendGoal_Request_Plugin_delete(struct PRESTypePlugin *plugin)
            {
                RTIOsapiHeap_freeStructure(plugin);
            } 
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace test_msgs  */
namespace test_msgs {
    namespace action {
        namespace dds_ {

            /* ----------------------------------------------------------------------------
            *  Type Fibonacci_SendGoal_Response_
            * -------------------------------------------------------------------------- */

            /* -----------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------- */

            Fibonacci_SendGoal_Response_*
            Fibonacci_SendGoal_Response_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params) 
            {
                Fibonacci_SendGoal_Response_ *sample = NULL;

                sample = new (std::nothrow) Fibonacci_SendGoal_Response_ ;
                if (sample == NULL) {
                    return NULL;
                }

                if (!test_msgs::action::dds_::Fibonacci_SendGoal_Response__initialize_w_params(sample,alloc_params)) {
                    delete  sample;
                    sample=NULL;
                }
                return sample; 
            } 

            Fibonacci_SendGoal_Response_ *
            Fibonacci_SendGoal_Response_PluginSupport_create_data_ex(RTIBool allocate_pointers) 
            {
                Fibonacci_SendGoal_Response_ *sample = NULL;

                sample = new (std::nothrow) Fibonacci_SendGoal_Response_ ;

                if(sample == NULL) {
                    return NULL;
                }

                if (!test_msgs::action::dds_::Fibonacci_SendGoal_Response__initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                    delete  sample;
                    sample=NULL;
                }

                return sample; 
            }

            Fibonacci_SendGoal_Response_ *
            Fibonacci_SendGoal_Response_PluginSupport_create_data(void)
            {
                return test_msgs::action::dds_::Fibonacci_SendGoal_Response_PluginSupport_create_data_ex(RTI_TRUE);
            }

            void 
            Fibonacci_SendGoal_Response_PluginSupport_destroy_data_w_params(
                Fibonacci_SendGoal_Response_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params) {

                test_msgs::action::dds_::Fibonacci_SendGoal_Response__finalize_w_params(sample,dealloc_params);

                delete  sample;
                sample=NULL;
            }

            void 
            Fibonacci_SendGoal_Response_PluginSupport_destroy_data_ex(
                Fibonacci_SendGoal_Response_ *sample,RTIBool deallocate_pointers) {

                test_msgs::action::dds_::Fibonacci_SendGoal_Response__finalize_ex(sample,deallocate_pointers);

                delete  sample;
                sample=NULL;
            }

            void 
            Fibonacci_SendGoal_Response_PluginSupport_destroy_data(
                Fibonacci_SendGoal_Response_ *sample) {

                test_msgs::action::dds_::Fibonacci_SendGoal_Response_PluginSupport_destroy_data_ex(sample,RTI_TRUE);

            }

            RTIBool 
            Fibonacci_SendGoal_Response_PluginSupport_copy_data(
                Fibonacci_SendGoal_Response_ *dst,
                const Fibonacci_SendGoal_Response_ *src)
            {
                return test_msgs::action::dds_::Fibonacci_SendGoal_Response__copy(dst,(const Fibonacci_SendGoal_Response_*) src);
            }

            void 
            Fibonacci_SendGoal_Response_PluginSupport_print_data(
                const Fibonacci_SendGoal_Response_ *sample,
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
                    &sample->accepted_, "accepted_", indent_level + 1);    

                builtin_interfaces::msg::dds_::Time_PluginSupport_print_data(
                    (const builtin_interfaces::msg::dds_::Time_*) &sample->stamp_, "stamp_", indent_level + 1);

            }

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            PRESTypePluginParticipantData 
            Fibonacci_SendGoal_Response_Plugin_on_participant_attached(
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
            Fibonacci_SendGoal_Response_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data)
            {

                PRESTypePluginDefaultParticipantData_delete(participant_data);
            }

            PRESTypePluginEndpointData
            Fibonacci_SendGoal_Response_Plugin_on_endpoint_attached(
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
                    test_msgs::action::dds_::Fibonacci_SendGoal_Response_PluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    test_msgs::action::dds_::Fibonacci_SendGoal_Response_PluginSupport_destroy_data,
                    NULL , NULL );

                if (epd == NULL) {
                    return NULL;
                } 

                if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                    serializedSampleMaxSize = test_msgs::action::dds_::Fibonacci_SendGoal_Response_Plugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        test_msgs::action::dds_::Fibonacci_SendGoal_Response_Plugin_get_serialized_sample_max_size, epd,
                        (PRESTypePluginGetSerializedSampleSizeFunction)
                        test_msgs::action::dds_::Fibonacci_SendGoal_Response_Plugin_get_serialized_sample_size,
                        epd) == RTI_FALSE) {
                        PRESTypePluginDefaultEndpointData_delete(epd);
                        return NULL;
                    }
                }

                return epd;    
            }

            void 
            Fibonacci_SendGoal_Response_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data)
            {  

                PRESTypePluginDefaultEndpointData_delete(endpoint_data);
            }

            void    
            Fibonacci_SendGoal_Response_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_SendGoal_Response_ *sample,
                void *handle)
            {

                Fibonacci_SendGoal_Response__finalize_optional_members(sample, RTI_TRUE);

                PRESTypePluginDefaultEndpointData_returnSample(
                    endpoint_data, sample, handle);
            }

            RTIBool 
            Fibonacci_SendGoal_Response_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_SendGoal_Response_ *dst,
                const Fibonacci_SendGoal_Response_ *src)
            {
                if (endpoint_data) {} /* To avoid warnings */
                return test_msgs::action::dds_::Fibonacci_SendGoal_Response_PluginSupport_copy_data(dst,src);
            }

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */
            unsigned int 
            Fibonacci_SendGoal_Response_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            RTIBool 
            Fibonacci_SendGoal_Response_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const Fibonacci_SendGoal_Response_ *sample, 
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
                        stream, &sample->accepted_)) {
                        return RTI_FALSE;
                    }

                    if(!builtin_interfaces::msg::dds_::Time_Plugin_serialize(
                        endpoint_data,
                        (const builtin_interfaces::msg::dds_::Time_*) &sample->stamp_,
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

                return retval;
            }

            RTIBool 
            Fibonacci_SendGoal_Response_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_SendGoal_Response_ *sample,
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

                        test_msgs::action::dds_::Fibonacci_SendGoal_Response__initialize_ex(sample, RTI_FALSE, RTI_FALSE);

                        if (!RTICdrStream_deserializeBoolean(
                            stream, &sample->accepted_)) {
                            goto fin; 
                        }
                        if(!builtin_interfaces::msg::dds_::Time_Plugin_deserialize_sample(
                            endpoint_data,
                            &sample->stamp_,
                            stream,
                            RTI_FALSE, RTI_TRUE,
                            endpoint_plugin_qos)) {
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
            Fibonacci_SendGoal_Response_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const Fibonacci_SendGoal_Response_ *sample)
            {
                struct RTICdrStream stream;
                struct PRESTypePluginDefaultEndpointData epd;
                RTIBool result;

                if (length == NULL) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                Fibonacci_SendGoal_Response_Plugin_get_serialized_sample_max_size(
                    NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

                if (buffer == NULL) {
                    *length = 
                    Fibonacci_SendGoal_Response_Plugin_get_serialized_sample_size(
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

                result = test_msgs::action::dds_::Fibonacci_SendGoal_Response_Plugin_serialize(
                    (PRESTypePluginEndpointData)&epd, sample, &stream, 
                    RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
                    RTI_TRUE, NULL);  

                *length = RTICdrStream_getCurrentPositionOffset(&stream);
                return result;     
            }

            RTIBool
            Fibonacci_SendGoal_Response_Plugin_deserialize_from_cdr_buffer(
                Fibonacci_SendGoal_Response_ *sample,
                const char * buffer,
                unsigned int length)
            {
                struct RTICdrStream stream;

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, length);

                Fibonacci_SendGoal_Response__finalize_optional_members(sample, RTI_TRUE);
                return Fibonacci_SendGoal_Response_Plugin_deserialize_sample( 
                    NULL, sample,
                    &stream, RTI_TRUE, RTI_TRUE, 
                    NULL);
            }

            DDS_ReturnCode_t
            Fibonacci_SendGoal_Response_Plugin_data_to_string(
                const Fibonacci_SendGoal_Response_ *sample,
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

                if (!Fibonacci_SendGoal_Response_Plugin_serialize_to_cdr_buffer(
                    NULL, 
                    &length, 
                    sample)) {
                    return DDS_RETCODE_ERROR;
                }

                RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
                if (buffer == NULL) {
                    return DDS_RETCODE_ERROR;
                }

                if (!Fibonacci_SendGoal_Response_Plugin_serialize_to_cdr_buffer(
                    buffer, 
                    &length, 
                    sample)) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }

                data = DDS_DynamicData_new(
                    Fibonacci_SendGoal_Response__get_typecode(), 
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
            Fibonacci_SendGoal_Response_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_SendGoal_Response_ **sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,   
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos)
            {

                RTIBool result;
                const char *METHOD_NAME = "Fibonacci_SendGoal_Response_Plugin_deserialize";
                if (drop_sample) {} /* To avoid warnings */

                stream->_xTypesState.unassignable = RTI_FALSE;
                result= test_msgs::action::dds_::Fibonacci_SendGoal_Response_Plugin_deserialize_sample( 
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
                        "Fibonacci_SendGoal_Response_");

                }

                return result;

            }

            RTIBool Fibonacci_SendGoal_Response_Plugin_skip(
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
                    if (!builtin_interfaces::msg::dds_::Time_Plugin_skip(
                        endpoint_data,
                        stream, 
                        RTI_FALSE, RTI_TRUE, 
                        endpoint_plugin_qos)) {
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
            Fibonacci_SendGoal_Response_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;

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

                current_alignment +=builtin_interfaces::msg::dds_::Time_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return  current_alignment - initial_alignment;
            }

            unsigned int 
            Fibonacci_SendGoal_Response_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = Fibonacci_SendGoal_Response_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            unsigned int 
            Fibonacci_SendGoal_Response_Plugin_get_serialized_sample_min_size(
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
                current_alignment +=builtin_interfaces::msg::dds_::Time_Plugin_get_serialized_sample_min_size(
                    endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);

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
            Fibonacci_SendGoal_Response_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const Fibonacci_SendGoal_Response_ * sample) 
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

                current_alignment += builtin_interfaces::msg::dds_::Time_Plugin_get_serialized_sample_size(
                    endpoint_data,RTI_FALSE, encapsulation_id,
                    current_alignment, (const builtin_interfaces::msg::dds_::Time_*) &sample->stamp_);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return current_alignment - initial_alignment;
            }

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */

            PRESTypePluginKeyKind 
            Fibonacci_SendGoal_Response_Plugin_get_key_kind(void)
            {
                return PRES_TYPEPLUGIN_NO_KEY;
            }

            RTIBool 
            Fibonacci_SendGoal_Response_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const Fibonacci_SendGoal_Response_ *sample, 
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

                    if (!test_msgs::action::dds_::Fibonacci_SendGoal_Response_Plugin_serialize(
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

            RTIBool Fibonacci_SendGoal_Response_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_SendGoal_Response_ *sample, 
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

                        if (!test_msgs::action::dds_::Fibonacci_SendGoal_Response_Plugin_deserialize_sample(
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

            RTIBool Fibonacci_SendGoal_Response_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_SendGoal_Response_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos)
            {
                RTIBool result;
                if (drop_sample) {} /* To avoid warnings */
                stream->_xTypesState.unassignable = RTI_FALSE;
                result= test_msgs::action::dds_::Fibonacci_SendGoal_Response_Plugin_deserialize_key_sample(
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
            Fibonacci_SendGoal_Response_Plugin_get_serialized_key_max_size_ex(
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

                current_alignment += test_msgs::action::dds_::Fibonacci_SendGoal_Response_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data, overflow,RTI_FALSE, encapsulation_id, current_alignment);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return current_alignment - initial_alignment;
            }

            unsigned int
            Fibonacci_SendGoal_Response_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = Fibonacci_SendGoal_Response_Plugin_get_serialized_key_max_size_ex(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            RTIBool 
            Fibonacci_SendGoal_Response_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_SendGoal_Response_ *sample,
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

                    if (!test_msgs::action::dds_::Fibonacci_SendGoal_Response_Plugin_deserialize_sample(
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
            struct PRESTypePlugin *Fibonacci_SendGoal_Response_Plugin_new(void) 
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
                test_msgs::action::dds_::Fibonacci_SendGoal_Response_Plugin_on_participant_attached;
                plugin->onParticipantDetached =
                (PRESTypePluginOnParticipantDetachedCallback)
                test_msgs::action::dds_::Fibonacci_SendGoal_Response_Plugin_on_participant_detached;
                plugin->onEndpointAttached =
                (PRESTypePluginOnEndpointAttachedCallback)
                test_msgs::action::dds_::Fibonacci_SendGoal_Response_Plugin_on_endpoint_attached;
                plugin->onEndpointDetached =
                (PRESTypePluginOnEndpointDetachedCallback)
                test_msgs::action::dds_::Fibonacci_SendGoal_Response_Plugin_on_endpoint_detached;

                plugin->copySampleFnc =
                (PRESTypePluginCopySampleFunction)
                test_msgs::action::dds_::Fibonacci_SendGoal_Response_Plugin_copy_sample;
                plugin->createSampleFnc =
                (PRESTypePluginCreateSampleFunction)
                Fibonacci_SendGoal_Response_Plugin_create_sample;
                plugin->destroySampleFnc =
                (PRESTypePluginDestroySampleFunction)
                Fibonacci_SendGoal_Response_Plugin_destroy_sample;
                plugin->finalizeOptionalMembersFnc =
                (PRESTypePluginFinalizeOptionalMembersFunction)
                Fibonacci_SendGoal_Response__finalize_optional_members;

                plugin->serializeFnc =
                (PRESTypePluginSerializeFunction)
                test_msgs::action::dds_::Fibonacci_SendGoal_Response_Plugin_serialize;
                plugin->deserializeFnc =
                (PRESTypePluginDeserializeFunction)
                test_msgs::action::dds_::Fibonacci_SendGoal_Response_Plugin_deserialize;
                plugin->getSerializedSampleMaxSizeFnc =
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                test_msgs::action::dds_::Fibonacci_SendGoal_Response_Plugin_get_serialized_sample_max_size;
                plugin->getSerializedSampleMinSizeFnc =
                (PRESTypePluginGetSerializedSampleMinSizeFunction)
                test_msgs::action::dds_::Fibonacci_SendGoal_Response_Plugin_get_serialized_sample_min_size;

                plugin->getSampleFnc =
                (PRESTypePluginGetSampleFunction)
                Fibonacci_SendGoal_Response_Plugin_get_sample;
                plugin->returnSampleFnc =
                (PRESTypePluginReturnSampleFunction)
                Fibonacci_SendGoal_Response_Plugin_return_sample;

                plugin->getKeyKindFnc =
                (PRESTypePluginGetKeyKindFunction)
                test_msgs::action::dds_::Fibonacci_SendGoal_Response_Plugin_get_key_kind;

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
                plugin->typeCode =  (struct RTICdrTypeCode *)test_msgs::action::dds_::Fibonacci_SendGoal_Response__get_typecode();

                plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

                /* Serialized buffer */
                plugin->getBuffer = 
                (PRESTypePluginGetBufferFunction)
                Fibonacci_SendGoal_Response_Plugin_get_buffer;
                plugin->returnBuffer = 
                (PRESTypePluginReturnBufferFunction)
                Fibonacci_SendGoal_Response_Plugin_return_buffer;
                plugin->getSerializedSampleSizeFnc =
                (PRESTypePluginGetSerializedSampleSizeFunction)
                test_msgs::action::dds_::Fibonacci_SendGoal_Response_Plugin_get_serialized_sample_size;

                plugin->endpointTypeName = Fibonacci_SendGoal_Response_TYPENAME;

                return plugin;
            }

            void
            Fibonacci_SendGoal_Response_Plugin_delete(struct PRESTypePlugin *plugin)
            {
                RTIOsapiHeap_freeStructure(plugin);
            } 
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace test_msgs  */
namespace test_msgs {
    namespace action {
        namespace dds_ {

            /* ----------------------------------------------------------------------------
            *  Type Fibonacci_Result_
            * -------------------------------------------------------------------------- */

            /* -----------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------- */

            Fibonacci_Result_*
            Fibonacci_Result_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params) 
            {
                Fibonacci_Result_ *sample = NULL;

                sample = new (std::nothrow) Fibonacci_Result_ ;
                if (sample == NULL) {
                    return NULL;
                }

                if (!test_msgs::action::dds_::Fibonacci_Result__initialize_w_params(sample,alloc_params)) {
                    delete  sample;
                    sample=NULL;
                }
                return sample; 
            } 

            Fibonacci_Result_ *
            Fibonacci_Result_PluginSupport_create_data_ex(RTIBool allocate_pointers) 
            {
                Fibonacci_Result_ *sample = NULL;

                sample = new (std::nothrow) Fibonacci_Result_ ;

                if(sample == NULL) {
                    return NULL;
                }

                if (!test_msgs::action::dds_::Fibonacci_Result__initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                    delete  sample;
                    sample=NULL;
                }

                return sample; 
            }

            Fibonacci_Result_ *
            Fibonacci_Result_PluginSupport_create_data(void)
            {
                return test_msgs::action::dds_::Fibonacci_Result_PluginSupport_create_data_ex(RTI_TRUE);
            }

            void 
            Fibonacci_Result_PluginSupport_destroy_data_w_params(
                Fibonacci_Result_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params) {

                test_msgs::action::dds_::Fibonacci_Result__finalize_w_params(sample,dealloc_params);

                delete  sample;
                sample=NULL;
            }

            void 
            Fibonacci_Result_PluginSupport_destroy_data_ex(
                Fibonacci_Result_ *sample,RTIBool deallocate_pointers) {

                test_msgs::action::dds_::Fibonacci_Result__finalize_ex(sample,deallocate_pointers);

                delete  sample;
                sample=NULL;
            }

            void 
            Fibonacci_Result_PluginSupport_destroy_data(
                Fibonacci_Result_ *sample) {

                test_msgs::action::dds_::Fibonacci_Result_PluginSupport_destroy_data_ex(sample,RTI_TRUE);

            }

            RTIBool 
            Fibonacci_Result_PluginSupport_copy_data(
                Fibonacci_Result_ *dst,
                const Fibonacci_Result_ *src)
            {
                return test_msgs::action::dds_::Fibonacci_Result__copy(dst,(const Fibonacci_Result_*) src);
            }

            void 
            Fibonacci_Result_PluginSupport_print_data(
                const Fibonacci_Result_ *sample,
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

                if (DDS_LongSeq_get_contiguous_bufferI(&sample->sequence_) != NULL) {
                    RTICdrType_printArray(
                        DDS_LongSeq_get_contiguous_bufferI(&sample->sequence_),
                        DDS_LongSeq_get_length(&sample->sequence_),
                        RTI_CDR_LONG_SIZE,
                        (RTICdrTypePrintFunction)RTICdrType_printLong,
                        "sequence_", indent_level + 1);
                } else {
                    RTICdrType_printPointerArray(
                        DDS_LongSeq_get_discontiguous_bufferI(&sample->sequence_),
                        DDS_LongSeq_get_length(&sample->sequence_ ),
                        (RTICdrTypePrintFunction)RTICdrType_printLong,
                        "sequence_", indent_level + 1);
                }

            }

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            PRESTypePluginParticipantData 
            Fibonacci_Result_Plugin_on_participant_attached(
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
            Fibonacci_Result_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data)
            {

                PRESTypePluginDefaultParticipantData_delete(participant_data);
            }

            PRESTypePluginEndpointData
            Fibonacci_Result_Plugin_on_endpoint_attached(
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
                    test_msgs::action::dds_::Fibonacci_Result_PluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    test_msgs::action::dds_::Fibonacci_Result_PluginSupport_destroy_data,
                    NULL , NULL );

                if (epd == NULL) {
                    return NULL;
                } 

                if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                    serializedSampleMaxSize = test_msgs::action::dds_::Fibonacci_Result_Plugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        test_msgs::action::dds_::Fibonacci_Result_Plugin_get_serialized_sample_max_size, epd,
                        (PRESTypePluginGetSerializedSampleSizeFunction)
                        test_msgs::action::dds_::Fibonacci_Result_Plugin_get_serialized_sample_size,
                        epd) == RTI_FALSE) {
                        PRESTypePluginDefaultEndpointData_delete(epd);
                        return NULL;
                    }
                }

                return epd;    
            }

            void 
            Fibonacci_Result_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data)
            {  

                PRESTypePluginDefaultEndpointData_delete(endpoint_data);
            }

            void    
            Fibonacci_Result_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_Result_ *sample,
                void *handle)
            {

                Fibonacci_Result__finalize_optional_members(sample, RTI_TRUE);

                PRESTypePluginDefaultEndpointData_returnSample(
                    endpoint_data, sample, handle);
            }

            RTIBool 
            Fibonacci_Result_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_Result_ *dst,
                const Fibonacci_Result_ *src)
            {
                if (endpoint_data) {} /* To avoid warnings */
                return test_msgs::action::dds_::Fibonacci_Result_PluginSupport_copy_data(dst,src);
            }

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */
            unsigned int 
            Fibonacci_Result_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            RTIBool 
            Fibonacci_Result_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const Fibonacci_Result_ *sample, 
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

                    if (DDS_LongSeq_get_contiguous_bufferI(&sample->sequence_) != NULL) {
                        if (!RTICdrStream_serializePrimitiveSequence(
                            stream,
                            DDS_LongSeq_get_contiguous_bufferI(&sample->sequence_),
                            DDS_LongSeq_get_length(&sample->sequence_),
                            (RTI_INT32_MAX-1),
                            RTI_CDR_LONG_TYPE)) {
                            return RTI_FALSE;
                        } 
                    } else {
                        if (!RTICdrStream_serializePrimitivePointerSequence(
                            stream,
                            (const void **) DDS_LongSeq_get_discontiguous_bufferI(&sample->sequence_),
                            DDS_LongSeq_get_length(&sample->sequence_),
                            (RTI_INT32_MAX-1), 
                            RTI_CDR_LONG_TYPE)) {
                            return RTI_FALSE;
                        } 
                    }

                }

                if(serialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return retval;
            }

            RTIBool 
            Fibonacci_Result_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_Result_ *sample,
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

                        test_msgs::action::dds_::Fibonacci_Result__initialize_ex(sample, RTI_FALSE, RTI_FALSE);

                        {
                            RTICdrUnsignedLong sequence_length;
                            if (!RTICdrStream_lookUnsignedLong(stream,&sequence_length)) {
                                goto fin; 
                            }
                            if (!DDS_LongSeq_set_maximum(&sample->sequence_,sequence_length)) {
                                return RTI_FALSE;
                            }
                            if (DDS_LongSeq_get_contiguous_bufferI(&sample->sequence_) != NULL) {
                                if (!RTICdrStream_deserializePrimitiveSequence(
                                    stream,
                                    DDS_LongSeq_get_contiguous_bufferI(&sample->sequence_),
                                    &sequence_length,
                                    DDS_LongSeq_get_maximum(&sample->sequence_),
                                    RTI_CDR_LONG_TYPE)){
                                    goto fin; 
                                }
                            } else {
                                if (!RTICdrStream_deserializePrimitivePointerSequence(
                                    stream,
                                    (void **) DDS_LongSeq_get_discontiguous_bufferI(&sample->sequence_),
                                    &sequence_length,
                                    DDS_LongSeq_get_maximum(&sample->sequence_),
                                    RTI_CDR_LONG_TYPE)){
                                    goto fin; 
                                }
                            }
                            if (!DDS_LongSeq_set_length(&sample->sequence_, sequence_length)) {
                                return RTI_FALSE;
                            }

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
            Fibonacci_Result_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const Fibonacci_Result_ *sample)
            {
                struct RTICdrStream stream;
                struct PRESTypePluginDefaultEndpointData epd;
                RTIBool result;

                if (length == NULL) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                Fibonacci_Result_Plugin_get_serialized_sample_max_size(
                    NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

                if (buffer == NULL) {
                    *length = 
                    Fibonacci_Result_Plugin_get_serialized_sample_size(
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

                result = test_msgs::action::dds_::Fibonacci_Result_Plugin_serialize(
                    (PRESTypePluginEndpointData)&epd, sample, &stream, 
                    RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
                    RTI_TRUE, NULL);  

                *length = RTICdrStream_getCurrentPositionOffset(&stream);
                return result;     
            }

            RTIBool
            Fibonacci_Result_Plugin_deserialize_from_cdr_buffer(
                Fibonacci_Result_ *sample,
                const char * buffer,
                unsigned int length)
            {
                struct RTICdrStream stream;

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, length);

                Fibonacci_Result__finalize_optional_members(sample, RTI_TRUE);
                return Fibonacci_Result_Plugin_deserialize_sample( 
                    NULL, sample,
                    &stream, RTI_TRUE, RTI_TRUE, 
                    NULL);
            }

            DDS_ReturnCode_t
            Fibonacci_Result_Plugin_data_to_string(
                const Fibonacci_Result_ *sample,
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

                if (!Fibonacci_Result_Plugin_serialize_to_cdr_buffer(
                    NULL, 
                    &length, 
                    sample)) {
                    return DDS_RETCODE_ERROR;
                }

                RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
                if (buffer == NULL) {
                    return DDS_RETCODE_ERROR;
                }

                if (!Fibonacci_Result_Plugin_serialize_to_cdr_buffer(
                    buffer, 
                    &length, 
                    sample)) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }

                data = DDS_DynamicData_new(
                    Fibonacci_Result__get_typecode(), 
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
            Fibonacci_Result_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_Result_ **sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,   
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos)
            {

                RTIBool result;
                const char *METHOD_NAME = "Fibonacci_Result_Plugin_deserialize";
                if (drop_sample) {} /* To avoid warnings */

                stream->_xTypesState.unassignable = RTI_FALSE;
                result= test_msgs::action::dds_::Fibonacci_Result_Plugin_deserialize_sample( 
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
                        "Fibonacci_Result_");

                }

                return result;

            }

            RTIBool Fibonacci_Result_Plugin_skip(
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

                    {
                        RTICdrUnsignedLong sequence_length;
                        if (!RTICdrStream_skipPrimitiveSequence(
                            stream,
                            &sequence_length,
                            RTI_CDR_LONG_TYPE)){
                            goto fin; 
                        }
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
            Fibonacci_Result_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                if (endpoint_data) {} /* To avoid warnings */
                if (include_encapsulation) {}
                if (encapsulation_id) {}
                if (current_alignment) {}

                if (overflow != NULL) {
                    *overflow = RTI_TRUE;
                }

                return RTI_CDR_MAX_SERIALIZED_SIZE;

            }

            unsigned int 
            Fibonacci_Result_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = Fibonacci_Result_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            unsigned int 
            Fibonacci_Result_Plugin_get_serialized_sample_min_size(
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

                current_alignment +=    RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
                    current_alignment,0, RTI_CDR_LONG_TYPE);

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
            Fibonacci_Result_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const Fibonacci_Result_ * sample) 
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

                current_alignment += RTICdrType_getPrimitiveSequenceSerializedSize(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        DDS_LongSeq_get_length(&sample->sequence_),
                        RTI_CDR_LONG_TYPE);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return current_alignment - initial_alignment;
            }

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */

            PRESTypePluginKeyKind 
            Fibonacci_Result_Plugin_get_key_kind(void)
            {
                return PRES_TYPEPLUGIN_NO_KEY;
            }

            RTIBool 
            Fibonacci_Result_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const Fibonacci_Result_ *sample, 
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

                    if (!test_msgs::action::dds_::Fibonacci_Result_Plugin_serialize(
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

            RTIBool Fibonacci_Result_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_Result_ *sample, 
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

                        if (!test_msgs::action::dds_::Fibonacci_Result_Plugin_deserialize_sample(
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

            RTIBool Fibonacci_Result_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_Result_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos)
            {
                RTIBool result;
                if (drop_sample) {} /* To avoid warnings */
                stream->_xTypesState.unassignable = RTI_FALSE;
                result= test_msgs::action::dds_::Fibonacci_Result_Plugin_deserialize_key_sample(
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
            Fibonacci_Result_Plugin_get_serialized_key_max_size_ex(
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

                current_alignment += test_msgs::action::dds_::Fibonacci_Result_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data, overflow,RTI_FALSE, encapsulation_id, current_alignment);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return current_alignment - initial_alignment;
            }

            unsigned int
            Fibonacci_Result_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = Fibonacci_Result_Plugin_get_serialized_key_max_size_ex(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            RTIBool 
            Fibonacci_Result_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_Result_ *sample,
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

                    if (!test_msgs::action::dds_::Fibonacci_Result_Plugin_deserialize_sample(
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
            struct PRESTypePlugin *Fibonacci_Result_Plugin_new(void) 
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
                test_msgs::action::dds_::Fibonacci_Result_Plugin_on_participant_attached;
                plugin->onParticipantDetached =
                (PRESTypePluginOnParticipantDetachedCallback)
                test_msgs::action::dds_::Fibonacci_Result_Plugin_on_participant_detached;
                plugin->onEndpointAttached =
                (PRESTypePluginOnEndpointAttachedCallback)
                test_msgs::action::dds_::Fibonacci_Result_Plugin_on_endpoint_attached;
                plugin->onEndpointDetached =
                (PRESTypePluginOnEndpointDetachedCallback)
                test_msgs::action::dds_::Fibonacci_Result_Plugin_on_endpoint_detached;

                plugin->copySampleFnc =
                (PRESTypePluginCopySampleFunction)
                test_msgs::action::dds_::Fibonacci_Result_Plugin_copy_sample;
                plugin->createSampleFnc =
                (PRESTypePluginCreateSampleFunction)
                Fibonacci_Result_Plugin_create_sample;
                plugin->destroySampleFnc =
                (PRESTypePluginDestroySampleFunction)
                Fibonacci_Result_Plugin_destroy_sample;
                plugin->finalizeOptionalMembersFnc =
                (PRESTypePluginFinalizeOptionalMembersFunction)
                Fibonacci_Result__finalize_optional_members;

                plugin->serializeFnc =
                (PRESTypePluginSerializeFunction)
                test_msgs::action::dds_::Fibonacci_Result_Plugin_serialize;
                plugin->deserializeFnc =
                (PRESTypePluginDeserializeFunction)
                test_msgs::action::dds_::Fibonacci_Result_Plugin_deserialize;
                plugin->getSerializedSampleMaxSizeFnc =
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                test_msgs::action::dds_::Fibonacci_Result_Plugin_get_serialized_sample_max_size;
                plugin->getSerializedSampleMinSizeFnc =
                (PRESTypePluginGetSerializedSampleMinSizeFunction)
                test_msgs::action::dds_::Fibonacci_Result_Plugin_get_serialized_sample_min_size;

                plugin->getSampleFnc =
                (PRESTypePluginGetSampleFunction)
                Fibonacci_Result_Plugin_get_sample;
                plugin->returnSampleFnc =
                (PRESTypePluginReturnSampleFunction)
                Fibonacci_Result_Plugin_return_sample;

                plugin->getKeyKindFnc =
                (PRESTypePluginGetKeyKindFunction)
                test_msgs::action::dds_::Fibonacci_Result_Plugin_get_key_kind;

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
                plugin->typeCode =  (struct RTICdrTypeCode *)test_msgs::action::dds_::Fibonacci_Result__get_typecode();

                plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

                /* Serialized buffer */
                plugin->getBuffer = 
                (PRESTypePluginGetBufferFunction)
                Fibonacci_Result_Plugin_get_buffer;
                plugin->returnBuffer = 
                (PRESTypePluginReturnBufferFunction)
                Fibonacci_Result_Plugin_return_buffer;
                plugin->getSerializedSampleSizeFnc =
                (PRESTypePluginGetSerializedSampleSizeFunction)
                test_msgs::action::dds_::Fibonacci_Result_Plugin_get_serialized_sample_size;

                plugin->endpointTypeName = Fibonacci_Result_TYPENAME;

                return plugin;
            }

            void
            Fibonacci_Result_Plugin_delete(struct PRESTypePlugin *plugin)
            {
                RTIOsapiHeap_freeStructure(plugin);
            } 
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace test_msgs  */
namespace test_msgs {
    namespace action {
        namespace dds_ {

            /* ----------------------------------------------------------------------------
            *  Type Fibonacci_GetResult_Request_
            * -------------------------------------------------------------------------- */

            /* -----------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------- */

            Fibonacci_GetResult_Request_*
            Fibonacci_GetResult_Request_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params) 
            {
                Fibonacci_GetResult_Request_ *sample = NULL;

                sample = new (std::nothrow) Fibonacci_GetResult_Request_ ;
                if (sample == NULL) {
                    return NULL;
                }

                if (!test_msgs::action::dds_::Fibonacci_GetResult_Request__initialize_w_params(sample,alloc_params)) {
                    delete  sample;
                    sample=NULL;
                }
                return sample; 
            } 

            Fibonacci_GetResult_Request_ *
            Fibonacci_GetResult_Request_PluginSupport_create_data_ex(RTIBool allocate_pointers) 
            {
                Fibonacci_GetResult_Request_ *sample = NULL;

                sample = new (std::nothrow) Fibonacci_GetResult_Request_ ;

                if(sample == NULL) {
                    return NULL;
                }

                if (!test_msgs::action::dds_::Fibonacci_GetResult_Request__initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                    delete  sample;
                    sample=NULL;
                }

                return sample; 
            }

            Fibonacci_GetResult_Request_ *
            Fibonacci_GetResult_Request_PluginSupport_create_data(void)
            {
                return test_msgs::action::dds_::Fibonacci_GetResult_Request_PluginSupport_create_data_ex(RTI_TRUE);
            }

            void 
            Fibonacci_GetResult_Request_PluginSupport_destroy_data_w_params(
                Fibonacci_GetResult_Request_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params) {

                test_msgs::action::dds_::Fibonacci_GetResult_Request__finalize_w_params(sample,dealloc_params);

                delete  sample;
                sample=NULL;
            }

            void 
            Fibonacci_GetResult_Request_PluginSupport_destroy_data_ex(
                Fibonacci_GetResult_Request_ *sample,RTIBool deallocate_pointers) {

                test_msgs::action::dds_::Fibonacci_GetResult_Request__finalize_ex(sample,deallocate_pointers);

                delete  sample;
                sample=NULL;
            }

            void 
            Fibonacci_GetResult_Request_PluginSupport_destroy_data(
                Fibonacci_GetResult_Request_ *sample) {

                test_msgs::action::dds_::Fibonacci_GetResult_Request_PluginSupport_destroy_data_ex(sample,RTI_TRUE);

            }

            RTIBool 
            Fibonacci_GetResult_Request_PluginSupport_copy_data(
                Fibonacci_GetResult_Request_ *dst,
                const Fibonacci_GetResult_Request_ *src)
            {
                return test_msgs::action::dds_::Fibonacci_GetResult_Request__copy(dst,(const Fibonacci_GetResult_Request_*) src);
            }

            void 
            Fibonacci_GetResult_Request_PluginSupport_print_data(
                const Fibonacci_GetResult_Request_ *sample,
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

                unique_identifier_msgs::msg::dds_::UUID_PluginSupport_print_data(
                    (const unique_identifier_msgs::msg::dds_::UUID_*) &sample->goal_id_, "goal_id_", indent_level + 1);

            }

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            PRESTypePluginParticipantData 
            Fibonacci_GetResult_Request_Plugin_on_participant_attached(
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
            Fibonacci_GetResult_Request_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data)
            {

                PRESTypePluginDefaultParticipantData_delete(participant_data);
            }

            PRESTypePluginEndpointData
            Fibonacci_GetResult_Request_Plugin_on_endpoint_attached(
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
                    test_msgs::action::dds_::Fibonacci_GetResult_Request_PluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    test_msgs::action::dds_::Fibonacci_GetResult_Request_PluginSupport_destroy_data,
                    NULL , NULL );

                if (epd == NULL) {
                    return NULL;
                } 

                if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                    serializedSampleMaxSize = test_msgs::action::dds_::Fibonacci_GetResult_Request_Plugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        test_msgs::action::dds_::Fibonacci_GetResult_Request_Plugin_get_serialized_sample_max_size, epd,
                        (PRESTypePluginGetSerializedSampleSizeFunction)
                        test_msgs::action::dds_::Fibonacci_GetResult_Request_Plugin_get_serialized_sample_size,
                        epd) == RTI_FALSE) {
                        PRESTypePluginDefaultEndpointData_delete(epd);
                        return NULL;
                    }
                }

                return epd;    
            }

            void 
            Fibonacci_GetResult_Request_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data)
            {  

                PRESTypePluginDefaultEndpointData_delete(endpoint_data);
            }

            void    
            Fibonacci_GetResult_Request_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_GetResult_Request_ *sample,
                void *handle)
            {

                Fibonacci_GetResult_Request__finalize_optional_members(sample, RTI_TRUE);

                PRESTypePluginDefaultEndpointData_returnSample(
                    endpoint_data, sample, handle);
            }

            RTIBool 
            Fibonacci_GetResult_Request_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_GetResult_Request_ *dst,
                const Fibonacci_GetResult_Request_ *src)
            {
                if (endpoint_data) {} /* To avoid warnings */
                return test_msgs::action::dds_::Fibonacci_GetResult_Request_PluginSupport_copy_data(dst,src);
            }

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */
            unsigned int 
            Fibonacci_GetResult_Request_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            RTIBool 
            Fibonacci_GetResult_Request_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const Fibonacci_GetResult_Request_ *sample, 
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

                    if(!unique_identifier_msgs::msg::dds_::UUID_Plugin_serialize(
                        endpoint_data,
                        (const unique_identifier_msgs::msg::dds_::UUID_*) &sample->goal_id_,
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

                return retval;
            }

            RTIBool 
            Fibonacci_GetResult_Request_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_GetResult_Request_ *sample,
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

                        test_msgs::action::dds_::Fibonacci_GetResult_Request__initialize_ex(sample, RTI_FALSE, RTI_FALSE);

                        if(!unique_identifier_msgs::msg::dds_::UUID_Plugin_deserialize_sample(
                            endpoint_data,
                            &sample->goal_id_,
                            stream,
                            RTI_FALSE, RTI_TRUE,
                            endpoint_plugin_qos)) {
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
            Fibonacci_GetResult_Request_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const Fibonacci_GetResult_Request_ *sample)
            {
                struct RTICdrStream stream;
                struct PRESTypePluginDefaultEndpointData epd;
                RTIBool result;

                if (length == NULL) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                Fibonacci_GetResult_Request_Plugin_get_serialized_sample_max_size(
                    NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

                if (buffer == NULL) {
                    *length = 
                    Fibonacci_GetResult_Request_Plugin_get_serialized_sample_size(
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

                result = test_msgs::action::dds_::Fibonacci_GetResult_Request_Plugin_serialize(
                    (PRESTypePluginEndpointData)&epd, sample, &stream, 
                    RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
                    RTI_TRUE, NULL);  

                *length = RTICdrStream_getCurrentPositionOffset(&stream);
                return result;     
            }

            RTIBool
            Fibonacci_GetResult_Request_Plugin_deserialize_from_cdr_buffer(
                Fibonacci_GetResult_Request_ *sample,
                const char * buffer,
                unsigned int length)
            {
                struct RTICdrStream stream;

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, length);

                Fibonacci_GetResult_Request__finalize_optional_members(sample, RTI_TRUE);
                return Fibonacci_GetResult_Request_Plugin_deserialize_sample( 
                    NULL, sample,
                    &stream, RTI_TRUE, RTI_TRUE, 
                    NULL);
            }

            DDS_ReturnCode_t
            Fibonacci_GetResult_Request_Plugin_data_to_string(
                const Fibonacci_GetResult_Request_ *sample,
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

                if (!Fibonacci_GetResult_Request_Plugin_serialize_to_cdr_buffer(
                    NULL, 
                    &length, 
                    sample)) {
                    return DDS_RETCODE_ERROR;
                }

                RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
                if (buffer == NULL) {
                    return DDS_RETCODE_ERROR;
                }

                if (!Fibonacci_GetResult_Request_Plugin_serialize_to_cdr_buffer(
                    buffer, 
                    &length, 
                    sample)) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }

                data = DDS_DynamicData_new(
                    Fibonacci_GetResult_Request__get_typecode(), 
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
            Fibonacci_GetResult_Request_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_GetResult_Request_ **sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,   
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos)
            {

                RTIBool result;
                const char *METHOD_NAME = "Fibonacci_GetResult_Request_Plugin_deserialize";
                if (drop_sample) {} /* To avoid warnings */

                stream->_xTypesState.unassignable = RTI_FALSE;
                result= test_msgs::action::dds_::Fibonacci_GetResult_Request_Plugin_deserialize_sample( 
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
                        "Fibonacci_GetResult_Request_");

                }

                return result;

            }

            RTIBool Fibonacci_GetResult_Request_Plugin_skip(
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

                    if (!unique_identifier_msgs::msg::dds_::UUID_Plugin_skip(
                        endpoint_data,
                        stream, 
                        RTI_FALSE, RTI_TRUE, 
                        endpoint_plugin_qos)) {
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
            Fibonacci_GetResult_Request_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                }

                current_alignment +=unique_identifier_msgs::msg::dds_::UUID_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return  current_alignment - initial_alignment;
            }

            unsigned int 
            Fibonacci_GetResult_Request_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = Fibonacci_GetResult_Request_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            unsigned int 
            Fibonacci_GetResult_Request_Plugin_get_serialized_sample_min_size(
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

                current_alignment +=unique_identifier_msgs::msg::dds_::UUID_Plugin_get_serialized_sample_min_size(
                    endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);

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
            Fibonacci_GetResult_Request_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const Fibonacci_GetResult_Request_ * sample) 
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

                current_alignment += unique_identifier_msgs::msg::dds_::UUID_Plugin_get_serialized_sample_size(
                    endpoint_data,RTI_FALSE, encapsulation_id,
                    current_alignment, (const unique_identifier_msgs::msg::dds_::UUID_*) &sample->goal_id_);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return current_alignment - initial_alignment;
            }

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */

            PRESTypePluginKeyKind 
            Fibonacci_GetResult_Request_Plugin_get_key_kind(void)
            {
                return PRES_TYPEPLUGIN_NO_KEY;
            }

            RTIBool 
            Fibonacci_GetResult_Request_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const Fibonacci_GetResult_Request_ *sample, 
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

                    if (!test_msgs::action::dds_::Fibonacci_GetResult_Request_Plugin_serialize(
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

            RTIBool Fibonacci_GetResult_Request_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_GetResult_Request_ *sample, 
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

                        if (!test_msgs::action::dds_::Fibonacci_GetResult_Request_Plugin_deserialize_sample(
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

            RTIBool Fibonacci_GetResult_Request_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_GetResult_Request_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos)
            {
                RTIBool result;
                if (drop_sample) {} /* To avoid warnings */
                stream->_xTypesState.unassignable = RTI_FALSE;
                result= test_msgs::action::dds_::Fibonacci_GetResult_Request_Plugin_deserialize_key_sample(
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
            Fibonacci_GetResult_Request_Plugin_get_serialized_key_max_size_ex(
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

                current_alignment += test_msgs::action::dds_::Fibonacci_GetResult_Request_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data, overflow,RTI_FALSE, encapsulation_id, current_alignment);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return current_alignment - initial_alignment;
            }

            unsigned int
            Fibonacci_GetResult_Request_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = Fibonacci_GetResult_Request_Plugin_get_serialized_key_max_size_ex(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            RTIBool 
            Fibonacci_GetResult_Request_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_GetResult_Request_ *sample,
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

                    if (!test_msgs::action::dds_::Fibonacci_GetResult_Request_Plugin_deserialize_sample(
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
            struct PRESTypePlugin *Fibonacci_GetResult_Request_Plugin_new(void) 
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
                test_msgs::action::dds_::Fibonacci_GetResult_Request_Plugin_on_participant_attached;
                plugin->onParticipantDetached =
                (PRESTypePluginOnParticipantDetachedCallback)
                test_msgs::action::dds_::Fibonacci_GetResult_Request_Plugin_on_participant_detached;
                plugin->onEndpointAttached =
                (PRESTypePluginOnEndpointAttachedCallback)
                test_msgs::action::dds_::Fibonacci_GetResult_Request_Plugin_on_endpoint_attached;
                plugin->onEndpointDetached =
                (PRESTypePluginOnEndpointDetachedCallback)
                test_msgs::action::dds_::Fibonacci_GetResult_Request_Plugin_on_endpoint_detached;

                plugin->copySampleFnc =
                (PRESTypePluginCopySampleFunction)
                test_msgs::action::dds_::Fibonacci_GetResult_Request_Plugin_copy_sample;
                plugin->createSampleFnc =
                (PRESTypePluginCreateSampleFunction)
                Fibonacci_GetResult_Request_Plugin_create_sample;
                plugin->destroySampleFnc =
                (PRESTypePluginDestroySampleFunction)
                Fibonacci_GetResult_Request_Plugin_destroy_sample;
                plugin->finalizeOptionalMembersFnc =
                (PRESTypePluginFinalizeOptionalMembersFunction)
                Fibonacci_GetResult_Request__finalize_optional_members;

                plugin->serializeFnc =
                (PRESTypePluginSerializeFunction)
                test_msgs::action::dds_::Fibonacci_GetResult_Request_Plugin_serialize;
                plugin->deserializeFnc =
                (PRESTypePluginDeserializeFunction)
                test_msgs::action::dds_::Fibonacci_GetResult_Request_Plugin_deserialize;
                plugin->getSerializedSampleMaxSizeFnc =
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                test_msgs::action::dds_::Fibonacci_GetResult_Request_Plugin_get_serialized_sample_max_size;
                plugin->getSerializedSampleMinSizeFnc =
                (PRESTypePluginGetSerializedSampleMinSizeFunction)
                test_msgs::action::dds_::Fibonacci_GetResult_Request_Plugin_get_serialized_sample_min_size;

                plugin->getSampleFnc =
                (PRESTypePluginGetSampleFunction)
                Fibonacci_GetResult_Request_Plugin_get_sample;
                plugin->returnSampleFnc =
                (PRESTypePluginReturnSampleFunction)
                Fibonacci_GetResult_Request_Plugin_return_sample;

                plugin->getKeyKindFnc =
                (PRESTypePluginGetKeyKindFunction)
                test_msgs::action::dds_::Fibonacci_GetResult_Request_Plugin_get_key_kind;

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
                plugin->typeCode =  (struct RTICdrTypeCode *)test_msgs::action::dds_::Fibonacci_GetResult_Request__get_typecode();

                plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

                /* Serialized buffer */
                plugin->getBuffer = 
                (PRESTypePluginGetBufferFunction)
                Fibonacci_GetResult_Request_Plugin_get_buffer;
                plugin->returnBuffer = 
                (PRESTypePluginReturnBufferFunction)
                Fibonacci_GetResult_Request_Plugin_return_buffer;
                plugin->getSerializedSampleSizeFnc =
                (PRESTypePluginGetSerializedSampleSizeFunction)
                test_msgs::action::dds_::Fibonacci_GetResult_Request_Plugin_get_serialized_sample_size;

                plugin->endpointTypeName = Fibonacci_GetResult_Request_TYPENAME;

                return plugin;
            }

            void
            Fibonacci_GetResult_Request_Plugin_delete(struct PRESTypePlugin *plugin)
            {
                RTIOsapiHeap_freeStructure(plugin);
            } 
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace test_msgs  */
namespace test_msgs {
    namespace action {
        namespace dds_ {

            /* ----------------------------------------------------------------------------
            *  Type Fibonacci_GetResult_Response_
            * -------------------------------------------------------------------------- */

            /* -----------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------- */

            Fibonacci_GetResult_Response_*
            Fibonacci_GetResult_Response_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params) 
            {
                Fibonacci_GetResult_Response_ *sample = NULL;

                sample = new (std::nothrow) Fibonacci_GetResult_Response_ ;
                if (sample == NULL) {
                    return NULL;
                }

                if (!test_msgs::action::dds_::Fibonacci_GetResult_Response__initialize_w_params(sample,alloc_params)) {
                    delete  sample;
                    sample=NULL;
                }
                return sample; 
            } 

            Fibonacci_GetResult_Response_ *
            Fibonacci_GetResult_Response_PluginSupport_create_data_ex(RTIBool allocate_pointers) 
            {
                Fibonacci_GetResult_Response_ *sample = NULL;

                sample = new (std::nothrow) Fibonacci_GetResult_Response_ ;

                if(sample == NULL) {
                    return NULL;
                }

                if (!test_msgs::action::dds_::Fibonacci_GetResult_Response__initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                    delete  sample;
                    sample=NULL;
                }

                return sample; 
            }

            Fibonacci_GetResult_Response_ *
            Fibonacci_GetResult_Response_PluginSupport_create_data(void)
            {
                return test_msgs::action::dds_::Fibonacci_GetResult_Response_PluginSupport_create_data_ex(RTI_TRUE);
            }

            void 
            Fibonacci_GetResult_Response_PluginSupport_destroy_data_w_params(
                Fibonacci_GetResult_Response_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params) {

                test_msgs::action::dds_::Fibonacci_GetResult_Response__finalize_w_params(sample,dealloc_params);

                delete  sample;
                sample=NULL;
            }

            void 
            Fibonacci_GetResult_Response_PluginSupport_destroy_data_ex(
                Fibonacci_GetResult_Response_ *sample,RTIBool deallocate_pointers) {

                test_msgs::action::dds_::Fibonacci_GetResult_Response__finalize_ex(sample,deallocate_pointers);

                delete  sample;
                sample=NULL;
            }

            void 
            Fibonacci_GetResult_Response_PluginSupport_destroy_data(
                Fibonacci_GetResult_Response_ *sample) {

                test_msgs::action::dds_::Fibonacci_GetResult_Response_PluginSupport_destroy_data_ex(sample,RTI_TRUE);

            }

            RTIBool 
            Fibonacci_GetResult_Response_PluginSupport_copy_data(
                Fibonacci_GetResult_Response_ *dst,
                const Fibonacci_GetResult_Response_ *src)
            {
                return test_msgs::action::dds_::Fibonacci_GetResult_Response__copy(dst,(const Fibonacci_GetResult_Response_*) src);
            }

            void 
            Fibonacci_GetResult_Response_PluginSupport_print_data(
                const Fibonacci_GetResult_Response_ *sample,
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

                RTICdrType_printOctet(
                    &sample->status_, "status_", indent_level + 1);    

                test_msgs::action::dds_::Fibonacci_Result_PluginSupport_print_data(
                    (const test_msgs::action::dds_::Fibonacci_Result_*) &sample->result_, "result_", indent_level + 1);

            }

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            PRESTypePluginParticipantData 
            Fibonacci_GetResult_Response_Plugin_on_participant_attached(
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
            Fibonacci_GetResult_Response_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data)
            {

                PRESTypePluginDefaultParticipantData_delete(participant_data);
            }

            PRESTypePluginEndpointData
            Fibonacci_GetResult_Response_Plugin_on_endpoint_attached(
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
                    test_msgs::action::dds_::Fibonacci_GetResult_Response_PluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    test_msgs::action::dds_::Fibonacci_GetResult_Response_PluginSupport_destroy_data,
                    NULL , NULL );

                if (epd == NULL) {
                    return NULL;
                } 

                if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                    serializedSampleMaxSize = test_msgs::action::dds_::Fibonacci_GetResult_Response_Plugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        test_msgs::action::dds_::Fibonacci_GetResult_Response_Plugin_get_serialized_sample_max_size, epd,
                        (PRESTypePluginGetSerializedSampleSizeFunction)
                        test_msgs::action::dds_::Fibonacci_GetResult_Response_Plugin_get_serialized_sample_size,
                        epd) == RTI_FALSE) {
                        PRESTypePluginDefaultEndpointData_delete(epd);
                        return NULL;
                    }
                }

                return epd;    
            }

            void 
            Fibonacci_GetResult_Response_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data)
            {  

                PRESTypePluginDefaultEndpointData_delete(endpoint_data);
            }

            void    
            Fibonacci_GetResult_Response_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_GetResult_Response_ *sample,
                void *handle)
            {

                Fibonacci_GetResult_Response__finalize_optional_members(sample, RTI_TRUE);

                PRESTypePluginDefaultEndpointData_returnSample(
                    endpoint_data, sample, handle);
            }

            RTIBool 
            Fibonacci_GetResult_Response_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_GetResult_Response_ *dst,
                const Fibonacci_GetResult_Response_ *src)
            {
                if (endpoint_data) {} /* To avoid warnings */
                return test_msgs::action::dds_::Fibonacci_GetResult_Response_PluginSupport_copy_data(dst,src);
            }

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */
            unsigned int 
            Fibonacci_GetResult_Response_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            RTIBool 
            Fibonacci_GetResult_Response_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const Fibonacci_GetResult_Response_ *sample, 
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

                    if (!RTICdrStream_serializeOctet(
                        stream, &sample->status_)) {
                        return RTI_FALSE;
                    }

                    if(!test_msgs::action::dds_::Fibonacci_Result_Plugin_serialize(
                        endpoint_data,
                        (const test_msgs::action::dds_::Fibonacci_Result_*) &sample->result_,
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

                return retval;
            }

            RTIBool 
            Fibonacci_GetResult_Response_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_GetResult_Response_ *sample,
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

                        test_msgs::action::dds_::Fibonacci_GetResult_Response__initialize_ex(sample, RTI_FALSE, RTI_FALSE);

                        if (!RTICdrStream_deserializeOctet(
                            stream, &sample->status_)) {
                            goto fin; 
                        }
                        if(!test_msgs::action::dds_::Fibonacci_Result_Plugin_deserialize_sample(
                            endpoint_data,
                            &sample->result_,
                            stream,
                            RTI_FALSE, RTI_TRUE,
                            endpoint_plugin_qos)) {
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
            Fibonacci_GetResult_Response_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const Fibonacci_GetResult_Response_ *sample)
            {
                struct RTICdrStream stream;
                struct PRESTypePluginDefaultEndpointData epd;
                RTIBool result;

                if (length == NULL) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                Fibonacci_GetResult_Response_Plugin_get_serialized_sample_max_size(
                    NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

                if (buffer == NULL) {
                    *length = 
                    Fibonacci_GetResult_Response_Plugin_get_serialized_sample_size(
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

                result = test_msgs::action::dds_::Fibonacci_GetResult_Response_Plugin_serialize(
                    (PRESTypePluginEndpointData)&epd, sample, &stream, 
                    RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
                    RTI_TRUE, NULL);  

                *length = RTICdrStream_getCurrentPositionOffset(&stream);
                return result;     
            }

            RTIBool
            Fibonacci_GetResult_Response_Plugin_deserialize_from_cdr_buffer(
                Fibonacci_GetResult_Response_ *sample,
                const char * buffer,
                unsigned int length)
            {
                struct RTICdrStream stream;

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, length);

                Fibonacci_GetResult_Response__finalize_optional_members(sample, RTI_TRUE);
                return Fibonacci_GetResult_Response_Plugin_deserialize_sample( 
                    NULL, sample,
                    &stream, RTI_TRUE, RTI_TRUE, 
                    NULL);
            }

            DDS_ReturnCode_t
            Fibonacci_GetResult_Response_Plugin_data_to_string(
                const Fibonacci_GetResult_Response_ *sample,
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

                if (!Fibonacci_GetResult_Response_Plugin_serialize_to_cdr_buffer(
                    NULL, 
                    &length, 
                    sample)) {
                    return DDS_RETCODE_ERROR;
                }

                RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
                if (buffer == NULL) {
                    return DDS_RETCODE_ERROR;
                }

                if (!Fibonacci_GetResult_Response_Plugin_serialize_to_cdr_buffer(
                    buffer, 
                    &length, 
                    sample)) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }

                data = DDS_DynamicData_new(
                    Fibonacci_GetResult_Response__get_typecode(), 
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
            Fibonacci_GetResult_Response_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_GetResult_Response_ **sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,   
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos)
            {

                RTIBool result;
                const char *METHOD_NAME = "Fibonacci_GetResult_Response_Plugin_deserialize";
                if (drop_sample) {} /* To avoid warnings */

                stream->_xTypesState.unassignable = RTI_FALSE;
                result= test_msgs::action::dds_::Fibonacci_GetResult_Response_Plugin_deserialize_sample( 
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
                        "Fibonacci_GetResult_Response_");

                }

                return result;

            }

            RTIBool Fibonacci_GetResult_Response_Plugin_skip(
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

                    if (!RTICdrStream_skipOctet (stream)) {
                        goto fin; 
                    }
                    if (!test_msgs::action::dds_::Fibonacci_Result_Plugin_skip(
                        endpoint_data,
                        stream, 
                        RTI_FALSE, RTI_TRUE, 
                        endpoint_plugin_qos)) {
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
            Fibonacci_GetResult_Response_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                }

                current_alignment +=RTICdrType_getOctetMaxSizeSerialized(
                    current_alignment);

                current_alignment +=test_msgs::action::dds_::Fibonacci_Result_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return  current_alignment - initial_alignment;
            }

            unsigned int 
            Fibonacci_GetResult_Response_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = Fibonacci_GetResult_Response_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            unsigned int 
            Fibonacci_GetResult_Response_Plugin_get_serialized_sample_min_size(
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

                current_alignment +=RTICdrType_getOctetMaxSizeSerialized(
                    current_alignment);
                current_alignment +=test_msgs::action::dds_::Fibonacci_Result_Plugin_get_serialized_sample_min_size(
                    endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);

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
            Fibonacci_GetResult_Response_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const Fibonacci_GetResult_Response_ * sample) 
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

                current_alignment += RTICdrType_getOctetMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment));

                current_alignment += test_msgs::action::dds_::Fibonacci_Result_Plugin_get_serialized_sample_size(
                    endpoint_data,RTI_FALSE, encapsulation_id,
                    current_alignment, (const test_msgs::action::dds_::Fibonacci_Result_*) &sample->result_);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return current_alignment - initial_alignment;
            }

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */

            PRESTypePluginKeyKind 
            Fibonacci_GetResult_Response_Plugin_get_key_kind(void)
            {
                return PRES_TYPEPLUGIN_NO_KEY;
            }

            RTIBool 
            Fibonacci_GetResult_Response_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const Fibonacci_GetResult_Response_ *sample, 
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

                    if (!test_msgs::action::dds_::Fibonacci_GetResult_Response_Plugin_serialize(
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

            RTIBool Fibonacci_GetResult_Response_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_GetResult_Response_ *sample, 
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

                        if (!test_msgs::action::dds_::Fibonacci_GetResult_Response_Plugin_deserialize_sample(
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

            RTIBool Fibonacci_GetResult_Response_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_GetResult_Response_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos)
            {
                RTIBool result;
                if (drop_sample) {} /* To avoid warnings */
                stream->_xTypesState.unassignable = RTI_FALSE;
                result= test_msgs::action::dds_::Fibonacci_GetResult_Response_Plugin_deserialize_key_sample(
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
            Fibonacci_GetResult_Response_Plugin_get_serialized_key_max_size_ex(
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

                current_alignment += test_msgs::action::dds_::Fibonacci_GetResult_Response_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data, overflow,RTI_FALSE, encapsulation_id, current_alignment);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return current_alignment - initial_alignment;
            }

            unsigned int
            Fibonacci_GetResult_Response_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = Fibonacci_GetResult_Response_Plugin_get_serialized_key_max_size_ex(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            RTIBool 
            Fibonacci_GetResult_Response_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_GetResult_Response_ *sample,
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

                    if (!test_msgs::action::dds_::Fibonacci_GetResult_Response_Plugin_deserialize_sample(
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
            struct PRESTypePlugin *Fibonacci_GetResult_Response_Plugin_new(void) 
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
                test_msgs::action::dds_::Fibonacci_GetResult_Response_Plugin_on_participant_attached;
                plugin->onParticipantDetached =
                (PRESTypePluginOnParticipantDetachedCallback)
                test_msgs::action::dds_::Fibonacci_GetResult_Response_Plugin_on_participant_detached;
                plugin->onEndpointAttached =
                (PRESTypePluginOnEndpointAttachedCallback)
                test_msgs::action::dds_::Fibonacci_GetResult_Response_Plugin_on_endpoint_attached;
                plugin->onEndpointDetached =
                (PRESTypePluginOnEndpointDetachedCallback)
                test_msgs::action::dds_::Fibonacci_GetResult_Response_Plugin_on_endpoint_detached;

                plugin->copySampleFnc =
                (PRESTypePluginCopySampleFunction)
                test_msgs::action::dds_::Fibonacci_GetResult_Response_Plugin_copy_sample;
                plugin->createSampleFnc =
                (PRESTypePluginCreateSampleFunction)
                Fibonacci_GetResult_Response_Plugin_create_sample;
                plugin->destroySampleFnc =
                (PRESTypePluginDestroySampleFunction)
                Fibonacci_GetResult_Response_Plugin_destroy_sample;
                plugin->finalizeOptionalMembersFnc =
                (PRESTypePluginFinalizeOptionalMembersFunction)
                Fibonacci_GetResult_Response__finalize_optional_members;

                plugin->serializeFnc =
                (PRESTypePluginSerializeFunction)
                test_msgs::action::dds_::Fibonacci_GetResult_Response_Plugin_serialize;
                plugin->deserializeFnc =
                (PRESTypePluginDeserializeFunction)
                test_msgs::action::dds_::Fibonacci_GetResult_Response_Plugin_deserialize;
                plugin->getSerializedSampleMaxSizeFnc =
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                test_msgs::action::dds_::Fibonacci_GetResult_Response_Plugin_get_serialized_sample_max_size;
                plugin->getSerializedSampleMinSizeFnc =
                (PRESTypePluginGetSerializedSampleMinSizeFunction)
                test_msgs::action::dds_::Fibonacci_GetResult_Response_Plugin_get_serialized_sample_min_size;

                plugin->getSampleFnc =
                (PRESTypePluginGetSampleFunction)
                Fibonacci_GetResult_Response_Plugin_get_sample;
                plugin->returnSampleFnc =
                (PRESTypePluginReturnSampleFunction)
                Fibonacci_GetResult_Response_Plugin_return_sample;

                plugin->getKeyKindFnc =
                (PRESTypePluginGetKeyKindFunction)
                test_msgs::action::dds_::Fibonacci_GetResult_Response_Plugin_get_key_kind;

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
                plugin->typeCode =  (struct RTICdrTypeCode *)test_msgs::action::dds_::Fibonacci_GetResult_Response__get_typecode();

                plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

                /* Serialized buffer */
                plugin->getBuffer = 
                (PRESTypePluginGetBufferFunction)
                Fibonacci_GetResult_Response_Plugin_get_buffer;
                plugin->returnBuffer = 
                (PRESTypePluginReturnBufferFunction)
                Fibonacci_GetResult_Response_Plugin_return_buffer;
                plugin->getSerializedSampleSizeFnc =
                (PRESTypePluginGetSerializedSampleSizeFunction)
                test_msgs::action::dds_::Fibonacci_GetResult_Response_Plugin_get_serialized_sample_size;

                plugin->endpointTypeName = Fibonacci_GetResult_Response_TYPENAME;

                return plugin;
            }

            void
            Fibonacci_GetResult_Response_Plugin_delete(struct PRESTypePlugin *plugin)
            {
                RTIOsapiHeap_freeStructure(plugin);
            } 
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace test_msgs  */
namespace test_msgs {
    namespace action {
        namespace dds_ {

            /* ----------------------------------------------------------------------------
            *  Type Fibonacci_Feedback_
            * -------------------------------------------------------------------------- */

            /* -----------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------- */

            Fibonacci_Feedback_*
            Fibonacci_Feedback_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params) 
            {
                Fibonacci_Feedback_ *sample = NULL;

                sample = new (std::nothrow) Fibonacci_Feedback_ ;
                if (sample == NULL) {
                    return NULL;
                }

                if (!test_msgs::action::dds_::Fibonacci_Feedback__initialize_w_params(sample,alloc_params)) {
                    delete  sample;
                    sample=NULL;
                }
                return sample; 
            } 

            Fibonacci_Feedback_ *
            Fibonacci_Feedback_PluginSupport_create_data_ex(RTIBool allocate_pointers) 
            {
                Fibonacci_Feedback_ *sample = NULL;

                sample = new (std::nothrow) Fibonacci_Feedback_ ;

                if(sample == NULL) {
                    return NULL;
                }

                if (!test_msgs::action::dds_::Fibonacci_Feedback__initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                    delete  sample;
                    sample=NULL;
                }

                return sample; 
            }

            Fibonacci_Feedback_ *
            Fibonacci_Feedback_PluginSupport_create_data(void)
            {
                return test_msgs::action::dds_::Fibonacci_Feedback_PluginSupport_create_data_ex(RTI_TRUE);
            }

            void 
            Fibonacci_Feedback_PluginSupport_destroy_data_w_params(
                Fibonacci_Feedback_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params) {

                test_msgs::action::dds_::Fibonacci_Feedback__finalize_w_params(sample,dealloc_params);

                delete  sample;
                sample=NULL;
            }

            void 
            Fibonacci_Feedback_PluginSupport_destroy_data_ex(
                Fibonacci_Feedback_ *sample,RTIBool deallocate_pointers) {

                test_msgs::action::dds_::Fibonacci_Feedback__finalize_ex(sample,deallocate_pointers);

                delete  sample;
                sample=NULL;
            }

            void 
            Fibonacci_Feedback_PluginSupport_destroy_data(
                Fibonacci_Feedback_ *sample) {

                test_msgs::action::dds_::Fibonacci_Feedback_PluginSupport_destroy_data_ex(sample,RTI_TRUE);

            }

            RTIBool 
            Fibonacci_Feedback_PluginSupport_copy_data(
                Fibonacci_Feedback_ *dst,
                const Fibonacci_Feedback_ *src)
            {
                return test_msgs::action::dds_::Fibonacci_Feedback__copy(dst,(const Fibonacci_Feedback_*) src);
            }

            void 
            Fibonacci_Feedback_PluginSupport_print_data(
                const Fibonacci_Feedback_ *sample,
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

                if (DDS_LongSeq_get_contiguous_bufferI(&sample->sequence_) != NULL) {
                    RTICdrType_printArray(
                        DDS_LongSeq_get_contiguous_bufferI(&sample->sequence_),
                        DDS_LongSeq_get_length(&sample->sequence_),
                        RTI_CDR_LONG_SIZE,
                        (RTICdrTypePrintFunction)RTICdrType_printLong,
                        "sequence_", indent_level + 1);
                } else {
                    RTICdrType_printPointerArray(
                        DDS_LongSeq_get_discontiguous_bufferI(&sample->sequence_),
                        DDS_LongSeq_get_length(&sample->sequence_ ),
                        (RTICdrTypePrintFunction)RTICdrType_printLong,
                        "sequence_", indent_level + 1);
                }

            }

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            PRESTypePluginParticipantData 
            Fibonacci_Feedback_Plugin_on_participant_attached(
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
            Fibonacci_Feedback_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data)
            {

                PRESTypePluginDefaultParticipantData_delete(participant_data);
            }

            PRESTypePluginEndpointData
            Fibonacci_Feedback_Plugin_on_endpoint_attached(
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
                    test_msgs::action::dds_::Fibonacci_Feedback_PluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    test_msgs::action::dds_::Fibonacci_Feedback_PluginSupport_destroy_data,
                    NULL , NULL );

                if (epd == NULL) {
                    return NULL;
                } 

                if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                    serializedSampleMaxSize = test_msgs::action::dds_::Fibonacci_Feedback_Plugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        test_msgs::action::dds_::Fibonacci_Feedback_Plugin_get_serialized_sample_max_size, epd,
                        (PRESTypePluginGetSerializedSampleSizeFunction)
                        test_msgs::action::dds_::Fibonacci_Feedback_Plugin_get_serialized_sample_size,
                        epd) == RTI_FALSE) {
                        PRESTypePluginDefaultEndpointData_delete(epd);
                        return NULL;
                    }
                }

                return epd;    
            }

            void 
            Fibonacci_Feedback_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data)
            {  

                PRESTypePluginDefaultEndpointData_delete(endpoint_data);
            }

            void    
            Fibonacci_Feedback_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_Feedback_ *sample,
                void *handle)
            {

                Fibonacci_Feedback__finalize_optional_members(sample, RTI_TRUE);

                PRESTypePluginDefaultEndpointData_returnSample(
                    endpoint_data, sample, handle);
            }

            RTIBool 
            Fibonacci_Feedback_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_Feedback_ *dst,
                const Fibonacci_Feedback_ *src)
            {
                if (endpoint_data) {} /* To avoid warnings */
                return test_msgs::action::dds_::Fibonacci_Feedback_PluginSupport_copy_data(dst,src);
            }

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */
            unsigned int 
            Fibonacci_Feedback_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            RTIBool 
            Fibonacci_Feedback_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const Fibonacci_Feedback_ *sample, 
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

                    if (DDS_LongSeq_get_contiguous_bufferI(&sample->sequence_) != NULL) {
                        if (!RTICdrStream_serializePrimitiveSequence(
                            stream,
                            DDS_LongSeq_get_contiguous_bufferI(&sample->sequence_),
                            DDS_LongSeq_get_length(&sample->sequence_),
                            (RTI_INT32_MAX-1),
                            RTI_CDR_LONG_TYPE)) {
                            return RTI_FALSE;
                        } 
                    } else {
                        if (!RTICdrStream_serializePrimitivePointerSequence(
                            stream,
                            (const void **) DDS_LongSeq_get_discontiguous_bufferI(&sample->sequence_),
                            DDS_LongSeq_get_length(&sample->sequence_),
                            (RTI_INT32_MAX-1), 
                            RTI_CDR_LONG_TYPE)) {
                            return RTI_FALSE;
                        } 
                    }

                }

                if(serialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return retval;
            }

            RTIBool 
            Fibonacci_Feedback_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_Feedback_ *sample,
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

                        test_msgs::action::dds_::Fibonacci_Feedback__initialize_ex(sample, RTI_FALSE, RTI_FALSE);

                        {
                            RTICdrUnsignedLong sequence_length;
                            if (!RTICdrStream_lookUnsignedLong(stream,&sequence_length)) {
                                goto fin; 
                            }
                            if (!DDS_LongSeq_set_maximum(&sample->sequence_,sequence_length)) {
                                return RTI_FALSE;
                            }
                            if (DDS_LongSeq_get_contiguous_bufferI(&sample->sequence_) != NULL) {
                                if (!RTICdrStream_deserializePrimitiveSequence(
                                    stream,
                                    DDS_LongSeq_get_contiguous_bufferI(&sample->sequence_),
                                    &sequence_length,
                                    DDS_LongSeq_get_maximum(&sample->sequence_),
                                    RTI_CDR_LONG_TYPE)){
                                    goto fin; 
                                }
                            } else {
                                if (!RTICdrStream_deserializePrimitivePointerSequence(
                                    stream,
                                    (void **) DDS_LongSeq_get_discontiguous_bufferI(&sample->sequence_),
                                    &sequence_length,
                                    DDS_LongSeq_get_maximum(&sample->sequence_),
                                    RTI_CDR_LONG_TYPE)){
                                    goto fin; 
                                }
                            }
                            if (!DDS_LongSeq_set_length(&sample->sequence_, sequence_length)) {
                                return RTI_FALSE;
                            }

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
            Fibonacci_Feedback_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const Fibonacci_Feedback_ *sample)
            {
                struct RTICdrStream stream;
                struct PRESTypePluginDefaultEndpointData epd;
                RTIBool result;

                if (length == NULL) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                Fibonacci_Feedback_Plugin_get_serialized_sample_max_size(
                    NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

                if (buffer == NULL) {
                    *length = 
                    Fibonacci_Feedback_Plugin_get_serialized_sample_size(
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

                result = test_msgs::action::dds_::Fibonacci_Feedback_Plugin_serialize(
                    (PRESTypePluginEndpointData)&epd, sample, &stream, 
                    RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
                    RTI_TRUE, NULL);  

                *length = RTICdrStream_getCurrentPositionOffset(&stream);
                return result;     
            }

            RTIBool
            Fibonacci_Feedback_Plugin_deserialize_from_cdr_buffer(
                Fibonacci_Feedback_ *sample,
                const char * buffer,
                unsigned int length)
            {
                struct RTICdrStream stream;

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, length);

                Fibonacci_Feedback__finalize_optional_members(sample, RTI_TRUE);
                return Fibonacci_Feedback_Plugin_deserialize_sample( 
                    NULL, sample,
                    &stream, RTI_TRUE, RTI_TRUE, 
                    NULL);
            }

            DDS_ReturnCode_t
            Fibonacci_Feedback_Plugin_data_to_string(
                const Fibonacci_Feedback_ *sample,
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

                if (!Fibonacci_Feedback_Plugin_serialize_to_cdr_buffer(
                    NULL, 
                    &length, 
                    sample)) {
                    return DDS_RETCODE_ERROR;
                }

                RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
                if (buffer == NULL) {
                    return DDS_RETCODE_ERROR;
                }

                if (!Fibonacci_Feedback_Plugin_serialize_to_cdr_buffer(
                    buffer, 
                    &length, 
                    sample)) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }

                data = DDS_DynamicData_new(
                    Fibonacci_Feedback__get_typecode(), 
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
            Fibonacci_Feedback_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_Feedback_ **sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,   
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos)
            {

                RTIBool result;
                const char *METHOD_NAME = "Fibonacci_Feedback_Plugin_deserialize";
                if (drop_sample) {} /* To avoid warnings */

                stream->_xTypesState.unassignable = RTI_FALSE;
                result= test_msgs::action::dds_::Fibonacci_Feedback_Plugin_deserialize_sample( 
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
                        "Fibonacci_Feedback_");

                }

                return result;

            }

            RTIBool Fibonacci_Feedback_Plugin_skip(
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

                    {
                        RTICdrUnsignedLong sequence_length;
                        if (!RTICdrStream_skipPrimitiveSequence(
                            stream,
                            &sequence_length,
                            RTI_CDR_LONG_TYPE)){
                            goto fin; 
                        }
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
            Fibonacci_Feedback_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                if (endpoint_data) {} /* To avoid warnings */
                if (include_encapsulation) {}
                if (encapsulation_id) {}
                if (current_alignment) {}

                if (overflow != NULL) {
                    *overflow = RTI_TRUE;
                }

                return RTI_CDR_MAX_SERIALIZED_SIZE;

            }

            unsigned int 
            Fibonacci_Feedback_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = Fibonacci_Feedback_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            unsigned int 
            Fibonacci_Feedback_Plugin_get_serialized_sample_min_size(
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

                current_alignment +=    RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
                    current_alignment,0, RTI_CDR_LONG_TYPE);

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
            Fibonacci_Feedback_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const Fibonacci_Feedback_ * sample) 
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

                current_alignment += RTICdrType_getPrimitiveSequenceSerializedSize(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        DDS_LongSeq_get_length(&sample->sequence_),
                        RTI_CDR_LONG_TYPE);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return current_alignment - initial_alignment;
            }

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */

            PRESTypePluginKeyKind 
            Fibonacci_Feedback_Plugin_get_key_kind(void)
            {
                return PRES_TYPEPLUGIN_NO_KEY;
            }

            RTIBool 
            Fibonacci_Feedback_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const Fibonacci_Feedback_ *sample, 
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

                    if (!test_msgs::action::dds_::Fibonacci_Feedback_Plugin_serialize(
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

            RTIBool Fibonacci_Feedback_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_Feedback_ *sample, 
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

                        if (!test_msgs::action::dds_::Fibonacci_Feedback_Plugin_deserialize_sample(
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

            RTIBool Fibonacci_Feedback_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_Feedback_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos)
            {
                RTIBool result;
                if (drop_sample) {} /* To avoid warnings */
                stream->_xTypesState.unassignable = RTI_FALSE;
                result= test_msgs::action::dds_::Fibonacci_Feedback_Plugin_deserialize_key_sample(
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
            Fibonacci_Feedback_Plugin_get_serialized_key_max_size_ex(
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

                current_alignment += test_msgs::action::dds_::Fibonacci_Feedback_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data, overflow,RTI_FALSE, encapsulation_id, current_alignment);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return current_alignment - initial_alignment;
            }

            unsigned int
            Fibonacci_Feedback_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = Fibonacci_Feedback_Plugin_get_serialized_key_max_size_ex(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            RTIBool 
            Fibonacci_Feedback_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_Feedback_ *sample,
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

                    if (!test_msgs::action::dds_::Fibonacci_Feedback_Plugin_deserialize_sample(
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
            struct PRESTypePlugin *Fibonacci_Feedback_Plugin_new(void) 
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
                test_msgs::action::dds_::Fibonacci_Feedback_Plugin_on_participant_attached;
                plugin->onParticipantDetached =
                (PRESTypePluginOnParticipantDetachedCallback)
                test_msgs::action::dds_::Fibonacci_Feedback_Plugin_on_participant_detached;
                plugin->onEndpointAttached =
                (PRESTypePluginOnEndpointAttachedCallback)
                test_msgs::action::dds_::Fibonacci_Feedback_Plugin_on_endpoint_attached;
                plugin->onEndpointDetached =
                (PRESTypePluginOnEndpointDetachedCallback)
                test_msgs::action::dds_::Fibonacci_Feedback_Plugin_on_endpoint_detached;

                plugin->copySampleFnc =
                (PRESTypePluginCopySampleFunction)
                test_msgs::action::dds_::Fibonacci_Feedback_Plugin_copy_sample;
                plugin->createSampleFnc =
                (PRESTypePluginCreateSampleFunction)
                Fibonacci_Feedback_Plugin_create_sample;
                plugin->destroySampleFnc =
                (PRESTypePluginDestroySampleFunction)
                Fibonacci_Feedback_Plugin_destroy_sample;
                plugin->finalizeOptionalMembersFnc =
                (PRESTypePluginFinalizeOptionalMembersFunction)
                Fibonacci_Feedback__finalize_optional_members;

                plugin->serializeFnc =
                (PRESTypePluginSerializeFunction)
                test_msgs::action::dds_::Fibonacci_Feedback_Plugin_serialize;
                plugin->deserializeFnc =
                (PRESTypePluginDeserializeFunction)
                test_msgs::action::dds_::Fibonacci_Feedback_Plugin_deserialize;
                plugin->getSerializedSampleMaxSizeFnc =
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                test_msgs::action::dds_::Fibonacci_Feedback_Plugin_get_serialized_sample_max_size;
                plugin->getSerializedSampleMinSizeFnc =
                (PRESTypePluginGetSerializedSampleMinSizeFunction)
                test_msgs::action::dds_::Fibonacci_Feedback_Plugin_get_serialized_sample_min_size;

                plugin->getSampleFnc =
                (PRESTypePluginGetSampleFunction)
                Fibonacci_Feedback_Plugin_get_sample;
                plugin->returnSampleFnc =
                (PRESTypePluginReturnSampleFunction)
                Fibonacci_Feedback_Plugin_return_sample;

                plugin->getKeyKindFnc =
                (PRESTypePluginGetKeyKindFunction)
                test_msgs::action::dds_::Fibonacci_Feedback_Plugin_get_key_kind;

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
                plugin->typeCode =  (struct RTICdrTypeCode *)test_msgs::action::dds_::Fibonacci_Feedback__get_typecode();

                plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

                /* Serialized buffer */
                plugin->getBuffer = 
                (PRESTypePluginGetBufferFunction)
                Fibonacci_Feedback_Plugin_get_buffer;
                plugin->returnBuffer = 
                (PRESTypePluginReturnBufferFunction)
                Fibonacci_Feedback_Plugin_return_buffer;
                plugin->getSerializedSampleSizeFnc =
                (PRESTypePluginGetSerializedSampleSizeFunction)
                test_msgs::action::dds_::Fibonacci_Feedback_Plugin_get_serialized_sample_size;

                plugin->endpointTypeName = Fibonacci_Feedback_TYPENAME;

                return plugin;
            }

            void
            Fibonacci_Feedback_Plugin_delete(struct PRESTypePlugin *plugin)
            {
                RTIOsapiHeap_freeStructure(plugin);
            } 
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace test_msgs  */
namespace test_msgs {
    namespace action {
        namespace dds_ {

            /* ----------------------------------------------------------------------------
            *  Type Fibonacci_FeedbackMessage_
            * -------------------------------------------------------------------------- */

            /* -----------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------- */

            Fibonacci_FeedbackMessage_*
            Fibonacci_FeedbackMessage_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params) 
            {
                Fibonacci_FeedbackMessage_ *sample = NULL;

                sample = new (std::nothrow) Fibonacci_FeedbackMessage_ ;
                if (sample == NULL) {
                    return NULL;
                }

                if (!test_msgs::action::dds_::Fibonacci_FeedbackMessage__initialize_w_params(sample,alloc_params)) {
                    delete  sample;
                    sample=NULL;
                }
                return sample; 
            } 

            Fibonacci_FeedbackMessage_ *
            Fibonacci_FeedbackMessage_PluginSupport_create_data_ex(RTIBool allocate_pointers) 
            {
                Fibonacci_FeedbackMessage_ *sample = NULL;

                sample = new (std::nothrow) Fibonacci_FeedbackMessage_ ;

                if(sample == NULL) {
                    return NULL;
                }

                if (!test_msgs::action::dds_::Fibonacci_FeedbackMessage__initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                    delete  sample;
                    sample=NULL;
                }

                return sample; 
            }

            Fibonacci_FeedbackMessage_ *
            Fibonacci_FeedbackMessage_PluginSupport_create_data(void)
            {
                return test_msgs::action::dds_::Fibonacci_FeedbackMessage_PluginSupport_create_data_ex(RTI_TRUE);
            }

            void 
            Fibonacci_FeedbackMessage_PluginSupport_destroy_data_w_params(
                Fibonacci_FeedbackMessage_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params) {

                test_msgs::action::dds_::Fibonacci_FeedbackMessage__finalize_w_params(sample,dealloc_params);

                delete  sample;
                sample=NULL;
            }

            void 
            Fibonacci_FeedbackMessage_PluginSupport_destroy_data_ex(
                Fibonacci_FeedbackMessage_ *sample,RTIBool deallocate_pointers) {

                test_msgs::action::dds_::Fibonacci_FeedbackMessage__finalize_ex(sample,deallocate_pointers);

                delete  sample;
                sample=NULL;
            }

            void 
            Fibonacci_FeedbackMessage_PluginSupport_destroy_data(
                Fibonacci_FeedbackMessage_ *sample) {

                test_msgs::action::dds_::Fibonacci_FeedbackMessage_PluginSupport_destroy_data_ex(sample,RTI_TRUE);

            }

            RTIBool 
            Fibonacci_FeedbackMessage_PluginSupport_copy_data(
                Fibonacci_FeedbackMessage_ *dst,
                const Fibonacci_FeedbackMessage_ *src)
            {
                return test_msgs::action::dds_::Fibonacci_FeedbackMessage__copy(dst,(const Fibonacci_FeedbackMessage_*) src);
            }

            void 
            Fibonacci_FeedbackMessage_PluginSupport_print_data(
                const Fibonacci_FeedbackMessage_ *sample,
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

                unique_identifier_msgs::msg::dds_::UUID_PluginSupport_print_data(
                    (const unique_identifier_msgs::msg::dds_::UUID_*) &sample->goal_id_, "goal_id_", indent_level + 1);

                test_msgs::action::dds_::Fibonacci_Feedback_PluginSupport_print_data(
                    (const test_msgs::action::dds_::Fibonacci_Feedback_*) &sample->feedback_, "feedback_", indent_level + 1);

            }

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            PRESTypePluginParticipantData 
            Fibonacci_FeedbackMessage_Plugin_on_participant_attached(
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
            Fibonacci_FeedbackMessage_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data)
            {

                PRESTypePluginDefaultParticipantData_delete(participant_data);
            }

            PRESTypePluginEndpointData
            Fibonacci_FeedbackMessage_Plugin_on_endpoint_attached(
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
                    test_msgs::action::dds_::Fibonacci_FeedbackMessage_PluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    test_msgs::action::dds_::Fibonacci_FeedbackMessage_PluginSupport_destroy_data,
                    NULL , NULL );

                if (epd == NULL) {
                    return NULL;
                } 

                if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                    serializedSampleMaxSize = test_msgs::action::dds_::Fibonacci_FeedbackMessage_Plugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        test_msgs::action::dds_::Fibonacci_FeedbackMessage_Plugin_get_serialized_sample_max_size, epd,
                        (PRESTypePluginGetSerializedSampleSizeFunction)
                        test_msgs::action::dds_::Fibonacci_FeedbackMessage_Plugin_get_serialized_sample_size,
                        epd) == RTI_FALSE) {
                        PRESTypePluginDefaultEndpointData_delete(epd);
                        return NULL;
                    }
                }

                return epd;    
            }

            void 
            Fibonacci_FeedbackMessage_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data)
            {  

                PRESTypePluginDefaultEndpointData_delete(endpoint_data);
            }

            void    
            Fibonacci_FeedbackMessage_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_FeedbackMessage_ *sample,
                void *handle)
            {

                Fibonacci_FeedbackMessage__finalize_optional_members(sample, RTI_TRUE);

                PRESTypePluginDefaultEndpointData_returnSample(
                    endpoint_data, sample, handle);
            }

            RTIBool 
            Fibonacci_FeedbackMessage_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_FeedbackMessage_ *dst,
                const Fibonacci_FeedbackMessage_ *src)
            {
                if (endpoint_data) {} /* To avoid warnings */
                return test_msgs::action::dds_::Fibonacci_FeedbackMessage_PluginSupport_copy_data(dst,src);
            }

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */
            unsigned int 
            Fibonacci_FeedbackMessage_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            RTIBool 
            Fibonacci_FeedbackMessage_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const Fibonacci_FeedbackMessage_ *sample, 
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

                    if(!unique_identifier_msgs::msg::dds_::UUID_Plugin_serialize(
                        endpoint_data,
                        (const unique_identifier_msgs::msg::dds_::UUID_*) &sample->goal_id_,
                        stream,
                        RTI_FALSE, encapsulation_id,
                        RTI_TRUE,
                        endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                    if(!test_msgs::action::dds_::Fibonacci_Feedback_Plugin_serialize(
                        endpoint_data,
                        (const test_msgs::action::dds_::Fibonacci_Feedback_*) &sample->feedback_,
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

                return retval;
            }

            RTIBool 
            Fibonacci_FeedbackMessage_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_FeedbackMessage_ *sample,
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

                        test_msgs::action::dds_::Fibonacci_FeedbackMessage__initialize_ex(sample, RTI_FALSE, RTI_FALSE);

                        if(!unique_identifier_msgs::msg::dds_::UUID_Plugin_deserialize_sample(
                            endpoint_data,
                            &sample->goal_id_,
                            stream,
                            RTI_FALSE, RTI_TRUE,
                            endpoint_plugin_qos)) {
                            goto fin; 
                        }
                        if(!test_msgs::action::dds_::Fibonacci_Feedback_Plugin_deserialize_sample(
                            endpoint_data,
                            &sample->feedback_,
                            stream,
                            RTI_FALSE, RTI_TRUE,
                            endpoint_plugin_qos)) {
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
            Fibonacci_FeedbackMessage_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const Fibonacci_FeedbackMessage_ *sample)
            {
                struct RTICdrStream stream;
                struct PRESTypePluginDefaultEndpointData epd;
                RTIBool result;

                if (length == NULL) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                Fibonacci_FeedbackMessage_Plugin_get_serialized_sample_max_size(
                    NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

                if (buffer == NULL) {
                    *length = 
                    Fibonacci_FeedbackMessage_Plugin_get_serialized_sample_size(
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

                result = test_msgs::action::dds_::Fibonacci_FeedbackMessage_Plugin_serialize(
                    (PRESTypePluginEndpointData)&epd, sample, &stream, 
                    RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
                    RTI_TRUE, NULL);  

                *length = RTICdrStream_getCurrentPositionOffset(&stream);
                return result;     
            }

            RTIBool
            Fibonacci_FeedbackMessage_Plugin_deserialize_from_cdr_buffer(
                Fibonacci_FeedbackMessage_ *sample,
                const char * buffer,
                unsigned int length)
            {
                struct RTICdrStream stream;

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, length);

                Fibonacci_FeedbackMessage__finalize_optional_members(sample, RTI_TRUE);
                return Fibonacci_FeedbackMessage_Plugin_deserialize_sample( 
                    NULL, sample,
                    &stream, RTI_TRUE, RTI_TRUE, 
                    NULL);
            }

            DDS_ReturnCode_t
            Fibonacci_FeedbackMessage_Plugin_data_to_string(
                const Fibonacci_FeedbackMessage_ *sample,
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

                if (!Fibonacci_FeedbackMessage_Plugin_serialize_to_cdr_buffer(
                    NULL, 
                    &length, 
                    sample)) {
                    return DDS_RETCODE_ERROR;
                }

                RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
                if (buffer == NULL) {
                    return DDS_RETCODE_ERROR;
                }

                if (!Fibonacci_FeedbackMessage_Plugin_serialize_to_cdr_buffer(
                    buffer, 
                    &length, 
                    sample)) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }

                data = DDS_DynamicData_new(
                    Fibonacci_FeedbackMessage__get_typecode(), 
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
            Fibonacci_FeedbackMessage_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_FeedbackMessage_ **sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,   
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos)
            {

                RTIBool result;
                const char *METHOD_NAME = "Fibonacci_FeedbackMessage_Plugin_deserialize";
                if (drop_sample) {} /* To avoid warnings */

                stream->_xTypesState.unassignable = RTI_FALSE;
                result= test_msgs::action::dds_::Fibonacci_FeedbackMessage_Plugin_deserialize_sample( 
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
                        "Fibonacci_FeedbackMessage_");

                }

                return result;

            }

            RTIBool Fibonacci_FeedbackMessage_Plugin_skip(
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

                    if (!unique_identifier_msgs::msg::dds_::UUID_Plugin_skip(
                        endpoint_data,
                        stream, 
                        RTI_FALSE, RTI_TRUE, 
                        endpoint_plugin_qos)) {
                        goto fin; 
                    }
                    if (!test_msgs::action::dds_::Fibonacci_Feedback_Plugin_skip(
                        endpoint_data,
                        stream, 
                        RTI_FALSE, RTI_TRUE, 
                        endpoint_plugin_qos)) {
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
            Fibonacci_FeedbackMessage_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                }

                current_alignment +=unique_identifier_msgs::msg::dds_::UUID_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

                current_alignment +=test_msgs::action::dds_::Fibonacci_Feedback_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return  current_alignment - initial_alignment;
            }

            unsigned int 
            Fibonacci_FeedbackMessage_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = Fibonacci_FeedbackMessage_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            unsigned int 
            Fibonacci_FeedbackMessage_Plugin_get_serialized_sample_min_size(
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

                current_alignment +=unique_identifier_msgs::msg::dds_::UUID_Plugin_get_serialized_sample_min_size(
                    endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
                current_alignment +=test_msgs::action::dds_::Fibonacci_Feedback_Plugin_get_serialized_sample_min_size(
                    endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);

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
            Fibonacci_FeedbackMessage_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const Fibonacci_FeedbackMessage_ * sample) 
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

                current_alignment += unique_identifier_msgs::msg::dds_::UUID_Plugin_get_serialized_sample_size(
                    endpoint_data,RTI_FALSE, encapsulation_id,
                    current_alignment, (const unique_identifier_msgs::msg::dds_::UUID_*) &sample->goal_id_);

                current_alignment += test_msgs::action::dds_::Fibonacci_Feedback_Plugin_get_serialized_sample_size(
                    endpoint_data,RTI_FALSE, encapsulation_id,
                    current_alignment, (const test_msgs::action::dds_::Fibonacci_Feedback_*) &sample->feedback_);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return current_alignment - initial_alignment;
            }

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */

            PRESTypePluginKeyKind 
            Fibonacci_FeedbackMessage_Plugin_get_key_kind(void)
            {
                return PRES_TYPEPLUGIN_NO_KEY;
            }

            RTIBool 
            Fibonacci_FeedbackMessage_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const Fibonacci_FeedbackMessage_ *sample, 
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

                    if (!test_msgs::action::dds_::Fibonacci_FeedbackMessage_Plugin_serialize(
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

            RTIBool Fibonacci_FeedbackMessage_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_FeedbackMessage_ *sample, 
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

                        if (!test_msgs::action::dds_::Fibonacci_FeedbackMessage_Plugin_deserialize_sample(
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

            RTIBool Fibonacci_FeedbackMessage_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_FeedbackMessage_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos)
            {
                RTIBool result;
                if (drop_sample) {} /* To avoid warnings */
                stream->_xTypesState.unassignable = RTI_FALSE;
                result= test_msgs::action::dds_::Fibonacci_FeedbackMessage_Plugin_deserialize_key_sample(
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
            Fibonacci_FeedbackMessage_Plugin_get_serialized_key_max_size_ex(
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

                current_alignment += test_msgs::action::dds_::Fibonacci_FeedbackMessage_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data, overflow,RTI_FALSE, encapsulation_id, current_alignment);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return current_alignment - initial_alignment;
            }

            unsigned int
            Fibonacci_FeedbackMessage_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = Fibonacci_FeedbackMessage_Plugin_get_serialized_key_max_size_ex(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            RTIBool 
            Fibonacci_FeedbackMessage_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                Fibonacci_FeedbackMessage_ *sample,
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

                    if (!test_msgs::action::dds_::Fibonacci_FeedbackMessage_Plugin_deserialize_sample(
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
            struct PRESTypePlugin *Fibonacci_FeedbackMessage_Plugin_new(void) 
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
                test_msgs::action::dds_::Fibonacci_FeedbackMessage_Plugin_on_participant_attached;
                plugin->onParticipantDetached =
                (PRESTypePluginOnParticipantDetachedCallback)
                test_msgs::action::dds_::Fibonacci_FeedbackMessage_Plugin_on_participant_detached;
                plugin->onEndpointAttached =
                (PRESTypePluginOnEndpointAttachedCallback)
                test_msgs::action::dds_::Fibonacci_FeedbackMessage_Plugin_on_endpoint_attached;
                plugin->onEndpointDetached =
                (PRESTypePluginOnEndpointDetachedCallback)
                test_msgs::action::dds_::Fibonacci_FeedbackMessage_Plugin_on_endpoint_detached;

                plugin->copySampleFnc =
                (PRESTypePluginCopySampleFunction)
                test_msgs::action::dds_::Fibonacci_FeedbackMessage_Plugin_copy_sample;
                plugin->createSampleFnc =
                (PRESTypePluginCreateSampleFunction)
                Fibonacci_FeedbackMessage_Plugin_create_sample;
                plugin->destroySampleFnc =
                (PRESTypePluginDestroySampleFunction)
                Fibonacci_FeedbackMessage_Plugin_destroy_sample;
                plugin->finalizeOptionalMembersFnc =
                (PRESTypePluginFinalizeOptionalMembersFunction)
                Fibonacci_FeedbackMessage__finalize_optional_members;

                plugin->serializeFnc =
                (PRESTypePluginSerializeFunction)
                test_msgs::action::dds_::Fibonacci_FeedbackMessage_Plugin_serialize;
                plugin->deserializeFnc =
                (PRESTypePluginDeserializeFunction)
                test_msgs::action::dds_::Fibonacci_FeedbackMessage_Plugin_deserialize;
                plugin->getSerializedSampleMaxSizeFnc =
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                test_msgs::action::dds_::Fibonacci_FeedbackMessage_Plugin_get_serialized_sample_max_size;
                plugin->getSerializedSampleMinSizeFnc =
                (PRESTypePluginGetSerializedSampleMinSizeFunction)
                test_msgs::action::dds_::Fibonacci_FeedbackMessage_Plugin_get_serialized_sample_min_size;

                plugin->getSampleFnc =
                (PRESTypePluginGetSampleFunction)
                Fibonacci_FeedbackMessage_Plugin_get_sample;
                plugin->returnSampleFnc =
                (PRESTypePluginReturnSampleFunction)
                Fibonacci_FeedbackMessage_Plugin_return_sample;

                plugin->getKeyKindFnc =
                (PRESTypePluginGetKeyKindFunction)
                test_msgs::action::dds_::Fibonacci_FeedbackMessage_Plugin_get_key_kind;

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
                plugin->typeCode =  (struct RTICdrTypeCode *)test_msgs::action::dds_::Fibonacci_FeedbackMessage__get_typecode();

                plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

                /* Serialized buffer */
                plugin->getBuffer = 
                (PRESTypePluginGetBufferFunction)
                Fibonacci_FeedbackMessage_Plugin_get_buffer;
                plugin->returnBuffer = 
                (PRESTypePluginReturnBufferFunction)
                Fibonacci_FeedbackMessage_Plugin_return_buffer;
                plugin->getSerializedSampleSizeFnc =
                (PRESTypePluginGetSerializedSampleSizeFunction)
                test_msgs::action::dds_::Fibonacci_FeedbackMessage_Plugin_get_serialized_sample_size;

                plugin->endpointTypeName = Fibonacci_FeedbackMessage_TYPENAME;

                return plugin;
            }

            void
            Fibonacci_FeedbackMessage_Plugin_delete(struct PRESTypePlugin *plugin)
            {
                RTIOsapiHeap_freeStructure(plugin);
            } 
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace test_msgs  */
#undef RTI_CDR_CURRENT_SUBMODULE 
