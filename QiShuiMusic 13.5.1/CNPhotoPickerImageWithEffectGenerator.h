@interface CNPhotoPickerImageWithEffectGenerator : NSObject
+ (id)coreImageFilterNames;
+ (id)coreImageFilterDisplayNames;
+ (id)displayNameForFilterNamed:;
+ (void)imagesByApplyingEffectsToImageData:withScaleFactor:originalImageScale:cropRect:completion:;
+ (id)imageByApplyingEffect:withContext:toImageData:;
+ (id)imageByApplyingEffect:withContext:toImage:withSize:;
@end
