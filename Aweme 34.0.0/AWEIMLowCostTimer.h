@interface AWEIMLowCostTimer : NSObject
@property (nonatomic) double duration;
@property (nonatomic) BOOL running;
@property (nonatomic) BOOL paused;
@property (nonatomic) double beginTime;
@property (nonatomic) double endTime;
- (void)p_addObserver;
- (void)setRunning:;
- (id)init;
- (double)endTime;
- (void)resume;
- (void)setEndTime:;
- (void)setDuration:;
- (BOOL)isPaused;
- (double)beginTime;
- (void)setBeginTime:;
- (void)setPaused:;
- (double)duration;
- (void)stop;
- (void)start;
- (void)pause;
- (BOOL)isRunning;
@end
