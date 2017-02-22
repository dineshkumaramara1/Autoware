#!/bin/bash
rostopic pub /config/ndt_mapping_output runtime_manager/ConfigNdtMappingOutput "header:
  seq: 0
  stamp:
    secs: 0
    nsecs: 0
  frame_id: ''
filename: '/data/test.pcd'
filter_res: 0.1"
