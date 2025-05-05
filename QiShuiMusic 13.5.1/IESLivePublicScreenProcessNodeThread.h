@interface IESLivePublicScreenProcessNodeThread : NSObject
@property (nonatomic) BOOL isRunning;
@property (nonatomic) NSThread innerThread;
- (void)initWithRunLoop;
- (void)setInnerThread:;
- (void)__executeProcessNodeBlock:;
- (void)__stop;
- (void)executeProcessNodeBlock:;
- (id)initWithPublicScreenID:;
- (id)innerThread;
- (void)dealloc;
- (void)stop;
- (void)setIsRunning:;
- (BOOL)isRunning;
- (void).cxx_destruct;
@end
