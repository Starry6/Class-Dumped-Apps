@interface MSVCallback : NSObject
@property (nonatomic) @ block;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
- (id)block;
- (void)invoke;
- (void)invokeWithObject:;
- (void).cxx_destruct;
- (void)setBlock:;
- (void)setQueue:;
- (id)queue;
+ (id)callbackWithQueue:block:;
@end
