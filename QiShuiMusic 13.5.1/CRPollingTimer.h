@interface CRPollingTimer : NSObject
@property (nonatomic) {?=qiIq} fireTime;
@property (nonatomic) @ target;
@property (nonatomic) : selector;
@property (nonatomic) BOOL fired;
@property (nonatomic) BOOL valid;
- (SEL)selector;
- (BOOL)fired;
- (id)fireTime;
- (void)setSelector:;
- (BOOL)valid;
- (void)setFireTime:;
- (void)setValid:;
- (void)setTarget:;
- (void).cxx_destruct;
- (id)target;
- (id)initWithTarget:selector:;
- (void)invalidate;
- (void)evalAtTime:;
- (void)setFired:;
@end
