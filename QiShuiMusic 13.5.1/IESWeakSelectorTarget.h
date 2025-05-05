@interface IESWeakSelectorTarget : NSObject
@property (nonatomic) NSTimer timer;
@property (nonatomic) @ target;
@property (nonatomic) : selector;
- (SEL)selector;
- (BOOL)respondsToSelector:;
- (id)initWithTarget:;
- (void)fire:;
- (BOOL)isMemberOfClass:;
- (id)methodSignatureForSelector:;
- (unsigned long long)hash;
- (id)debugDescription;
- (void)setTimer:;
- (BOOL)conformsToProtocol:;
- (Class)superclass;
- (BOOL)isProxy;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:;
- (Class)class;
- (id)target;
- (id)timer;
- (id)description;
- (id)forwardingTargetForSelector:;
- (id)initWithTarget:selector:;
- (void)forwardInvocation:;
- (BOOL)isEqual:;
+ (void)invalidateTimer:;
+ (id)scheduledTimerWithTimeInterval:target:selector:repeats:;
@end
