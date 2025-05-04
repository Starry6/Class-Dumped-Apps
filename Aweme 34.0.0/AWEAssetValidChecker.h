@interface AWEAssetValidChecker : NSObject
+ (long long)videoSelectableMinSeconds;
+ (long long)videoSelectableMaxSeconds;
+ (double)minVideoRatio;
+ (double)maxVideoRatio;
+ (long long)minAssetsSelectionCount;
+ (long long)maxAssetsSelectionCount;
+ (double)minPhotoRatio;
+ (double)maxPhotoRatio;
+ (BOOL)validAssetModelForPhoto:;
+ (BOOL)validNewClipsAssetModelForVideo:;
+ (BOOL)validResolutionAssetModelForVideo:;
+ (BOOL)validAIClipsAssetModelForVideo:;
+ (long long)videoResolution;
@end
