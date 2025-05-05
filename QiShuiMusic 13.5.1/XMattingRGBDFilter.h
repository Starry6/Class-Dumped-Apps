@interface XMattingRGBDFilter : NSObject
@property (nonatomic) {?=IIIIIfB} config;
@property (nonatomic) XMattingBoxTensorFilter boxTensorFilter;
@property (nonatomic) BOOL stateComputed;
@property (nonatomic) BOOL coefficientsComputed;
- (void)dealloc;
- (void)setConfig:;
- (int)_compileShadersWithLibrary:;
- (void)releaseResources;
- (void).cxx_destruct;
- (int)allocateResources:;
- (id)config;
- (id)initWithDevice:library:;
- (int)encodeStateOn:colorGuide:disparityGuide:initialSegmentation:constraints:;
- (int)encodeStepOn:;
- (int)encodeApplyCoefficientsOn:colorGuide:disparityGuide:constraints:destinationAlphaTexture:;
- (int)encodeUpsampleOn:segmentation:colorGuide:disparityGuide:outputMatte:;
- (id)boxTensorFilter;
- (void)setBoxTensorFilter:;
- (BOOL)stateComputed;
- (BOOL)coefficientsComputed;
- (void)encodePushOn:textureArray:texture:;
- (int)encodeDisparityToAlphaOn:disparityTexture:destinationTexture:;
- (int)encodeNearestNeighborDownSamplingOn:inputTexture:outputTexture:;
- (int)encodeCoefficientsOn:guideStack:alphaStack:mean_I:var_I:coefficients:;
@end
