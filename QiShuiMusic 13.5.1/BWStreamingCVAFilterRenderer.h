@interface BWStreamingCVAFilterRenderer : NSObject
@property (nonatomic) BOOL studioAndContourRenderingEnabled;
@property (nonatomic) BOOL stageRenderingEnabled;
@property (nonatomic) float simulatedAperture;
@property (nonatomic) float portraitLightingEffectStrength;
@property (nonatomic) NSString displayName;
@property (nonatomic) s type;
@property (nonatomic) BOOL supportsAnimation;
@property (nonatomic) BOOL adjustsMetadata;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)setPortraitLightingEffectStrength:;
- (int)prepareForRenderingWithParameters:inputVideoFormat:inputDepthFormat:;
- (void)renderUsingParameters:inputPixelBuffer:inputSampleBuffer:originalPixelBuffer:processedPixelBuffer:completionHandler:;
- (float)simulatedAperture;
- (id)displayName;
- (BOOL)supportsAnimation;
- (void)setSimulatedAperture:;
- (short)type;
- (BOOL)stageRenderingEnabled;
- (BOOL)studioAndContourRenderingEnabled;
- (void)adjustMetadataOfSampleBuffer:;
- (BOOL)adjustsMetadata;
- (float)portraitLightingEffectStrength;
- (id)initWithCaptureDevice:studioAndContourRenderingEnabled:stageRenderingEnabled:depthDataSource:foregroundBlurEnabled:;
@end
