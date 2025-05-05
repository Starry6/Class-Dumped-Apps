@interface BSProcessDeathWatcher : NSObject
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithPID:queue:deathHandler:;
- (void)invalidate;
@end
