@interface VCDispatchTimer : VCObject
@property (nonatomic) @? callbackBlock;
@property (nonatomic) BOOL isRunning;
- (void)dealloc;
- (void)start;
- (void)stop;
- (BOOL)isRunning;
- (id)callbackBlock;
- (id)initWithIntervalSeconds:callbackBlock:;
- (id)initWithIntervalMilliseconds:callbackBlock:;
- (id)initWithIntervalSeconds:callbackBlock:clientQueue:;
- (id)initWithIntervalMilliseconds:callbackBlock:clientQueue:;
@end
