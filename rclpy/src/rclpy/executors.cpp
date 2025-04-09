#include "executors.hpp"

#include <tracetools/tracetools.h>

namespace rclpy
{
  void 
  trace_waiting_of_executor(int64_t timeout) {
    TRACETOOLS_TRACEPOINT(
      rclcpp_executor_wait_for_work,
      timeout
    );
  }

  void 
  trace_execution_of_executor(uint64_t callback) {
    TRACETOOLS_TRACEPOINT(
      rclcpp_executor_execute,
      reinterpret_cast<const void *>(callback)
    );
  }

  void 
  trace_get_ready_for_next_of_executor() {
    TRACETOOLS_TRACEPOINT(
      rclcpp_executor_get_next_ready,
    );
  }

  void 
  trace_start_of_callback(uint64_t callback) {
    TRACETOOLS_TRACEPOINT(
      callback_start,
      reinterpret_cast<const void *>(callback),
      false
    );
  }

  void 
  trace_end_of_callback(uint64_t callback) {
    TRACETOOLS_TRACEPOINT(
      callback_end,
      reinterpret_cast<const void *>(callback)
    );
  }
} 