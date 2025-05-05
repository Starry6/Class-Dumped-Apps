@interface ICDocCamImageFilters : NSObject
+ (id)filteredImage:imageFilterType:;
+ (id)filteredImage:orientation:imageFilterType:;
+ (id)imageWithRGBColorspaceFromImage:;
+ (id)perspectiveCorrectedImageFromImage:normalizedImageQuad:;
+ (id)sharedCoreImageContext;
+ (id)imageFilterNames;
+ (id)nonLocalizedImageFilterNames;
+ (short)imageFilterTypeFromName:;
+ (short)imageFilterTypeFromNonLocalizedName:;
+ (id)localizedImageFilterNameForName:;
+ (id)localizedImageFilterNameForType:;
+ (id)nonLocalizedImageFilterNameForType:;
+ (id)bradleyAdaptiveThreshold:;
+ (id)convertImageToGrayScale:;
+ (id)whiteboardFilter:orientation:;
+ (id)whiteboardAndSaturation:orientation:;
+ (id)grayscale:orientation:;
+ (id)bradleyAdaptiveThreshold:orientation:;
+ (id)bradleyAdaptiveThresholdWithBlur:orientation:;
+ (id)colorDocument:orientation:;
+ (id)grayscaleDocument:orientation:;
+ (id)perspectiveCorrectedCIImageFromCIImage:imageQuad:;
+ (id)perspectiveCorrectedImageFromImage:imageQuad:;
@end
