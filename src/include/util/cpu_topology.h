#pragma once
namespace scalable_graphs {
namespace util {

// cpu topology map is automatically generated by cpu-topology.py
#ifdef __ONLY_EXAMPLE_NEVER_DEFINED__
  enum {
    NUM_SOCKET = 2,
    NUM_PHYSICAL_CPU_PER_SOCKET = 6,
    SMT_LEVEL = 2,
  };

const int OS_CPU_ID[NUM_SOCKET][NUM_PHYSICAL_CPU_PER_SOCKET][SMT_LEVEL] = {{
    /* socket id: 0 */
    {
        /* physical cpu id: 0 */
        0, 12,
    },
#endif

#ifdef TARGET_ARCH_K1OM
#include "cpu_topology_mic.h"
#else
#include "cpu_topology_host.h"
#endif /* TARGET_ARCH_K1OM */
}}
