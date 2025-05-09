@interface SmartCodecIOSInterface : NSObject
@property (nonatomic) FeatureGLCMGPU GLCM;
@property (nonatomic) GroupFeature Group;
@property (nonatomic) VFMetalContext context;
@property (nonatomic) SceneCut Scene;
@property (nonatomic) PreTransform TRANS;
@property (nonatomic) <MTLDevice> device;
@property (nonatomic) ASCSharpenFilter sharpenFilter;
@property (nonatomic) BOOL bFilterCPU;
@property (nonatomic) BOOL bFilterProcessYUV;
- (void)AdjustPrevParam;
- (void)Release;
- (id)Buffer2Texture:source:;
- (id)ComputeCodecFeature:;
- (float)ComputeFps:;
- (void)FlattenStruct:;
- (id)GLCM;
- (void)GetCodecFeature:feature:;
- (void)GetDefaultSettings;
- (id)Group;
- (void)InitVariables;
- (void)ParseResolution:height:;
- (void)ResetCodecFeature;
- (void)ResetVideoFeature;
- (id)SharpenFrameRGBALastBuffer:currBuffer:;
- (void)adjustVideoSize;
- (BOOL)Buffer2Texture_Prefilter:lastFrame:;
- (id)ComputeAverageVideoFeature:;
- (void)ComputeCodecParam:;
- (id)ComputeNearestVideoFeature:;
- (float)GetCachedBitrate;
- (id)GetFinalParam;
- (void)GetVideoFeature:buffers:;
- (id)InitCodecParm:;
- (id)Initwithparm:withError:;
- (id)InternalPredictCodecParam:;
- (BOOL)NeedAdjustFirstFrameRate;
- (void)ParseSettingsFromString:;
- (void)ResetBitrateVector;
- (void)ResetSceneCut;
- (id)Scene;
- (id)SharpenFrameYUVLastBuffer:currBuffer:;
- (id)TRANS;
- (id)Transfrom:source:;
- (id)UpdateInternalStatics:unboundBitrate:frameid:;
- (BOOL)bFilterCPU;
- (BOOL)bFilterProcessYUV;
- (id)createTexWithWidth:andHeight:withPixelFormat:;
- (id)createTexWithWidth:andHeight:withPixelFormat:storageMode:;
- (float)get_average_runingtime:block:;
- (BOOL)isResolutionSupport;
- (void)setBFilterCPU:;
- (void)setBFilterProcessYUV:;
- (void)setGLCM:;
- (void)setSharpenFilter:;
- (void)setTRANS:;
- (id)sharpenFilter;
- (void)setScene:;
- (id)context;
- (void)setDevice:;
- (void)setGroup:;
- (void).cxx_destruct;
- (void)setContext:;
- (id).cxx_construct;
- (id)device;
@end
