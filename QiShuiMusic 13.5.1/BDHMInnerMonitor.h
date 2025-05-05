@interface BDHMInnerMonitor : NSObject
+ (id)generateTraceId;
+ (id)getTraceIdFrom:;
+ (void)collectEventCreated:;
+ (void)collectEventTerminated:reason:;
+ (void)collectEventUnSampled:;
+ (void)collectEventUpdated:;
+ (void)collectEventUploaded:;
+ (id)getEventFrom:phase:;
+ (id)getEventType:;
+ (void)setEnable:;
@end
