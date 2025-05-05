@interface ARDaemonMetrics : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)reportMemoryFootprintInBytes:;
- (void)setCurrentMemoryFootprintAsPeak;
- (id)_reportCoreAnalyticsDaemonEventWithServiceName:clientBundleIdentifier:isServiceRemoved:isDisconnectingClient:;
- (void)reportCoreAnalyticsDaemonEventWithServiceName:clientBundleIdentifier:isServiceRemoved:isDisconnectingClient:;
- (void)reportServiceRemovedWithName:clientBundleIdentifier:;
- (void)reportServiceAddedWithName:clientBundleIdentifier:;
- (id)_reportDaemonHeartbeatForSessionUUID:daemonUpTimeExcludingSleep:daemonUpTimeIncludingSleep:systemUpTime:memoryFootprintInBytes:;
- (void)reportDaemonHeartbeatForSessionUUID:daemonUpTimeExcludingSleep:daemonUpTimeIncludingSleep:systemUpTime:memoryFootprintInBytes:;
- (unsigned long long)_getPeakMemoryUsageInMegabytes;
- (id)_getActiveServiceCountPerClient;
- (id)_getAllServicesUsedPerClient;
- (void)_addServiceForClient:serviceName:;
- (BOOL)_removeServiceForClient:serviceName:;
+ (id)sharedDaemonMetrics;
@end
