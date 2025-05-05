@interface AMSMemoryPressure : NSObject
+ (id)observable;
+ (void)unsubscribe:;
+ (void)subscribe:;
+ (id)_memoryPressureStatusForMemoryPressure:;
+ (id)lastKnownStatus;
@end
