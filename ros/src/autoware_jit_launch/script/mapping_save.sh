#!/bin/bash
rostopic pub /config/ndt_mapping_output runtime_manager/ConfigNdtMappingOutput "header:
  seq: 0
  stamp:
    secs: 0
    nsecs: 0
  frame_id: ''
filename: '/media/Data/DiboticsData2016/AURO2016-06-21-20_01.pcd'
filter_res: 0.1"