@interface IESLiveSaaSRoomSlideWatchTime : NSObject
@property (nonatomic) HTSEventContext context;
@property (nonatomic) IESLiveSaaSGCDTimer timer;
@property (nonatomic) Q minitTickTimes;
@property (nonatomic) BOOL isWatching;
@property (nonatomic) Q interval;
@property (nonatomic) BOOL valid;
- (void)closeWatching;
- (void)doTimerAction;
- (BOOL)isWatching;
- (unsigned long long)minitTickTimes;
- (void)setIsWatching:;
- (void)setMinitTickTimes:;
- (void)stopTimer;
- (void)dealloc;
- (BOOL)valid;
- (id)context;
- (void)setValid:;
- (void)stopWatching;
- (void)setTimer:;
- (void)setInterval:;
- (id)initWithContext:;
- (void)startWatching;
- (void).cxx_destruct;
- (id)timer;
- (void)setContext:;
- (unsigned long long)interval;
- (void)startTimerWithInterval:;
@end
