@interface CIRAWFilterImpl : CIFilter
@property (nonatomic) NSDictionary rawDictionary;
@property (nonatomic) NSDictionary rawReconstructionDefaultsDictionary;
@property (nonatomic) NSNumber sushiMode;
@property (nonatomic) NSInteger rawMajorVersion;
@property (nonatomic) NSArray filters;
@property (nonatomic) NSInteger subsampling;
@property (nonatomic) {CGSize=dd} nativeSize;
@property (nonatomic) BOOL isRawSource;
- (void)setDefaults;
- (id)filters;
- (id)init;
- (void)dealloc;
- (id)inputBias;
- (id)outputKeys;
- (id)nativeSize;
- (void)setInputBias:;
- (id)inputImage;
- (id)properties;
- (void)setInputImage:;
- (void)setInputEV:;
- (id)copyWithZone:;
- (id)outputImage;
- (id)rawDictionary;
- (void)setInputDraftMode:;
- (id)supportedDecoderVersions;
- (BOOL)isRawSource;
- (id)inputNeutralChromaticityX;
- (id)inputNeutralChromaticityY;
- (id)inputNeutralTemperature;
- (id)inputNeutralTint;
- (id)inputNeutralLocation;
- (id)inputBaselineExposure;
- (id)inputDisableGamutMap;
- (id)inputHueMagMR;
- (id)inputHueMagRY;
- (id)inputHueMagYG;
- (id)inputHueMagGC;
- (id)inputHueMagCB;
- (id)inputHueMagBM;
- (id)inputLinearSpaceFilter;
- (id)initWithCVPixelBuffer:properties:options:;
- (id)initWithImageSource:options:;
- (id)sushiMode;
- (id)rawReconstructionDefaultsDictionary;
- (int)rawMajorVersion;
- (int)subsampling;
- (void)invalidateFilters;
- (void)invalidateInputImage;
- (id)rawOptions;
- (id)rawOptionsWithSubsampling:;
- (void)setTempTintAtPoint:;
- (id)getScaleTransform:;
- (id)getOrientationTransform:;
- (id)transformedImageIgnoringOrientation:;
- (id)RAWFiltersValueForKeyPath:;
- (id)defaultImageOrientation;
- (void)setInputNeutralLocation:;
- (void)setInputScaleFactor:;
- (void)setInputEnableSharpening:;
- (void)setInputEnableNoiseTracking:;
- (void)setInputNoiseReductionAmount:;
- (void)setInputEnableVendorLensCorrection:;
- (void)setInputLuminanceNoiseReductionAmount:;
- (void)setInputColorNoiseReductionAmount:;
- (void)setInputNoiseReductionSharpnessAmount:;
- (void)setInputNoiseReductionContrastAmount:;
- (void)setInputNoiseReductionDetailAmount:;
- (void)setInputMoireAmount:;
- (void)setInputBoost:;
- (void)setInputDecoderVersion:;
- (void)setInputImageOrientation:;
- (void)setInputIgnoreOrientation:;
- (void)setInputReturnDemosaiced:;
- (id)defaultInputReturnDemosaiced;
- (void)setInputEnableEDRMode:;
- (id)defaultInputLocalToneMapAmount;
- (void)setInputLocalToneMapAmount:;
- (id)defaultInputLuminanceNoiseReductionAmount;
- (id)defaultInputColorNoiseReductionAmount;
- (id)defaultInputNoiseReductionContrastAmount;
- (id)defaultInputNoiseReductionDetailAmount;
- (id)defaultInputNoiseReductionSharpnessAmount;
- (id)defaultInputMoireAmount;
- (id)defaultInputEnableVendorLensCorrection;
- (id)defaultDecoderVersion;
- (id)defaultInputEnableEDRMode;
- (id)supportedSushiModes;
- (id)defaultInputBiasAmount;
- (void)setInputBaselineExposure:;
- (id)defaultInputBaselineExposureAmount;
- (void)setInputHueMagMR:;
- (id)defaultInputHueMagMRAmount;
- (void)setInputHueMagRY:;
- (id)defaultInputHueMagRYAmount;
- (void)setInputHueMagYG:;
- (id)defaultInputHueMagYGAmount;
- (void)setInputHueMagGC:;
- (id)defaultInputHueMagGCAmount;
- (void)setInputHueMagCB:;
- (id)defaultInputHueMagCBAmount;
- (void)setInputHueMagBM:;
- (id)defaultInputHueMagBMAmount;
- (void)setInputDisableGamutMap:;
- (void)setInputLinearSpaceFilter:;
- (void)setInputBoostShadowAmount:;
- (id)defaultBoostShadowAmount;
- (id)activeKeys;
- (id)outputNativeSize;
- (void)updateTemperatureAndTint;
- (void)updateChomaticityXAndY;
- (id)defaultNeutralTemperature;
- (void)setInputNeutralTemperature:;
- (id)defaultNeutralTint;
- (void)setInputNeutralTint:;
- (id)defaultNeutralChromaticityX;
- (void)setInputNeutralChromaticityX:;
- (id)defaultNeutralChromaticityY;
- (void)setInputNeutralChromaticityY:;
- (void)setInputRequestedSushiMode:;
- (id)whitePoint;
- (id)whitePointArray;
- (void)getWhitePointVectorsR:g:b:;
+ (BOOL)automaticallyNotifiesObserversForKey:;
+ (id)customAttributes;
+ (id)keyPathsForValuesAffectingValueForKey:;
+ (id)filterWithImageURL:options:;
+ (id)filterWithImageData:options:;
+ (id)filterWithCVPixelBuffer:properties:options:;
+ (id)supportedRawCameraModels;
+ (id)applyMatrix:toCIImage:;
+ (id)optionKeys;
+ (id)matteOptionNameFromOptions:;
+ (void)convertNeutralX:y:toTemperature:tint:;
+ (void)convertNeutralTemperature:tint:toX:y:;
@end
