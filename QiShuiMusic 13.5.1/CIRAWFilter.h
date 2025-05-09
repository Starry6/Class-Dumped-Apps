@interface CIRAWFilter : CIFilter
@property (nonatomic) CIRAWFilterImpl filterImplementation;
@property (nonatomic) NSURL imageURL;
@property (nonatomic) NSData imageData;
@property (nonatomic) NSString imageDataHint;
@property (nonatomic) NSArray supportedDecoderVersions;
@property (nonatomic) {CGSize=dd} nativeSize;
@property (nonatomic) NSDictionary properties;
@property (nonatomic) I orientation;
@property (nonatomic) BOOL draftModeEnabled;
@property (nonatomic) NSString decoderVersion;
@property (nonatomic) float scaleFactor;
@property (nonatomic) float exposure;
@property (nonatomic) float baselineExposure;
@property (nonatomic) float shadowBias;
@property (nonatomic) float boostAmount;
@property (nonatomic) float boostShadowAmount;
@property (nonatomic) BOOL gamutMappingEnabled;
@property (nonatomic) BOOL lensCorrectionSupported;
@property (nonatomic) BOOL lensCorrectionEnabled;
@property (nonatomic) BOOL luminanceNoiseReductionSupported;
@property (nonatomic) float luminanceNoiseReductionAmount;
@property (nonatomic) BOOL colorNoiseReductionSupported;
@property (nonatomic) float colorNoiseReductionAmount;
@property (nonatomic) BOOL sharpnessSupported;
@property (nonatomic) float sharpnessAmount;
@property (nonatomic) BOOL contrastSupported;
@property (nonatomic) float contrastAmount;
@property (nonatomic) BOOL detailSupported;
@property (nonatomic) float detailAmount;
@property (nonatomic) BOOL moireReductionSupported;
@property (nonatomic) float moireReductionAmount;
@property (nonatomic) BOOL localToneMapSupported;
@property (nonatomic) float localToneMapAmount;
@property (nonatomic) float extendedDynamicRangeAmount;
@property (nonatomic) {CGPoint=dd} neutralChromaticity;
@property (nonatomic) {CGPoint=dd} neutralLocation;
@property (nonatomic) float neutralTemperature;
@property (nonatomic) float neutralTint;
@property (nonatomic) CIFilter linearSpaceFilter;
@property (nonatomic) CIImage previewImage;
@property (nonatomic) CIImage portraitEffectsMatte;
@property (nonatomic) CIImage semanticSegmentationSkinMatte;
@property (nonatomic) CIImage semanticSegmentationHairMatte;
@property (nonatomic) CIImage semanticSegmentationGlassesMatte;
@property (nonatomic) CIImage semanticSegmentationSkyMatte;
@property (nonatomic) CIImage semanticSegmentationTeethMatte;
- (void)dealloc;
- (float)scaleFactor;
- (id)imageData;
- (void)setScaleFactor:;
- (unsigned int)orientation;
- (id)initWithImageURL:;
- (id)portraitEffectsMatte;
- (id)nativeSize;
- (id)properties;
- (void)setOrientation:;
- (id)imageURL;
- (id)outputImage;
- (id)previewImage;
- (BOOL)isDraftModeEnabled;
- (void)setDraftModeEnabled:;
- (id)supportedDecoderVersions;
- (id)decoderVersion;
- (void)setDecoderVersion:;
- (float)exposure;
- (void)setExposure:;
- (float)shadowBias;
- (void)setShadowBias:;
- (float)baselineExposure;
- (void)setBaselineExposure:;
- (float)boostAmount;
- (void)setBoostAmount:;
- (float)boostShadowAmount;
- (void)setBoostShadowAmount:;
- (BOOL)isGamutMappingEnabled;
- (void)setGamutMappingEnabled:;
- (BOOL)isLensCorrectionSupported;
- (BOOL)isLensCorrectionEnabled;
- (void)setLensCorrectionEnabled:;
- (BOOL)isLuminanceNoiseReductionSupported;
- (float)luminanceNoiseReductionAmount;
- (void)setLuminanceNoiseReductionAmount:;
- (BOOL)isColorNoiseReductionSupported;
- (float)colorNoiseReductionAmount;
- (void)setColorNoiseReductionAmount:;
- (BOOL)isSharpnessSupported;
- (float)sharpnessAmount;
- (void)setSharpnessAmount:;
- (BOOL)isContrastSupported;
- (float)contrastAmount;
- (void)setContrastAmount:;
- (BOOL)isDetailSupported;
- (float)detailAmount;
- (void)setDetailAmount:;
- (BOOL)isMoireReductionSupported;
- (float)moireReductionAmount;
- (void)setMoireReductionAmount:;
- (BOOL)isLocalToneMapSupported;
- (float)localToneMapAmount;
- (void)setLocalToneMapAmount:;
- (float)extendedDynamicRangeAmount;
- (void)setExtendedDynamicRangeAmount:;
- (id)neutralChromaticity;
- (void)setNeutralChromaticity:;
- (id)neutralLocation;
- (void)setNeutralLocation:;
- (float)neutralTemperature;
- (void)setNeutralTemperature:;
- (float)neutralTint;
- (void)setNeutralTint:;
- (id)linearSpaceFilter;
- (void)setLinearSpaceFilter:;
- (id)auxImageWithKey:;
- (id)semanticSegmentationSkinMatte;
- (id)semanticSegmentationHairMatte;
- (id)semanticSegmentationGlassesMatte;
- (id)semanticSegmentationSkyMatte;
- (id)semanticSegmentationTeethMatte;
- (id)initWithImageData:identifierHint:;
- (id)initWithCVPixelBuffer:properties:;
- (id)filterImplementation;
- (void)setFilterImplementation:;
- (id)imageDataHint;
+ (id)supportedCameraModels;
+ (id)filterWithImageURL:;
+ (id)filterWithImageData:identifierHint:;
+ (id)filterWithCVPixelBuffer:properties:;
@end
