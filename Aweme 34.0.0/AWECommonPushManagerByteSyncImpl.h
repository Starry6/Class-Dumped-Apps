@interface AWECommonPushManagerByteSyncImpl : NSObject
+ (void)setCommonPushThreadID:;
+ (void)subscribeTopic:completion:;
+ (void)unsubscribeTopic:completion:;
+ (void)removeObserver;
+ (void)addObserverUsingBlock:;
@end
