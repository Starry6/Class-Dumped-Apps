@interface UIKeyboardScheduledTask : NSObject
@property (nonatomic) UIKeyboardTaskQueue taskQueue;
@property (nonatomic) NSTimer timer;
@property (nonatomic) _UIActionWhenIdle deferredAction;
@property (nonatomic) @? enqueuedTask;
@property (nonatomic) @? task;
@property (nonatomic) double timeInterval;
@property (nonatomic) BOOL repeats;
- (void)timerFired:;
- (id)enqueuedTask;
- (void)setDeferredAction:;
- (void)dealloc;
- (BOOL)repeats;
- (id)deferredAction;
- (id)task;
- (void)resetTimer;
- (void)setTimer:;
- (double)timeInterval;
- (void)handleDeferredTimerFiredEvent;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)taskQueue;
- (id)timer;
- (id)initWithTaskQueue:timeInterval:repeats:task:;
- (void)setEnqueuedTask:;
- (void)invalidate;
@end
