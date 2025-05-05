@interface GroupFeature : NSObject
@property (nonatomic) VFMetalContext context;
@property (nonatomic) <MTLComputePipelineState> pipeline;
@property (nonatomic) <MTLBuffer> resdata_ti;
@property (nonatomic) <MTLBuffer> resdata_si;
@property (nonatomic) <MTLBuffer> resdata_blur;
- (id)Buffer2Texture:;
- (void)Release;
- (void)GetFeaturefromTexture:img_ref:;
- (id)GetFeature:img_ref:intype:;
- (void)GetFeaturefromBuffer:img_ref:;
- (id)resdata_blur;
- (id)resdata_si;
- (id)resdata_ti;
- (void)setResdata_blur:;
- (void)setResdata_si:;
- (void)setResdata_ti:;
- (id)context;
- (id)initWithContext:;
- (void).cxx_destruct;
- (id)pipeline;
- (void)setContext:;
- (void)setPipeline:;
@end
