#pragma once
/*
 * This file is generated by uxsdcxx 0.1.0.
 * https://github.com/duck2/uxsdcxx
 * Modify only if your build process doesn't involve regenerating this file.
 *
 * Cmdline: ../uxsdcxx.py rr_graph.xsd
 * md5sum of input file: f9c827f7ecf1ac2f15d57c67bbba4399
 */

/* All uxsdcxx functions and structs live in this namespace. */

#include <cstdlib>
#include <tuple>

namespace uxsd {

/* Enum tokens generated from XSD enumerations. */

enum class enum_switch_type { UXSD_INVALID = 0,
                              MUX,
                              TRISTATE,
                              PASS_GATE,
                              SHORT,
                              BUFFER };

enum class enum_pin_type { UXSD_INVALID = 0,
                           OPEN,
                           OUTPUT,
                           INPUT };

enum class enum_node_type { UXSD_INVALID = 0,
                            CHANX,
                            CHANY,
                            SOURCE,
                            SINK,
                            OPIN,
                            IPIN };

enum class enum_node_direction { UXSD_INVALID = 0,
                                 INC_DIR,
                                 DEC_DIR,
                                 BI_DIR };

enum class enum_loc_side { UXSD_INVALID = 0,
                           LEFT,
                           RIGHT,
                           TOP,
                           BOTTOM };

/* Base class for the schema. */
class RrGraphBase {
  public:
    virtual ~RrGraphBase() {}
    /** Generated for complex type "channel":
     * <xs:complexType name="channel">
     *   <xs:attribute name="chan_width_max" type="xs:int" use="required" />
     *   <xs:attribute name="x_min" type="xs:int" use="required" />
     *   <xs:attribute name="y_min" type="xs:int" use="required" />
     *   <xs:attribute name="x_max" type="xs:int" use="required" />
     *   <xs:attribute name="y_max" type="xs:int" use="required" />
     * </xs:complexType>
     */
    virtual inline int get_channel_chan_width_max(const void* data, void* iter) = 0;
    virtual inline int get_channel_x_max(const void* data, void* iter) = 0;
    virtual inline int get_channel_x_min(const void* data, void* iter) = 0;
    virtual inline int get_channel_y_max(const void* data, void* iter) = 0;
    virtual inline int get_channel_y_min(const void* data, void* iter) = 0;

    /** Generated for complex type "x_list":
     * <xs:complexType name="x_list">
     *   <xs:attribute name="index" type="xs:unsignedInt" use="required" />
     *   <xs:attribute name="info" type="xs:int" use="required" />
     * </xs:complexType>
     */
    virtual inline unsigned int get_x_list_index(const void* data, void* iter) = 0;
    virtual inline int get_x_list_info(const void* data, void* iter) = 0;

    /** Generated for complex type "y_list":
     * <xs:complexType name="y_list">
     *   <xs:attribute name="index" type="xs:unsignedInt" use="required" />
     *   <xs:attribute name="info" type="xs:int" use="required" />
     * </xs:complexType>
     */
    virtual inline unsigned int get_y_list_index(const void* data, void* iter) = 0;
    virtual inline int get_y_list_info(const void* data, void* iter) = 0;

    /** Generated for complex type "channels":
     * <xs:complexType name="channels">
     *   <xs:sequence>
     *     <xs:element name="channel" type="channel" />
     *     <xs:element maxOccurs="unbounded" name="x_list" type="x_list" />
     *     <xs:element maxOccurs="unbounded" name="y_list" type="y_list" />
     *   </xs:sequence>
     * </xs:complexType>
     */
    virtual inline std::pair<const void*, void*> init_channels_channel(const void* data, void* iter, int chan_width_max, int x_max, int x_min, int y_max, int y_min) = 0;
    virtual inline void finish_channels_channel(const void* data, void* iter) = 0;
    virtual inline std::pair<const void*, void*> get_channels_channel(const void* data, void* iter) = 0;
    virtual inline std::pair<const void*, void*> add_channels_x_list(const void* data, void* iter, unsigned int index, int info) = 0;
    virtual inline void finish_channels_x_list(const void* data, void* iter) = 0;
    virtual inline size_t num_channels_x_list(const void* data, void* iter) = 0;
    virtual inline std::pair<const void*, void*> get_channels_x_list(int n, const void* data, void* iter) = 0;
    virtual inline std::pair<const void*, void*> add_channels_y_list(const void* data, void* iter, unsigned int index, int info) = 0;
    virtual inline void finish_channels_y_list(const void* data, void* iter) = 0;
    virtual inline size_t num_channels_y_list(const void* data, void* iter) = 0;
    virtual inline std::pair<const void*, void*> get_channels_y_list(int n, const void* data, void* iter) = 0;

    /** Generated for complex type "timing":
     * <xs:complexType name="timing">
     *   <xs:attribute name="R" type="xs:float" />
     *   <xs:attribute name="Cin" type="xs:float" />
     *   <xs:attribute name="Cinternal" type="xs:float" />
     *   <xs:attribute name="Cout" type="xs:float" />
     *   <xs:attribute name="Tdel" type="xs:float" />
     * </xs:complexType>
     */
    virtual inline float get_timing_Cin(const void* data, void* iter) = 0;
    virtual inline void set_timing_Cin(float Cin, const void* data, void* iter) = 0;
    virtual inline float get_timing_Cinternal(const void* data, void* iter) = 0;
    virtual inline void set_timing_Cinternal(float Cinternal, const void* data, void* iter) = 0;
    virtual inline float get_timing_Cout(const void* data, void* iter) = 0;
    virtual inline void set_timing_Cout(float Cout, const void* data, void* iter) = 0;
    virtual inline float get_timing_R(const void* data, void* iter) = 0;
    virtual inline void set_timing_R(float R, const void* data, void* iter) = 0;
    virtual inline float get_timing_Tdel(const void* data, void* iter) = 0;
    virtual inline void set_timing_Tdel(float Tdel, const void* data, void* iter) = 0;

    /** Generated for complex type "sizing":
     * <xs:complexType name="sizing">
     *   <xs:attribute name="mux_trans_size" type="xs:float" use="required" />
     *   <xs:attribute name="buf_size" type="xs:float" use="required" />
     * </xs:complexType>
     */
    virtual inline float get_sizing_buf_size(const void* data, void* iter) = 0;
    virtual inline float get_sizing_mux_trans_size(const void* data, void* iter) = 0;

    /** Generated for complex type "switch":
     * <xs:complexType name="switch">
     *   <xs:all>
     *     <xs:element minOccurs="0" name="timing" type="timing" />
     *     <xs:element name="sizing" type="sizing" />
     *   </xs:all>
     *   <xs:attribute name="id" type="xs:int" use="required" />
     *   <xs:attribute name="name" type="xs:string" use="required" />
     *   <xs:attribute name="type" type="switch_type" />
     * </xs:complexType>
     */
    virtual inline int get_switch_id(const void* data, void* iter) = 0;
    virtual inline const char* get_switch_name(const void* data, void* iter) = 0;
    virtual inline void set_switch_name(const char* name, const void* data, void* iter) = 0;
    virtual inline enum_switch_type get_switch_type(const void* data, void* iter) = 0;
    virtual inline void set_switch_type(enum_switch_type type, const void* data, void* iter) = 0;
    virtual inline std::pair<const void*, void*> init_switch_timing(const void* data, void* iter) = 0;
    virtual inline void finish_switch_timing(const void* data, void* iter) = 0;
    virtual inline std::pair<const void*, void*> get_switch_timing(const void* data, void* iter) = 0;
    virtual inline bool has_switch_timing(const void* data, void* iter) = 0;
    virtual inline std::pair<const void*, void*> init_switch_sizing(const void* data, void* iter, float buf_size, float mux_trans_size) = 0;
    virtual inline void finish_switch_sizing(const void* data, void* iter) = 0;
    virtual inline std::pair<const void*, void*> get_switch_sizing(const void* data, void* iter) = 0;

    /** Generated for complex type "switches":
     * <xs:complexType name="switches">
     *   <xs:sequence>
     *     <xs:element maxOccurs="unbounded" name="switch" type="switch" />
     *   </xs:sequence>
     * </xs:complexType>
     */
    virtual inline std::pair<const void*, void*> add_switches_switch(const void* data, void* iter, int id) = 0;
    virtual inline void finish_switches_switch(const void* data, void* iter) = 0;
    virtual inline size_t num_switches_switch(const void* data, void* iter) = 0;
    virtual inline std::pair<const void*, void*> get_switches_switch(int n, const void* data, void* iter) = 0;

    /** Generated for complex type "segment_timing":
     * <xs:complexType name="segment_timing">
     *   <xs:attribute name="R_per_meter" type="xs:float" />
     *   <xs:attribute name="C_per_meter" type="xs:float" />
     * </xs:complexType>
     */
    virtual inline float get_segment_timing_C_per_meter(const void* data, void* iter) = 0;
    virtual inline void set_segment_timing_C_per_meter(float C_per_meter, const void* data, void* iter) = 0;
    virtual inline float get_segment_timing_R_per_meter(const void* data, void* iter) = 0;
    virtual inline void set_segment_timing_R_per_meter(float R_per_meter, const void* data, void* iter) = 0;

    /** Generated for complex type "segment":
     * <xs:complexType name="segment">
     *   <xs:all>
     *     <xs:element minOccurs="0" name="timing" type="segment_timing" />
     *   </xs:all>
     *   <xs:attribute name="id" type="xs:int" use="required" />
     *   <xs:attribute name="name" type="xs:string" use="required" />
     * </xs:complexType>
     */
    virtual inline int get_segment_id(const void* data, void* iter) = 0;
    virtual inline const char* get_segment_name(const void* data, void* iter) = 0;
    virtual inline void set_segment_name(const char* name, const void* data, void* iter) = 0;
    virtual inline std::pair<const void*, void*> init_segment_timing(const void* data, void* iter) = 0;
    virtual inline void finish_segment_timing(const void* data, void* iter) = 0;
    virtual inline std::pair<const void*, void*> get_segment_timing(const void* data, void* iter) = 0;
    virtual inline bool has_segment_timing(const void* data, void* iter) = 0;

    /** Generated for complex type "segments":
     * <xs:complexType name="segments">
     *   <xs:sequence>
     *     <xs:element maxOccurs="unbounded" name="segment" type="segment" />
     *   </xs:sequence>
     * </xs:complexType>
     */
    virtual inline std::pair<const void*, void*> add_segments_segment(const void* data, void* iter, int id) = 0;
    virtual inline void finish_segments_segment(const void* data, void* iter) = 0;
    virtual inline size_t num_segments_segment(const void* data, void* iter) = 0;
    virtual inline std::pair<const void*, void*> get_segments_segment(int n, const void* data, void* iter) = 0;

    /** Generated for complex type "pin":
     * <xs:complexType name="pin">
     *   <xs:simpleContent>
     *     <xs:extension base="xs:string">
     *       <xs:attribute name="ptc" type="xs:int" use="required" />
     *     </xs:extension>
     *   </xs:simpleContent>
     * </xs:complexType>
     */
    virtual inline int get_pin_ptc(const void* data, void* iter) = 0;
    virtual inline void set_pin_value(const char* value, const void* data, void* iter) = 0;
    virtual inline const char* get_pin_value(const void* data, void* iter) = 0;

    /** Generated for complex type "pin_class":
     * <xs:complexType name="pin_class">
     *   <xs:sequence>
     *     <xs:element maxOccurs="unbounded" name="pin" type="pin" />
     *   </xs:sequence>
     *   <xs:attribute name="type" type="pin_type" use="required" />
     * </xs:complexType>
     */
    virtual inline enum_pin_type get_pin_class_type(const void* data, void* iter) = 0;
    virtual inline std::pair<const void*, void*> add_pin_class_pin(const void* data, void* iter, int ptc) = 0;
    virtual inline void finish_pin_class_pin(const void* data, void* iter) = 0;
    virtual inline size_t num_pin_class_pin(const void* data, void* iter) = 0;
    virtual inline std::pair<const void*, void*> get_pin_class_pin(int n, const void* data, void* iter) = 0;

    /** Generated for complex type "block_type":
     * <xs:complexType name="block_type">
     *   <xs:sequence>
     *     <xs:element maxOccurs="unbounded" minOccurs="0" name="pin_class" type="pin_class" />
     *   </xs:sequence>
     *   <xs:attribute name="id" type="xs:int" use="required" />
     *   <xs:attribute name="name" type="xs:string" use="required" />
     *   <xs:attribute name="width" type="xs:int" use="required" />
     *   <xs:attribute name="height" type="xs:int" use="required" />
     * </xs:complexType>
     */
    virtual inline int get_block_type_height(const void* data, void* iter) = 0;
    virtual inline int get_block_type_id(const void* data, void* iter) = 0;
    virtual inline const char* get_block_type_name(const void* data, void* iter) = 0;
    virtual inline void set_block_type_name(const char* name, const void* data, void* iter) = 0;
    virtual inline int get_block_type_width(const void* data, void* iter) = 0;
    virtual inline std::pair<const void*, void*> add_block_type_pin_class(const void* data, void* iter, enum_pin_type type) = 0;
    virtual inline void finish_block_type_pin_class(const void* data, void* iter) = 0;
    virtual inline size_t num_block_type_pin_class(const void* data, void* iter) = 0;
    virtual inline std::pair<const void*, void*> get_block_type_pin_class(int n, const void* data, void* iter) = 0;

    /** Generated for complex type "block_types":
     * <xs:complexType name="block_types">
     *   <xs:sequence>
     *     <xs:element maxOccurs="unbounded" name="block_type" type="block_type" />
     *   </xs:sequence>
     * </xs:complexType>
     */
    virtual inline std::pair<const void*, void*> add_block_types_block_type(const void* data, void* iter, int height, int id, int width) = 0;
    virtual inline void finish_block_types_block_type(const void* data, void* iter) = 0;
    virtual inline size_t num_block_types_block_type(const void* data, void* iter) = 0;
    virtual inline std::pair<const void*, void*> get_block_types_block_type(int n, const void* data, void* iter) = 0;

    /** Generated for complex type "grid_loc":
     * <xs:complexType name="grid_loc">
     *   <xs:attribute name="x" type="xs:int" use="required" />
     *   <xs:attribute name="y" type="xs:int" use="required" />
     *   <xs:attribute name="block_type_id" type="xs:int" use="required" />
     *   <xs:attribute name="width_offset" type="xs:int" use="required" />
     *   <xs:attribute name="height_offset" type="xs:int" use="required" />
     * </xs:complexType>
     */
    virtual inline int get_grid_loc_block_type_id(const void* data, void* iter) = 0;
    virtual inline int get_grid_loc_height_offset(const void* data, void* iter) = 0;
    virtual inline int get_grid_loc_width_offset(const void* data, void* iter) = 0;
    virtual inline int get_grid_loc_x(const void* data, void* iter) = 0;
    virtual inline int get_grid_loc_y(const void* data, void* iter) = 0;

    /** Generated for complex type "grid_locs":
     * <xs:complexType name="grid_locs">
     *   <xs:sequence>
     *     <xs:element maxOccurs="unbounded" name="grid_loc" type="grid_loc" />
     *   </xs:sequence>
     * </xs:complexType>
     */
    virtual inline std::pair<const void*, void*> add_grid_locs_grid_loc(const void* data, void* iter, int block_type_id, int height_offset, int width_offset, int x, int y) = 0;
    virtual inline void finish_grid_locs_grid_loc(const void* data, void* iter) = 0;
    virtual inline size_t num_grid_locs_grid_loc(const void* data, void* iter) = 0;
    virtual inline std::pair<const void*, void*> get_grid_locs_grid_loc(int n, const void* data, void* iter) = 0;

    /** Generated for complex type "node_loc":
     * <xs:complexType name="node_loc">
     *   <xs:attribute name="xlow" type="xs:int" use="required" />
     *   <xs:attribute name="ylow" type="xs:int" use="required" />
     *   <xs:attribute name="xhigh" type="xs:int" use="required" />
     *   <xs:attribute name="yhigh" type="xs:int" use="required" />
     *   <xs:attribute name="side" type="loc_side" />
     *   <xs:attribute name="ptc" type="xs:int" use="required" />
     * </xs:complexType>
     */
    virtual inline int get_node_loc_ptc(const void* data, void* iter) = 0;
    virtual inline enum_loc_side get_node_loc_side(const void* data, void* iter) = 0;
    virtual inline void set_node_loc_side(enum_loc_side side, const void* data, void* iter) = 0;
    virtual inline int get_node_loc_xhigh(const void* data, void* iter) = 0;
    virtual inline int get_node_loc_xlow(const void* data, void* iter) = 0;
    virtual inline int get_node_loc_yhigh(const void* data, void* iter) = 0;
    virtual inline int get_node_loc_ylow(const void* data, void* iter) = 0;

    /** Generated for complex type "node_timing":
     * <xs:complexType name="node_timing">
     *   <xs:attribute name="R" type="xs:float" use="required" />
     *   <xs:attribute name="C" type="xs:float" use="required" />
     * </xs:complexType>
     */
    virtual inline float get_node_timing_C(const void* data, void* iter) = 0;
    virtual inline float get_node_timing_R(const void* data, void* iter) = 0;

    /** Generated for complex type "node_segment":
     * <xs:complexType name="node_segment">
     *   <xs:attribute name="segment_id" type="xs:int" use="required" />
     * </xs:complexType>
     */
    virtual inline int get_node_segment_segment_id(const void* data, void* iter) = 0;

    /** Generated for complex type "meta":
     * <xs:complexType name="meta">
     *   <xs:simpleContent>
     *     <xs:extension base="xs:string">
     *       <xs:attribute name="name" type="xs:string" use="required" />
     *     </xs:extension>
     *   </xs:simpleContent>
     * </xs:complexType>
     */
    virtual inline const char* get_meta_name(const void* data, void* iter) = 0;
    virtual inline void set_meta_name(const char* name, const void* data, void* iter) = 0;
    virtual inline void set_meta_value(const char* value, const void* data, void* iter) = 0;
    virtual inline const char* get_meta_value(const void* data, void* iter) = 0;

    /** Generated for complex type "metadata":
     * <xs:complexType name="metadata">
     *   <xs:sequence>
     *     <xs:element maxOccurs="unbounded" name="meta" type="meta" />
     *   </xs:sequence>
     * </xs:complexType>
     */
    virtual inline std::pair<const void*, void*> add_metadata_meta(const void* data, void* iter) = 0;
    virtual inline void finish_metadata_meta(const void* data, void* iter) = 0;
    virtual inline size_t num_metadata_meta(const void* data, void* iter) = 0;
    virtual inline std::pair<const void*, void*> get_metadata_meta(int n, const void* data, void* iter) = 0;

    /** Generated for complex type "node":
     * <xs:complexType name="node">
     *   <xs:all>
     *     <xs:element name="loc" type="node_loc" />
     *     <xs:element minOccurs="0" name="timing" type="node_timing" />
     *     <xs:element minOccurs="0" name="segment" type="node_segment" />
     *     <xs:element minOccurs="0" name="metadata" type="metadata" />
     *   </xs:all>
     *   <xs:attribute name="id" type="xs:unsignedInt" use="required" />
     *   <xs:attribute name="type" type="node_type" use="required" />
     *   <xs:attribute name="direction" type="node_direction" />
     *   <xs:attribute name="capacity" type="xs:unsignedInt" use="required" />
     * </xs:complexType>
     */
    virtual inline unsigned int get_node_capacity(const void* data, void* iter) = 0;
    virtual inline enum_node_direction get_node_direction(const void* data, void* iter) = 0;
    virtual inline void set_node_direction(enum_node_direction direction, const void* data, void* iter) = 0;
    virtual inline unsigned int get_node_id(const void* data, void* iter) = 0;
    virtual inline enum_node_type get_node_type(const void* data, void* iter) = 0;
    virtual inline std::pair<const void*, void*> init_node_loc(const void* data, void* iter, int ptc, int xhigh, int xlow, int yhigh, int ylow) = 0;
    virtual inline void finish_node_loc(const void* data, void* iter) = 0;
    virtual inline std::pair<const void*, void*> get_node_loc(const void* data, void* iter) = 0;
    virtual inline std::pair<const void*, void*> init_node_timing(const void* data, void* iter, float C, float R) = 0;
    virtual inline void finish_node_timing(const void* data, void* iter) = 0;
    virtual inline std::pair<const void*, void*> get_node_timing(const void* data, void* iter) = 0;
    virtual inline bool has_node_timing(const void* data, void* iter) = 0;
    virtual inline std::pair<const void*, void*> init_node_segment(const void* data, void* iter, int segment_id) = 0;
    virtual inline void finish_node_segment(const void* data, void* iter) = 0;
    virtual inline std::pair<const void*, void*> get_node_segment(const void* data, void* iter) = 0;
    virtual inline bool has_node_segment(const void* data, void* iter) = 0;
    virtual inline std::pair<const void*, void*> init_node_metadata(const void* data, void* iter) = 0;
    virtual inline void finish_node_metadata(const void* data, void* iter) = 0;
    virtual inline std::pair<const void*, void*> get_node_metadata(const void* data, void* iter) = 0;
    virtual inline bool has_node_metadata(const void* data, void* iter) = 0;

    /** Generated for complex type "rr_nodes":
     * <xs:complexType name="rr_nodes">
     *   <xs:choice maxOccurs="unbounded">
     *     <xs:element name="node" type="node" />
     *   </xs:choice>
     * </xs:complexType>
     */
    virtual inline std::pair<const void*, void*> add_rr_nodes_node(const void* data, void* iter, unsigned int capacity, unsigned int id, enum_node_type type) = 0;
    virtual inline void finish_rr_nodes_node(const void* data, void* iter) = 0;
    virtual inline size_t num_rr_nodes_node(const void* data, void* iter) = 0;
    virtual inline std::pair<const void*, void*> get_rr_nodes_node(int n, const void* data, void* iter) = 0;

    /** Generated for complex type "edge":
     * <xs:complexType name="edge">
     *   <xs:all>
     *     <xs:element minOccurs="0" name="metadata" type="metadata" />
     *   </xs:all>
     *   <xs:attribute name="src_node" type="xs:unsignedInt" use="required" />
     *   <xs:attribute name="sink_node" type="xs:unsignedInt" use="required" />
     *   <xs:attribute name="switch_id" type="xs:unsignedInt" use="required" />
     * </xs:complexType>
     */
    virtual inline unsigned int get_edge_sink_node(const void* data, void* iter) = 0;
    virtual inline unsigned int get_edge_src_node(const void* data, void* iter) = 0;
    virtual inline unsigned int get_edge_switch_id(const void* data, void* iter) = 0;
    virtual inline std::pair<const void*, void*> init_edge_metadata(const void* data, void* iter) = 0;
    virtual inline void finish_edge_metadata(const void* data, void* iter) = 0;
    virtual inline std::pair<const void*, void*> get_edge_metadata(const void* data, void* iter) = 0;
    virtual inline bool has_edge_metadata(const void* data, void* iter) = 0;

    /** Generated for complex type "rr_edges":
     * <xs:complexType name="rr_edges">
     *   <xs:choice maxOccurs="unbounded">
     *     <xs:element name="edge" type="edge" />
     *   </xs:choice>
     * </xs:complexType>
     */
    virtual inline std::pair<const void*, void*> add_rr_edges_edge(const void* data, void* iter, unsigned int sink_node, unsigned int src_node, unsigned int switch_id) = 0;
    virtual inline void finish_rr_edges_edge(const void* data, void* iter) = 0;
    virtual inline size_t num_rr_edges_edge(const void* data, void* iter) = 0;
    virtual inline std::pair<const void*, void*> get_rr_edges_edge(int n, const void* data, void* iter) = 0;

    /** Generated for complex type "rr_graph":
     * <xs:complexType xmlns:xs="http://www.w3.org/2001/XMLSchema">
     *     <xs:all>
     *       <xs:element name="channels" type="channels" />
     *       <xs:element name="switches" type="switches" />
     *       <xs:element name="segments" type="segments" />
     *       <xs:element name="block_types" type="block_types" />
     *       <xs:element name="grid" type="grid_locs" />
     *       <xs:element name="rr_nodes" type="rr_nodes" />
     *       <xs:element name="rr_edges" type="rr_edges" />
     *     </xs:all>
     *     <xs:attribute name="tool_name" type="xs:string" />
     *     <xs:attribute name="tool_version" type="xs:string" />
     *     <xs:attribute name="tool_comment" type="xs:string" />
     *   </xs:complexType>
     */
    virtual inline const char* get_rr_graph_tool_comment(const void* data, void* iter) = 0;
    virtual inline void set_rr_graph_tool_comment(const char* tool_comment, const void* data, void* iter) = 0;
    virtual inline const char* get_rr_graph_tool_name(const void* data, void* iter) = 0;
    virtual inline void set_rr_graph_tool_name(const char* tool_name, const void* data, void* iter) = 0;
    virtual inline const char* get_rr_graph_tool_version(const void* data, void* iter) = 0;
    virtual inline void set_rr_graph_tool_version(const char* tool_version, const void* data, void* iter) = 0;
    virtual inline std::pair<const void*, void*> init_rr_graph_channels(const void* data, void* iter) = 0;
    virtual inline void finish_rr_graph_channels(const void* data, void* iter) = 0;
    virtual inline std::pair<const void*, void*> get_rr_graph_channels(const void* data, void* iter) = 0;
    virtual inline std::pair<const void*, void*> init_rr_graph_switches(const void* data, void* iter) = 0;
    virtual inline void finish_rr_graph_switches(const void* data, void* iter) = 0;
    virtual inline std::pair<const void*, void*> get_rr_graph_switches(const void* data, void* iter) = 0;
    virtual inline std::pair<const void*, void*> init_rr_graph_segments(const void* data, void* iter) = 0;
    virtual inline void finish_rr_graph_segments(const void* data, void* iter) = 0;
    virtual inline std::pair<const void*, void*> get_rr_graph_segments(const void* data, void* iter) = 0;
    virtual inline std::pair<const void*, void*> init_rr_graph_block_types(const void* data, void* iter) = 0;
    virtual inline void finish_rr_graph_block_types(const void* data, void* iter) = 0;
    virtual inline std::pair<const void*, void*> get_rr_graph_block_types(const void* data, void* iter) = 0;
    virtual inline std::pair<const void*, void*> init_rr_graph_grid(const void* data, void* iter) = 0;
    virtual inline void finish_rr_graph_grid(const void* data, void* iter) = 0;
    virtual inline std::pair<const void*, void*> get_rr_graph_grid(const void* data, void* iter) = 0;
    virtual inline std::pair<const void*, void*> init_rr_graph_rr_nodes(const void* data, void* iter) = 0;
    virtual inline void finish_rr_graph_rr_nodes(const void* data, void* iter) = 0;
    virtual inline std::pair<const void*, void*> get_rr_graph_rr_nodes(const void* data, void* iter) = 0;
    virtual inline std::pair<const void*, void*> init_rr_graph_rr_edges(const void* data, void* iter) = 0;
    virtual inline void finish_rr_graph_rr_edges(const void* data, void* iter) = 0;
    virtual inline std::pair<const void*, void*> get_rr_graph_rr_edges(const void* data, void* iter) = 0;
};

} /* namespace uxsd */