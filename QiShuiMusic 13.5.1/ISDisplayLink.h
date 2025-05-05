@interface ISDisplayLink : NSObject
@property (nonatomic) @? updateHandler;
@property (nonatomic) @? completionHandler;
@property (nonatomic) CADisplayLink displayLink;
@property (nonatomic) q preferredFramesPerSecond;
- (id)displayLink;
- (void)setDisplayLink:;
- (void)dealloc;
- (void)start;
- (void)setPreferredFramesPerSecond:;
- (void)_update:;
- (void)stop;
- (long long)preferredFramesPerSecond;
- (void)setCompletionHandler:;
- (id)updateHandler;
- (void)setUpdateHandler:;
- (void).cxx_destruct;
- (id)initWithUpdateHandler:completionHandler:;
- (id)completionHandler;
- (void)_callUpdateHandler;
@end
