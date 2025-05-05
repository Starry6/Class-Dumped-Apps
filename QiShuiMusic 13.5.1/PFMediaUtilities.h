@interface PFMediaUtilities : NSObject
+ (BOOL)embeddedJPEGSuitableForDerivativesInRawImageProperties:enforcePixelCountLimits:;
+ (id)formattedCameraModelFromCameraModel:cameraMake:;
+ (id)imagePropertiesFromImageSource:;
+ (long long)rawSourceMaximumPixelCountForBackgroundProcessing;
+ (BOOL)typeRequiresRasterizationDPI:;
+ (id)mainVideoTrackForAsset:;
+ (BOOL)isValidAVFileForURL:;
+ (id)imagePropertiesFromImageSource:atIndex:;
+ (long long)rawSourceMaximumPixelCountForInteractiveEditing;
+ (id)maximumImageSizeFromProperties:;
+ (BOOL)isValidImageFileForURL:;
+ (id)stringFromFourCharCode:;
+ (BOOL)canGenerateImageDerivativesFromType:;
+ (BOOL)embeddedJPEGSuitableForDerivativesInImageOfType:url:imageProperties:;
+ (long long)defaultRasterizationDPI;
+ (BOOL)canLoadAssetAsRawForInteractiveEditingWithImageProperties:;
+ (long long)devicePerformanceMemoryClass;
@end
