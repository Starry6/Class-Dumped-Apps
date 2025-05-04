@interface AWEWeakTimerTarget : NSObject
@property (nonatomic) @ target;
@property (nonatomic) : selector;
- (id)target;
- (void)setTarget:;
- (id)initWithTarget:selector:;
- (void).cxx_destruct;
- (void)setSelector:;
- (void)timerDidFire:;
- (SEL)selector;
@end
