@interface FPGracePeriodTimer : NSObject
- (void)suppress;
- (void)dealloc;
- (id)initWithAction:callbackQueue:delay:;
- (void)arm;
- (void)_createTimer;
- (void).cxx_destruct;
- (id)prettyDescription;
@end
