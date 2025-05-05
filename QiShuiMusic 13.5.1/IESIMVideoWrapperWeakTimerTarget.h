@interface IESIMVideoWrapperWeakTimerTarget : NSObject
@property (nonatomic) @ target;
@property (nonatomic) : selector;
- (SEL)selector;
- (void)timerDidFire:;
- (void)setSelector:;
- (void)setTarget:;
- (void).cxx_destruct;
- (id)target;
- (id)initWithTarget:selector:;
@end
