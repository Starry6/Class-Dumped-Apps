@interface DIRSGlobalTimer : NSObject
- (void)addTimer:;
- (void)stopTimer;
- (id)init;
- (void)startTimer;
- (void)removeTimer:;
- (void).cxx_destruct;
- (void)_timerTick;
+ (id)globalTimer;
@end
