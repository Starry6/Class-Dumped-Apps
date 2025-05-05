@interface UIDelayedAction : NSObject
@property (nonatomic) NSDate _startDate;
@property (nonatomic) BOOL _canceled;
@property (nonatomic) @ target;
@property (nonatomic) @ userInfo;
- (void)timerFired:;
- (id)init;
- (void)cancel;
- (void)dealloc;
- (id)userInfo;
- (id)_startDate;
- (void)touch;
- (double)delay;
- (void)unschedule;
- (void)setTarget:;
- (void)setUserInfo:;
- (void).cxx_destruct;
- (id)target;
- (BOOL)scheduled;
- (BOOL)_canceled;
- (id)initWithTarget:action:userInfo:delay:mode:;
- (id)initWithTarget:action:userInfo:delay:;
- (void)touchWithDelay:;
@end
