@interface CNCountdownLatch : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithStartingCount:;
- (void)countDown;
- (void)await;
- (BOOL)awaitWithTimeout:;
- (BOOL)awaitWithTimeout:strategy:;
- (BOOL)awaitImmediate;
- (BOOL)hasLatched;
- (BOOL)awaitOnSemaphoreWithTimeout:;
- (BOOL)awaitWhileSpinningRunloopWithTimeout:;
@end
