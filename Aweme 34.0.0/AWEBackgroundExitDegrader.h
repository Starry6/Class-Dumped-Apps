@interface AWEBackgroundExitDegrader : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> degradeQueue;
- (void)degradeWithSize:;
- (void)degradeIfNeeded;
- (id)degradeQueue;
- (void)setDegradeQueue:;
- (id)init;
- (void).cxx_destruct;
- (void)free;
@end
