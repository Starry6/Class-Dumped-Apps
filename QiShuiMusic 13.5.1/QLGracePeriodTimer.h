@interface QLGracePeriodTimer : NSObject
@property (nonatomic) @? action;
- (void)suppress;
- (id)action;
- (id)initWithAction:callbackQueue:delay:;
- (void)arm;
- (void)setAction:;
- (void)_createTimer;
- (void).cxx_destruct;
- (void)_suppress;
@end
