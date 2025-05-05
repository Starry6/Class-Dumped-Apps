@interface SceneCut : NSObject
@property (nonatomic) VFMetalContext context;
@property (nonatomic) <MTLComputePipelineState> pipeline;
- (id)Buffer2Texture:;
- (void)GetSceneCutfromTexture:img_ref:;
- (void)Release;
- (BOOL)IsSceneCut:img_ref:intype:;
- (void)GetSceneCutfromBuffer:img_ref:;
- (id)context;
- (id)initWithContext:;
- (void).cxx_destruct;
- (id)pipeline;
- (void)setContext:;
- (void)setPipeline:;
@end
