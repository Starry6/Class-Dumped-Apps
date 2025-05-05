@interface AVRunLoopCondition : NSCondition
- (void)signal;
- (id)init;
- (void)dealloc;
- (BOOL)waitUntilDate:inMode:;
- (void)broadcast;
- (void)wait;
- (void)waitInMode:;
- (BOOL)waitUntilDate:;
- (BOOL)_waitInMode:untilDate:;
- (void)_signalRunLoopWithState:;
@end
