@interface PTYTimerWrapper : NSObject
@property (nonatomic) NSTimer timer;
@property (nonatomic) @? block;
@property (nonatomic) BOOL cancelled;
- (id)block;
- (BOOL)cancelled;
- (void)timerFired:;
- (void)setCancelled:;
- (void)cancel;
- (void)setTimer:;
- (void).cxx_destruct;
- (id)timer;
- (void)setBlock:;
- (id)initWithBlock:delay:;
@end
