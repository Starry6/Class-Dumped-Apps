@interface CATDispatchTimer : NSObject
- (void)dealloc;
- (void)resume;
- (void).cxx_destruct;
- (void)reset;
- (void)invalidate;
- (id)initWithIdentifier:workQueue:delegateQueue:timeInterval:totalFires:firesForever:fireHandler:;
- (void)timerDidFire;
+ (id)scheduledTimerWithIdentifier:workQueue:delegateQueue:timeInterval:totalFires:firesForever:fireHandler:;
@end
