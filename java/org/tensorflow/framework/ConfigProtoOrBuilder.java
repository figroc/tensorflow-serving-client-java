// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/protobuf/config.proto

package org.tensorflow.framework;

public interface ConfigProtoOrBuilder extends
    // @@protoc_insertion_point(interface_extends:tensorflow.ConfigProto)
    com.google.protobuf.MessageOrBuilder {

  /**
   * <pre>
   * Map from device type name (e.g., "CPU" or "GPU" ) to maximum
   * number of devices of that type to use.  If a particular device
   * type is not found in the map, the system picks an appropriate
   * number.
   * </pre>
   *
   * <code>map&lt;string, int32&gt; device_count = 1;</code>
   */
  int getDeviceCountCount();
  /**
   * <pre>
   * Map from device type name (e.g., "CPU" or "GPU" ) to maximum
   * number of devices of that type to use.  If a particular device
   * type is not found in the map, the system picks an appropriate
   * number.
   * </pre>
   *
   * <code>map&lt;string, int32&gt; device_count = 1;</code>
   */
  boolean containsDeviceCount(
      java.lang.String key);
  /**
   * Use {@link #getDeviceCountMap()} instead.
   */
  @java.lang.Deprecated
  java.util.Map<java.lang.String, java.lang.Integer>
  getDeviceCount();
  /**
   * <pre>
   * Map from device type name (e.g., "CPU" or "GPU" ) to maximum
   * number of devices of that type to use.  If a particular device
   * type is not found in the map, the system picks an appropriate
   * number.
   * </pre>
   *
   * <code>map&lt;string, int32&gt; device_count = 1;</code>
   */
  java.util.Map<java.lang.String, java.lang.Integer>
  getDeviceCountMap();
  /**
   * <pre>
   * Map from device type name (e.g., "CPU" or "GPU" ) to maximum
   * number of devices of that type to use.  If a particular device
   * type is not found in the map, the system picks an appropriate
   * number.
   * </pre>
   *
   * <code>map&lt;string, int32&gt; device_count = 1;</code>
   */

  int getDeviceCountOrDefault(
      java.lang.String key,
      int defaultValue);
  /**
   * <pre>
   * Map from device type name (e.g., "CPU" or "GPU" ) to maximum
   * number of devices of that type to use.  If a particular device
   * type is not found in the map, the system picks an appropriate
   * number.
   * </pre>
   *
   * <code>map&lt;string, int32&gt; device_count = 1;</code>
   */

  int getDeviceCountOrThrow(
      java.lang.String key);

  /**
   * <pre>
   * The execution of an individual op (for some op types) can be
   * parallelized on a pool of intra_op_parallelism_threads.
   * 0 means the system picks an appropriate number.
   * If you create an ordinary session, e.g., from Python or C++,
   * then there is exactly one intra op thread pool per process.
   * The first session created determines the number of threads in this pool.
   * All subsequent sessions reuse/share this one global pool.
   * There are notable exceptions to the default behavior describe above:
   * 1. There is an environment variable  for overriding this thread pool,
   *    named TF_OVERRIDE_GLOBAL_THREADPOOL.
   * 2. When connecting to a server, such as a remote `tf.train.Server`
   *    instance, then this option will be ignored altogether.
   * </pre>
   *
   * <code>int32 intra_op_parallelism_threads = 2;</code>
   * @return The intraOpParallelismThreads.
   */
  int getIntraOpParallelismThreads();

  /**
   * <pre>
   * Nodes that perform blocking operations are enqueued on a pool of
   * inter_op_parallelism_threads available in each process.
   * 0 means the system picks an appropriate number.
   * Negative means all operations are performed in caller's thread.
   * Note that the first Session created in the process sets the
   * number of threads for all future sessions unless use_per_session_threads is
   * true or session_inter_op_thread_pool is configured.
   * </pre>
   *
   * <code>int32 inter_op_parallelism_threads = 5;</code>
   * @return The interOpParallelismThreads.
   */
  int getInterOpParallelismThreads();

  /**
   * <pre>
   * If true, use a new set of threads for this session rather than the global
   * pool of threads. Only supported by direct sessions.
   * If false, use the global threads created by the first session, or the
   * per-session thread pools configured by session_inter_op_thread_pool.
   * This option is deprecated. The same effect can be achieved by setting
   * session_inter_op_thread_pool to have one element, whose num_threads equals
   * inter_op_parallelism_threads.
   * </pre>
   *
   * <code>bool use_per_session_threads = 9;</code>
   * @return The usePerSessionThreads.
   */
  boolean getUsePerSessionThreads();

  /**
   * <pre>
   * This option is experimental - it may be replaced with a different mechanism
   * in the future.
   * Configures session thread pools. If this is configured, then RunOptions for
   * a Run call can select the thread pool to use.
   * The intended use is for when some session invocations need to run in a
   * background pool limited to a small number of threads:
   * - For example, a session may be configured to have one large pool (for
   * regular compute) and one small pool (for periodic, low priority work);
   * using the small pool is currently the mechanism for limiting the inter-op
   * parallelism of the low priority work.  Note that it does not limit the
   * parallelism of work spawned by a single op kernel implementation.
   * - Using this setting is normally not needed in training, but may help some
   * serving use cases.
   * - It is also generally recommended to set the global_name field of this
   * proto, to avoid creating multiple large pools. It is typically better to
   * run the non-low-priority work, even across sessions, in a single large
   * pool.
   * </pre>
   *
   * <code>repeated .tensorflow.ThreadPoolOptionProto session_inter_op_thread_pool = 12;</code>
   */
  java.util.List<org.tensorflow.framework.ThreadPoolOptionProto> 
      getSessionInterOpThreadPoolList();
  /**
   * <pre>
   * This option is experimental - it may be replaced with a different mechanism
   * in the future.
   * Configures session thread pools. If this is configured, then RunOptions for
   * a Run call can select the thread pool to use.
   * The intended use is for when some session invocations need to run in a
   * background pool limited to a small number of threads:
   * - For example, a session may be configured to have one large pool (for
   * regular compute) and one small pool (for periodic, low priority work);
   * using the small pool is currently the mechanism for limiting the inter-op
   * parallelism of the low priority work.  Note that it does not limit the
   * parallelism of work spawned by a single op kernel implementation.
   * - Using this setting is normally not needed in training, but may help some
   * serving use cases.
   * - It is also generally recommended to set the global_name field of this
   * proto, to avoid creating multiple large pools. It is typically better to
   * run the non-low-priority work, even across sessions, in a single large
   * pool.
   * </pre>
   *
   * <code>repeated .tensorflow.ThreadPoolOptionProto session_inter_op_thread_pool = 12;</code>
   */
  org.tensorflow.framework.ThreadPoolOptionProto getSessionInterOpThreadPool(int index);
  /**
   * <pre>
   * This option is experimental - it may be replaced with a different mechanism
   * in the future.
   * Configures session thread pools. If this is configured, then RunOptions for
   * a Run call can select the thread pool to use.
   * The intended use is for when some session invocations need to run in a
   * background pool limited to a small number of threads:
   * - For example, a session may be configured to have one large pool (for
   * regular compute) and one small pool (for periodic, low priority work);
   * using the small pool is currently the mechanism for limiting the inter-op
   * parallelism of the low priority work.  Note that it does not limit the
   * parallelism of work spawned by a single op kernel implementation.
   * - Using this setting is normally not needed in training, but may help some
   * serving use cases.
   * - It is also generally recommended to set the global_name field of this
   * proto, to avoid creating multiple large pools. It is typically better to
   * run the non-low-priority work, even across sessions, in a single large
   * pool.
   * </pre>
   *
   * <code>repeated .tensorflow.ThreadPoolOptionProto session_inter_op_thread_pool = 12;</code>
   */
  int getSessionInterOpThreadPoolCount();
  /**
   * <pre>
   * This option is experimental - it may be replaced with a different mechanism
   * in the future.
   * Configures session thread pools. If this is configured, then RunOptions for
   * a Run call can select the thread pool to use.
   * The intended use is for when some session invocations need to run in a
   * background pool limited to a small number of threads:
   * - For example, a session may be configured to have one large pool (for
   * regular compute) and one small pool (for periodic, low priority work);
   * using the small pool is currently the mechanism for limiting the inter-op
   * parallelism of the low priority work.  Note that it does not limit the
   * parallelism of work spawned by a single op kernel implementation.
   * - Using this setting is normally not needed in training, but may help some
   * serving use cases.
   * - It is also generally recommended to set the global_name field of this
   * proto, to avoid creating multiple large pools. It is typically better to
   * run the non-low-priority work, even across sessions, in a single large
   * pool.
   * </pre>
   *
   * <code>repeated .tensorflow.ThreadPoolOptionProto session_inter_op_thread_pool = 12;</code>
   */
  java.util.List<? extends org.tensorflow.framework.ThreadPoolOptionProtoOrBuilder> 
      getSessionInterOpThreadPoolOrBuilderList();
  /**
   * <pre>
   * This option is experimental - it may be replaced with a different mechanism
   * in the future.
   * Configures session thread pools. If this is configured, then RunOptions for
   * a Run call can select the thread pool to use.
   * The intended use is for when some session invocations need to run in a
   * background pool limited to a small number of threads:
   * - For example, a session may be configured to have one large pool (for
   * regular compute) and one small pool (for periodic, low priority work);
   * using the small pool is currently the mechanism for limiting the inter-op
   * parallelism of the low priority work.  Note that it does not limit the
   * parallelism of work spawned by a single op kernel implementation.
   * - Using this setting is normally not needed in training, but may help some
   * serving use cases.
   * - It is also generally recommended to set the global_name field of this
   * proto, to avoid creating multiple large pools. It is typically better to
   * run the non-low-priority work, even across sessions, in a single large
   * pool.
   * </pre>
   *
   * <code>repeated .tensorflow.ThreadPoolOptionProto session_inter_op_thread_pool = 12;</code>
   */
  org.tensorflow.framework.ThreadPoolOptionProtoOrBuilder getSessionInterOpThreadPoolOrBuilder(
      int index);

  /**
   * <pre>
   * Assignment of Nodes to Devices is recomputed every placement_period
   * steps until the system warms up (at which point the recomputation
   * typically slows down automatically).
   * </pre>
   *
   * <code>int32 placement_period = 3;</code>
   * @return The placementPeriod.
   */
  int getPlacementPeriod();

  /**
   * <pre>
   * When any filters are present sessions will ignore all devices which do not
   * match the filters. Each filter can be partially specified, e.g. "/job:ps"
   * "/job:worker/replica:3", etc.
   * </pre>
   *
   * <code>repeated string device_filters = 4;</code>
   * @return A list containing the deviceFilters.
   */
  java.util.List<java.lang.String>
      getDeviceFiltersList();
  /**
   * <pre>
   * When any filters are present sessions will ignore all devices which do not
   * match the filters. Each filter can be partially specified, e.g. "/job:ps"
   * "/job:worker/replica:3", etc.
   * </pre>
   *
   * <code>repeated string device_filters = 4;</code>
   * @return The count of deviceFilters.
   */
  int getDeviceFiltersCount();
  /**
   * <pre>
   * When any filters are present sessions will ignore all devices which do not
   * match the filters. Each filter can be partially specified, e.g. "/job:ps"
   * "/job:worker/replica:3", etc.
   * </pre>
   *
   * <code>repeated string device_filters = 4;</code>
   * @param index The index of the element to return.
   * @return The deviceFilters at the given index.
   */
  java.lang.String getDeviceFilters(int index);
  /**
   * <pre>
   * When any filters are present sessions will ignore all devices which do not
   * match the filters. Each filter can be partially specified, e.g. "/job:ps"
   * "/job:worker/replica:3", etc.
   * </pre>
   *
   * <code>repeated string device_filters = 4;</code>
   * @param index The index of the value to return.
   * @return The bytes of the deviceFilters at the given index.
   */
  com.google.protobuf.ByteString
      getDeviceFiltersBytes(int index);

  /**
   * <pre>
   * Options that apply to all GPUs.
   * </pre>
   *
   * <code>.tensorflow.GPUOptions gpu_options = 6;</code>
   * @return Whether the gpuOptions field is set.
   */
  boolean hasGpuOptions();
  /**
   * <pre>
   * Options that apply to all GPUs.
   * </pre>
   *
   * <code>.tensorflow.GPUOptions gpu_options = 6;</code>
   * @return The gpuOptions.
   */
  org.tensorflow.framework.GPUOptions getGpuOptions();
  /**
   * <pre>
   * Options that apply to all GPUs.
   * </pre>
   *
   * <code>.tensorflow.GPUOptions gpu_options = 6;</code>
   */
  org.tensorflow.framework.GPUOptionsOrBuilder getGpuOptionsOrBuilder();

  /**
   * <pre>
   * Whether soft placement is allowed. If allow_soft_placement is true,
   * an op will be placed on CPU if
   *   1. there's no GPU implementation for the OP
   * or
   *   2. no GPU devices are known or registered
   * or
   *   3. need to co-locate with reftype input(s) which are from CPU.
   * </pre>
   *
   * <code>bool allow_soft_placement = 7;</code>
   * @return The allowSoftPlacement.
   */
  boolean getAllowSoftPlacement();

  /**
   * <pre>
   * Whether device placements should be logged.
   * </pre>
   *
   * <code>bool log_device_placement = 8;</code>
   * @return The logDevicePlacement.
   */
  boolean getLogDevicePlacement();

  /**
   * <pre>
   * Options that apply to all graphs.
   * </pre>
   *
   * <code>.tensorflow.GraphOptions graph_options = 10;</code>
   * @return Whether the graphOptions field is set.
   */
  boolean hasGraphOptions();
  /**
   * <pre>
   * Options that apply to all graphs.
   * </pre>
   *
   * <code>.tensorflow.GraphOptions graph_options = 10;</code>
   * @return The graphOptions.
   */
  org.tensorflow.framework.GraphOptions getGraphOptions();
  /**
   * <pre>
   * Options that apply to all graphs.
   * </pre>
   *
   * <code>.tensorflow.GraphOptions graph_options = 10;</code>
   */
  org.tensorflow.framework.GraphOptionsOrBuilder getGraphOptionsOrBuilder();

  /**
   * <pre>
   * Global timeout for all blocking operations in this session.  If non-zero,
   * and not overridden on a per-operation basis, this value will be used as the
   * deadline for all blocking operations.
   * </pre>
   *
   * <code>int64 operation_timeout_in_ms = 11;</code>
   * @return The operationTimeoutInMs.
   */
  long getOperationTimeoutInMs();

  /**
   * <pre>
   * Options that apply when this session uses the distributed runtime.
   * </pre>
   *
   * <code>.tensorflow.RPCOptions rpc_options = 13;</code>
   * @return Whether the rpcOptions field is set.
   */
  boolean hasRpcOptions();
  /**
   * <pre>
   * Options that apply when this session uses the distributed runtime.
   * </pre>
   *
   * <code>.tensorflow.RPCOptions rpc_options = 13;</code>
   * @return The rpcOptions.
   */
  org.tensorflow.framework.RPCOptions getRpcOptions();
  /**
   * <pre>
   * Options that apply when this session uses the distributed runtime.
   * </pre>
   *
   * <code>.tensorflow.RPCOptions rpc_options = 13;</code>
   */
  org.tensorflow.framework.RPCOptionsOrBuilder getRpcOptionsOrBuilder();

  /**
   * <pre>
   * Optional list of all workers to use in this session.
   * </pre>
   *
   * <code>.tensorflow.ClusterDef cluster_def = 14;</code>
   * @return Whether the clusterDef field is set.
   */
  boolean hasClusterDef();
  /**
   * <pre>
   * Optional list of all workers to use in this session.
   * </pre>
   *
   * <code>.tensorflow.ClusterDef cluster_def = 14;</code>
   * @return The clusterDef.
   */
  org.tensorflow.distruntime.ClusterDef getClusterDef();
  /**
   * <pre>
   * Optional list of all workers to use in this session.
   * </pre>
   *
   * <code>.tensorflow.ClusterDef cluster_def = 14;</code>
   */
  org.tensorflow.distruntime.ClusterDefOrBuilder getClusterDefOrBuilder();

  /**
   * <pre>
   * If true, any resources such as Variables used in the session will not be
   * shared with other sessions. However, when clusterspec propagation is
   * enabled, this field is ignored and sessions are always isolated.
   * </pre>
   *
   * <code>bool isolate_session_state = 15;</code>
   * @return The isolateSessionState.
   */
  boolean getIsolateSessionState();

  /**
   * <pre>
   * When true, WorkerSessions are created with device attributes from the
   * full cluster.
   * This is helpful when a worker wants to partition a graph
   * (for example during a PartitionedCallOp).
   * </pre>
   *
   * <code>bool share_cluster_devices_in_session = 17;</code>
   * @return The shareClusterDevicesInSession.
   */
  boolean getShareClusterDevicesInSession();

  /**
   * <code>.tensorflow.ConfigProto.Experimental experimental = 16;</code>
   * @return Whether the experimental field is set.
   */
  boolean hasExperimental();
  /**
   * <code>.tensorflow.ConfigProto.Experimental experimental = 16;</code>
   * @return The experimental.
   */
  org.tensorflow.framework.ConfigProto.Experimental getExperimental();
  /**
   * <code>.tensorflow.ConfigProto.Experimental experimental = 16;</code>
   */
  org.tensorflow.framework.ConfigProto.ExperimentalOrBuilder getExperimentalOrBuilder();
}
