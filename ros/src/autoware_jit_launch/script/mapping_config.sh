#!/bin/bash
rostopic pub /config/ndt_mapping runtime_manager/ConfigNdtMapping "header:
  seq: 0
  stamp: {secs: 0, nsecs: 0}
  frame_id: ''
resolution: 1.0
step_size: 0.1
trans_eps: 0.01
leaf_size: 2.0"
