@interface VECompileFramebufferManager : NSObject
@property (nonatomic) NSMutableArray framebufferPool;
@property (nonatomic) q resourceCount;
@property (nonatomic) HTSGLContext glContext;
@property (nonatomic) {CGSize=dd} framebufferSize;
@property (nonatomic) q minBufferSize;
@property (nonatomic) double waitTime;
@property (nonatomic) NSCondition conditionLock;
- (id)framebufferPool;
- (id)framebufferSize;
- (id)fetchFramebuffer;
- (void)initFramebufferPool:size:;
- (id)initManagerWithPipelineResourceCount:size:context:;
- (long long)minBufferSize;
- (void)returnFramebuffer:;
- (void)setFramebufferPool:;
- (void)setFramebufferSize:;
- (void)setMinBufferSize:;
- (void)setResourceCount:;
- (void)setWaitTime:;
- (double)waitTime;
- (id)conditionLock;
- (void)setConditionLock:;
- (void)dealloc;
- (void).cxx_destruct;
- (long long)resourceCount;
- (id)glContext;
- (void)setGlContext:;
@end
