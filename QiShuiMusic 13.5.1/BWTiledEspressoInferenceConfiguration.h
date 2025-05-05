@interface BWTiledEspressoInferenceConfiguration : BWInferenceConfiguration
@property (nonatomic) <MTLCommandQueue> metalCommandQueue;
@property (nonatomic) BOOL forceSynchronousInference;
- (void)dealloc;
- (void)setMetalCommandQueue:;
- (id)metalCommandQueue;
- (id)initWithInferenceType:metalCommandQueue:;
- (BOOL)forceSynchronousInference;
- (void)setForceSynchronousInference:;
@end
