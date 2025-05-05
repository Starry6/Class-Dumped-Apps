@interface VNObjectTrackerRevision2 : VNObjectTracker
- (id)initWithOptions:error:;
+ (id)rpnTrackerTrackProcessingQueueName;
+ (id)rpnTrackQueue;
+ (id)rpnTrackerTrackModelName;
+ (id)rpnTrackerInitProcessingQueueName;
+ (id)rpnInitQueue;
+ (id)serializeRPNInitializationQueue;
+ (id)serializeRPNTrackingQueue;
+ (id)rpnTrackerInitModelName;
@end
