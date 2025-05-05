@interface AVPortraitEffectsMatte : NSObject
@property (nonatomic) I pixelFormatType;
@property (nonatomic) ^{__CVBuffer=} mattingImage;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)mattingImage;
- (id)dictionaryRepresentationForAuxiliaryDataType:;
- (unsigned int)pixelFormatType;
- (short)versionMajor;
- (short)versionMinor;
- (id)copyAuxiliaryMetadata;
- (id)auxiliaryImageType;
- (id)initWithPixelBuffer:auxiliaryMetadata:;
- (id)portraitEffectsMatteByApplyingExifOrientation:;
- (id)portraitEffectsMatteByReplacingPortraitEffectsMatteWithPixelBuffer:error:;
- (id)initWithPixelBuffer:portraitEffectsMatteMetadataDictionary:;
+ (id)portraitEffectsMatteFromDictionaryRepresentation:error:;
+ (id)_allSupportedPortraitEffectsMattePixelFormatTypes;
@end
