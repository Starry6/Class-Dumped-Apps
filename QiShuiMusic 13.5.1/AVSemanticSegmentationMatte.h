@interface AVSemanticSegmentationMatte : NSObject
@property (nonatomic) NSString matteType;
@property (nonatomic) I pixelFormatType;
@property (nonatomic) ^{__CVBuffer=} mattingImage;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)matteType;
- (id)mattingImage;
- (id)dictionaryRepresentationForAuxiliaryDataType:;
- (unsigned int)pixelFormatType;
- (id)semanticSegmentationMatteByApplyingExifOrientation:;
- (id)semanticSegmentationMatteByReplacingSemanticSegmentationMatteWithPixelBuffer:error:;
- (short)versionMajor;
- (short)versionMinor;
- (id)initWithType:pixelBuffer:semanticSegmentationMatteMetadataDictionary:;
- (id)initWithType:pixelBuffer:auxiliaryMetadata:;
- (id)copyAuxiliaryMetadata;
- (id)auxiliaryImageType;
+ (id)semanticSegmentationMatteFromImageSourceAuxiliaryDataType:dictionaryRepresentation:error:;
+ (id)_allSupportedSemanticSegmentationMatteTypes;
+ (id)_allSupportedSemanticSegmentationMattePixelFormatTypes;
@end
