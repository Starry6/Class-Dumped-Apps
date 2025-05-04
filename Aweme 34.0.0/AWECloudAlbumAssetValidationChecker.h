@interface AWECloudAlbumAssetValidationChecker : NSObject
+ (BOOL)validNewClipsAssetModelForVideo:;
+ (id)checkVideoWithWidth:height:duration:;
+ (id)checkPhotoWithWidth:height:;
+ (BOOL)exceedMaxDurationForAIVideoClip:;
+ (BOOL)validResolutionAssetModelForVideoWidth:height:;
+ (id)checkAssetValidation:;
@end
