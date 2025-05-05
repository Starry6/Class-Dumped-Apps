@interface IESLiveEZDanmakuClock : NSObject
@property (nonatomic) double speed;
@property (nonatomic) double currentTime;
- (void)p_reset;
- (id)initWithUpdater:;
- (void)p_refresh;
- (void)end;
- (void)dealloc;
- (void)start;
- (void)setSpeed:;
- (double)speed;
- (void)resume;
- (void).cxx_destruct;
- (double)currentTime;
- (void)pause;
+ (id)danmakuClockWithUpdater:;
@end
