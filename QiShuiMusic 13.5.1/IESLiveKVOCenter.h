@interface IESLiveKVOCenter : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) NSMapTable observerMap;
- (void)removeObserver:;
- (id)init;
- (void)addObserver:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void).cxx_destruct;
- (id)queue;
- (id)observerMap;
- (void)setObserverMap:;
+ (id)shared;
@end
