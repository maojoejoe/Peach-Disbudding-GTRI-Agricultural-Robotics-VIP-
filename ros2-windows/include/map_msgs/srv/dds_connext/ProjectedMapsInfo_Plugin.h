

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ProjectedMapsInfo_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ProjectedMapsInfo_Plugin_715894986_h
#define ProjectedMapsInfo_Plugin_715894986_h

#include "ProjectedMapsInfo_.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "map_msgs/msg/dds_connext/ProjectedMapInfo_Plugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_map_msgs)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace map_msgs {
    namespace srv {
        namespace dds_ {

            #define ProjectedMapsInfo_Request_Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define ProjectedMapsInfo_Request_Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ProjectedMapsInfo_Request_Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define ProjectedMapsInfo_Request_Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ProjectedMapsInfo_Request_Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ProjectedMapsInfo_Request_*
            ProjectedMapsInfo_Request_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ProjectedMapsInfo_Request_*
            ProjectedMapsInfo_Request_PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ProjectedMapsInfo_Request_*
            ProjectedMapsInfo_Request_PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ProjectedMapsInfo_Request_PluginSupport_copy_data(
                ProjectedMapsInfo_Request_ *out,
                const ProjectedMapsInfo_Request_ *in);

            NDDSUSERDllExport extern void 
            ProjectedMapsInfo_Request_PluginSupport_destroy_data_w_params(
                ProjectedMapsInfo_Request_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ProjectedMapsInfo_Request_PluginSupport_destroy_data_ex(
                ProjectedMapsInfo_Request_ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ProjectedMapsInfo_Request_PluginSupport_destroy_data(
                ProjectedMapsInfo_Request_ *sample);

            NDDSUSERDllExport extern void 
            ProjectedMapsInfo_Request_PluginSupport_print_data(
                const ProjectedMapsInfo_Request_ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ProjectedMapsInfo_Request_Plugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ProjectedMapsInfo_Request_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ProjectedMapsInfo_Request_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ProjectedMapsInfo_Request_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ProjectedMapsInfo_Request_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ProjectedMapsInfo_Request_ *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ProjectedMapsInfo_Request_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ProjectedMapsInfo_Request_ *out,
                const ProjectedMapsInfo_Request_ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            ProjectedMapsInfo_Request_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const ProjectedMapsInfo_Request_ *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ProjectedMapsInfo_Request_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                ProjectedMapsInfo_Request_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ProjectedMapsInfo_Request_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ProjectedMapsInfo_Request_ *sample); 

            NDDSUSERDllExport extern RTIBool 
            ProjectedMapsInfo_Request_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ProjectedMapsInfo_Request_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ProjectedMapsInfo_Request_Plugin_deserialize_from_cdr_buffer(
                ProjectedMapsInfo_Request_ *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            ProjectedMapsInfo_Request_Plugin_data_to_string(
                const ProjectedMapsInfo_Request_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            ProjectedMapsInfo_Request_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            ProjectedMapsInfo_Request_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            ProjectedMapsInfo_Request_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ProjectedMapsInfo_Request_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            ProjectedMapsInfo_Request_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const ProjectedMapsInfo_Request_ * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ProjectedMapsInfo_Request_Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ProjectedMapsInfo_Request_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ProjectedMapsInfo_Request_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ProjectedMapsInfo_Request_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const ProjectedMapsInfo_Request_ *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ProjectedMapsInfo_Request_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                ProjectedMapsInfo_Request_ * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ProjectedMapsInfo_Request_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ProjectedMapsInfo_Request_ ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ProjectedMapsInfo_Request_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ProjectedMapsInfo_Request_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ProjectedMapsInfo_Request_Plugin_new(void);

            NDDSUSERDllExport extern void
            ProjectedMapsInfo_Request_Plugin_delete(struct PRESTypePlugin *);

        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace map_msgs  */
namespace map_msgs {
    namespace srv {
        namespace dds_ {

            #define ProjectedMapsInfo_Response_Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define ProjectedMapsInfo_Response_Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define ProjectedMapsInfo_Response_Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define ProjectedMapsInfo_Response_Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define ProjectedMapsInfo_Response_Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern ProjectedMapsInfo_Response_*
            ProjectedMapsInfo_Response_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern ProjectedMapsInfo_Response_*
            ProjectedMapsInfo_Response_PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern ProjectedMapsInfo_Response_*
            ProjectedMapsInfo_Response_PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            ProjectedMapsInfo_Response_PluginSupport_copy_data(
                ProjectedMapsInfo_Response_ *out,
                const ProjectedMapsInfo_Response_ *in);

            NDDSUSERDllExport extern void 
            ProjectedMapsInfo_Response_PluginSupport_destroy_data_w_params(
                ProjectedMapsInfo_Response_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            ProjectedMapsInfo_Response_PluginSupport_destroy_data_ex(
                ProjectedMapsInfo_Response_ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            ProjectedMapsInfo_Response_PluginSupport_destroy_data(
                ProjectedMapsInfo_Response_ *sample);

            NDDSUSERDllExport extern void 
            ProjectedMapsInfo_Response_PluginSupport_print_data(
                const ProjectedMapsInfo_Response_ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            ProjectedMapsInfo_Response_Plugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            ProjectedMapsInfo_Response_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            ProjectedMapsInfo_Response_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            ProjectedMapsInfo_Response_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            ProjectedMapsInfo_Response_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ProjectedMapsInfo_Response_ *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            ProjectedMapsInfo_Response_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ProjectedMapsInfo_Response_ *out,
                const ProjectedMapsInfo_Response_ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            ProjectedMapsInfo_Response_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const ProjectedMapsInfo_Response_ *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ProjectedMapsInfo_Response_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                ProjectedMapsInfo_Response_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ProjectedMapsInfo_Response_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ProjectedMapsInfo_Response_ *sample); 

            NDDSUSERDllExport extern RTIBool 
            ProjectedMapsInfo_Response_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ProjectedMapsInfo_Response_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ProjectedMapsInfo_Response_Plugin_deserialize_from_cdr_buffer(
                ProjectedMapsInfo_Response_ *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            ProjectedMapsInfo_Response_Plugin_data_to_string(
                const ProjectedMapsInfo_Response_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            ProjectedMapsInfo_Response_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            ProjectedMapsInfo_Response_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            ProjectedMapsInfo_Response_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ProjectedMapsInfo_Response_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            ProjectedMapsInfo_Response_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const ProjectedMapsInfo_Response_ * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            ProjectedMapsInfo_Response_Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            ProjectedMapsInfo_Response_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            ProjectedMapsInfo_Response_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            ProjectedMapsInfo_Response_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const ProjectedMapsInfo_Response_ *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ProjectedMapsInfo_Response_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                ProjectedMapsInfo_Response_ * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            ProjectedMapsInfo_Response_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ProjectedMapsInfo_Response_ ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            ProjectedMapsInfo_Response_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ProjectedMapsInfo_Response_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            ProjectedMapsInfo_Response_Plugin_new(void);

            NDDSUSERDllExport extern void
            ProjectedMapsInfo_Response_Plugin_delete(struct PRESTypePlugin *);

        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace map_msgs  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_map_msgs)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ProjectedMapsInfo_Plugin_715894986_h */

