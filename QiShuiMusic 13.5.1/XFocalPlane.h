@interface XFocalPlane : NSObject
@property (nonatomic) {?=fffff} config;
@property (nonatomic) <MTLBuffer> minMaxAtomic_buf;
@property (nonatomic) <MTLBuffer> minMaxResult_buf;
@property (nonatomic) <MTLBuffer> zeroShiftResult_buf;
- (void)dealloc;
- (int)allocateResources;
- (void)setConfig:;
- (int)_compileShadersWithLibrary:;
- (void)releaseResources;
- (void).cxx_destruct;
- (id)config;
- (id)initWithDevice:library:;
- (int)encodeDisparityRefinementPreprocessingOn:alphaTexture:inputDisparityTexture:outputDisparityTexture:configuration:;
- (int)encodeMinMaxOn:inputTexture:;
- (int)encodeFocalPlaneCalcOn:disparityTexture:;
- (id)minMaxAtomic_buf;
- (id)minMaxResult_buf;
- (id)zeroShiftResult_buf;
@end
