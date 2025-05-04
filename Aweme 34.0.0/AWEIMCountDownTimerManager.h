@interface AWEIMCountDownTimerManager : NSObject
@property (nonatomic) NSTimer timer;
@property (nonatomic) NSHashTable eventListeners;
@property (nonatomic) <AWEIMCountDownTimerManagerEventAction> eventDelegate;
- (double)currentServerTime;
- (void)p_startTimerIfNeed;
- (void)p_onTimerFiredWithTimerEventListener:;
- (void)p_stopTimerIfNeed;
- (id)p_getCountDownTitleWithEndTime:;
- (void)p_timerFired;
- (id)p_getTimeCountDownTitleWithTimerEventListener:;
- (BOOL)p_isFinishEventWithTimerEventListener:;
- (void)unregistWithTimerEventListener:;
- (id)p_getCountDownTitleWithInterval:;
- (void)registTimerFiredCallbackWithTimerEventListener:endTime:;
- (id)getCountDownTitleWithEndTime:;
- (void)setTimer:;
- (id)init;
- (id)timer;
- (id)eventDelegate;
- (void).cxx_destruct;
- (id)eventListeners;
- (void)setEventListeners:;
- (void)setEventDelegate:;
+ (id)sharedInstance;
@end
