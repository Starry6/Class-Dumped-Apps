@interface ICTelemetryManager : NSObject
- (void)postTelemetryEvent:serviceName:payload:;
+ (id)sharedManager;
+ (void)postBasicEvent:;
+ (void)postFetchDatabaseChangesTelemetryWithReason:;
+ (void)postFetchZoneChangesTelemetryWithReason:;
+ (void)postFullSyncTelemetryWithReason:;
+ (id)telemetryTuples;
+ (id)telemetryQueue;
+ (void)waitUntilAllPendingTelemetryHasBeenSent;
@end
