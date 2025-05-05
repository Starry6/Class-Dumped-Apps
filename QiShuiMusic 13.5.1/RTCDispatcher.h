@interface RTCDispatcher : NSObject
+ (id)dispatchQueueForType:;
+ (void)dispatchAsyncOnType:block:;
+ (BOOL)isOnQueueForType:;
@end
