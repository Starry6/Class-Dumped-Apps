@interface AVCapturePhoto : NSObject
@property (nonatomic) AVCapturePhotoInternal internal;
@property (nonatomic) {?=ii} dimensions;
@property (nonatomic) {?=qiIq} timestamp;
@property (nonatomic) BOOL rawPhoto;
@property (nonatomic) ^{__CVBuffer=} pixelBuffer;
@property (nonatomic) ^{__CVBuffer=} previewPixelBuffer;
@property (nonatomic) NSDictionary embeddedThumbnailPhotoFormat;
@property (nonatomic) AVDepthData depthData;
@property (nonatomic) AVPortraitEffectsMatte portraitEffectsMatte;
@property (nonatomic) NSDictionary metadata;
@property (nonatomic) AVCameraCalibrationData cameraCalibrationData;
@property (nonatomic) AVCaptureResolvedPhotoSettings resolvedSettings;
@property (nonatomic) q photoCount;
@property (nonatomic) NSString sourceDeviceType;
- (id)dimensions;
- (unsigned int)_orientation;
- (long long)lensStabilizationStatus;
- (BOOL)_isUncompressedYUVOrRGBPhoto;
- (void)dealloc;
- (BOOL)_isSushiRAWPhoto;
- (id)semanticSegmentationMatteForType:;
- (id)sourceDeviceType;
- (id)fileDataRepresentationWithCustomizer:;
- (id)processedFileType;
- (id)previewPixelBuffer;
- (id)resolvedSettings;
- (id)pixelBuffer;
- (id)metadata;
- (BOOL)_isProRAWPhoto;
- (id)embeddedThumbnailPhotoFormat;
- (long long)sequenceCount;
- (id)fileDataRepresentationWithReplacementMetadata:replacementEmbeddedThumbnailPhotoFormat:replacementEmbeddedThumbnailPixelBuffer:replacementDepthData:;
- (id)portraitEffectsMatte;
- (long long)photoCount;
- (id)CGImageRepresentation;
- (id)debugDescription;
- (unsigned int)actualPhotoProcessingFlags;
- (int)_maximumAppleProRAWBitDepth;
- (id)initWithTimestamp:photoSurface:photoSurfaceSize:processedFileType:previewPhotoSurface:embeddedThumbnailSourceSurface:metadata:depthDataSurface:depthMetadataDictionary:portraitEffectsMatteSurface:portraitEffectsMatteMetadataDictionary:hairSegmentationMatteSurface:hairSegmentationMatteMetadataDictionary:skinSegmentationMatteSurface:skinSegmentationMatteMetadataDictionary:teethSegmentationMatteSurface:teethSegmentationMatteMetadataDictionary:glassesSegmentationMatteSurface:glassesSegmentationMatteMetadataDictionary:captureRequest:bracketSettings:sequenceCount:photoCount:expectedPhotoProcessingFlags:sourceDeviceType:;
- (id)internal;
- (id)_defaultRawCompressionSettings;
- (id)bracketSettings;
- (id)depthData;
- (BOOL)isRawPhoto;
- (id)_fileDataRepresentationWithReplacementMetadata:replacementEmbeddedThumbnailPhotoFormat:replacementEmbeddedThumbnailPixelBuffer:replacementDepthData:replacementPortraitEffectsMatte:replacementHairSegmentationMatte:replacementSkinSegmentationMatte:replacementTeethSegmentationMatte:replacementGlassesSegmentationMatte:replacementRawCompressionSettings:exceptionReason:;
- (BOOL)_isCompressedPhoto;
- (id)timestamp;
- (unsigned int)photoProcessingFlags;
- (id)fileDataRepresentation;
- (id)description;
- (unsigned int)expectedPhotoProcessingFlags;
- (id)livePhotoMovieFileURL;
- (id)portraitMetadata;
- (id)cameraCalibrationData;
- (id)_embeddedThumbnailSourcePixelBuffer;
- (id)previewCGImageRepresentation;
- (id)privateClientMetadata;
+ (id)AVFileTypeFromFigCaptureStillImageSettingsFileType:codec:unresolvedSettings:;
@end
