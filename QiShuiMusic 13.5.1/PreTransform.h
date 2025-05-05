@interface PreTransform : NSObject
@property (nonatomic) MTLTextureDescriptor descriptor;
@property (nonatomic) VFMetalContext context;
@property (nonatomic) <MTLComputePipelineState> pipeline;
- (void)Release;
- (id)Transform:need_color_trans:;
- (id)initWithParam:height:need_rerange:context:;
- (id)descriptor;
- (id)context;
- (void)setDescriptor:;
- (void).cxx_destruct;
- (id)pipeline;
- (void)setContext:;
- (void)setPipeline:;
@end
