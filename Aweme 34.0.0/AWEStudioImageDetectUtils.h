@interface AWEStudioImageDetectUtils : NSObject
+ (id)exportImagePathsWithAssets:;
+ (id)imagePathsWithImages:;
+ (void)fetchEffectPathWithEffectID:block:;
+ (id)cache_effectPathWithEffecID:;
+ (void)cache_setEffectPath:forEffectID:;
+ (id)cache_imagePathWithAssetModel:;
+ (void)cache_setImagePath:forAssetModel:;
+ (id)errorWithCode:userInfo:;
@end
