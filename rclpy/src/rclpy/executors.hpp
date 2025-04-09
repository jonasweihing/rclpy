#ifndef RCLPY__EXECUTOR_TRACE_HPP_
#define RCLPY__EXECUTOR_TRACE_HPP_

#include <pybind11/pybind11.h>

namespace py = pybind11;

namespace rclpy
{
    /// Trace the waiting state of the executor.
    /**
     * \param[in] timeout the timeout value for the wait call
     */
    void trace_waiting_of_executor(int64_t timeout);

    /// Trace the execution state of the executor.
    /**
     * \param[in] handle pointer to the `rcl` handle of the executable being executed
     */
    void trace_execution_of_executor(uint64_t handle);

    /// Trace the getting ready for next state of the executor.
    /**
     */
    void trace_get_ready_for_next_of_executor();

    /// Trace the beginning of a callback.
    /**
     * \param[in] callback pointer to callback object
     */
    void trace_start_of_callback(uint64_t callback);

    /// Trace the end of a callback.
    /**
     * \param[in] callback pointer to callback object
     */
    void trace_end_of_callback(uint64_t callback);
}

#endif