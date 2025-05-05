@interface BSWatchdog : NSObject
@property (nonatomic) <BSWatchdogDelegate> delegate;
@property (nonatomic) <BSWatchdogProviding> provider;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) double timeout;
@property (nonatomic) NSDate startDate;
@property (nonatomic) BOOL fired;
- (id)startDate;
- (void)dealloc;
- (void)start;
- (void)setDelegate:;
- (id)provider;
- (void)_watchdogInvalidated;
- (id)delegate;
- (void)_watchdogTimerFired;
- (void).cxx_destruct;
- (BOOL)hasFired;
- (double)timeout;
- (id)description;
- (id)initWithProvider:queue:completion:;
- (id)initWithTimeout:queue:;
- (id)initWithProvider:queue:;
- (id)queue;
- (void)invalidate;
- (id)initWithTimeout:queue:completion:;
@end
