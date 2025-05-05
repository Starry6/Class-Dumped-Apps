@interface RACKVOProxy : NSObject
@property (nonatomic) NSMapTable trampolines;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
- (void)addObserver:forContext:;
- (void)removeObserver:forContext:;
- (id)trampolines;
- (id)init;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void).cxx_destruct;
- (id)queue;
+ (id)sharedProxy;
@end
