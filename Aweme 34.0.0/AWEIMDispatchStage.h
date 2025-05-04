@interface AWEIMDispatchStage : AWEIMStage
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) BOOL sync;
- (id)initWithQueue:sync:;
- (BOOL)sync;
- (void)setSync:;
- (void)setQueue:;
- (void).cxx_destruct;
- (id)queue;
- (void)start;
@end
