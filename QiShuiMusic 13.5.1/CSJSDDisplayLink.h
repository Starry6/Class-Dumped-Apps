@interface CSJSDDisplayLink : NSObject
@property (nonatomic) double previousFireTime;
@property (nonatomic) double nextFireTime;
@property (nonatomic) CADisplayLink displayLink;
@property (nonatomic) @ target;
@property (nonatomic) : selector;
@property (nonatomic) double duration;
@property (nonatomic) BOOL isRunning;
- (void)displayLinkDidRefresh:;
- (double)previousFireTime;
- (void)setPreviousFireTime:;
- (id)displayLink;
- (SEL)selector;
- (void)setDisplayLink:;
- (double)nextFireTime;
- (void)dealloc;
- (void)removeFromRunLoop:forMode:;
- (void)start;
- (void)stop;
- (BOOL)isRunning;
- (void)addToRunLoop:forMode:;
- (void).cxx_destruct;
- (void)setNextFireTime:;
- (id)target;
- (id)initWithTarget:selector:;
- (double)duration;
+ (id)displayLinkWithTarget:selector:;
@end
