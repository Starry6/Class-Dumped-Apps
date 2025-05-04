@interface AWESlidesDraftAdapter : NSObject
+ (void)upgradeLivePhotoModelIfNeed:;
+ (void)setSubMediaTypeIfNeededWithPublishViewModel:;
+ (void)adaptSlidesDraftIfNeed:draft:completion:;
+ (void)copyFromAWERepoUploadInfomationModel:toACCRepoLivePhotoInfoInstanceModel:;
+ (void)degradeLivePhotoModelIfNeed:draft:completion:;
@end
