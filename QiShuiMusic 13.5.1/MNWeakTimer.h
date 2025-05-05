@interface MNWeakTimer : NSObject
@property (nonatomic) @ target;
@property (nonatomic) : selector;
@property (nonatomic) NSTimer timer;
- (SEL)selector;
- (void)setSelector:;
- (void)dealloc;
- (void)_timerDidFire;
- (void)setTarget:;
- (void).cxx_destruct;
- (id)target;
- (id)timer;
- (void)invalidate;
- (id)initWithTimeInterval:target:selector:;
+ (id)scheduledTimerWithTimeInterval:target:selector:;
@end
