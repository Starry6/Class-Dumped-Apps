@interface EAccountTimeoutTimer : NSObject
@property (nonatomic) NSTimer toTimer;
@property (nonatomic) @? toblock;
@property (nonatomic) <EAccountTimeoutDelegate> delegate;
@property (nonatomic) double tInterval;
- (id)toblock;
- (id)toTimer;
- (void)setTInterval:;
- (void)setToTimer:;
- (void)setToblock:;
- (void)startTick;
- (void)startTickWithBlock:;
- (double)tInterval;
- (void)toTimerBlockTick;
- (void)toTimerTick;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
@end
