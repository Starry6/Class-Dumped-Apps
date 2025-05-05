@interface HMDProtectFixLibdispatch : NSObject
- (void)exchangeQueueMethod;
- (void)fixGCDCrash;
- (BOOL)isProtectCFFDQueue;
- (void)receiveConfigNotification:;
- (void)storeProtectCFFDQueueConfig:;
- (id)init;
- (void)dealloc;
+ (id)sharedInstance;
@end
