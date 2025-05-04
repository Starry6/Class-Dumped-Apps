@interface AWEOfflineVideoPopupManager : NSObject
+ (void)canDownloadVideoWithAwemeModel:completion:;
+ (void)canDownloadVideoWithAwemeModels:completion:;
+ (void)showCacheSuccessBottomNotification:;
+ (void)showCacheSuccessToast:;
+ (void)deleteCacheVideosWithTitle:Completion:;
+ (BOOL)shouldShowLimitNetworkTrafficPopupWithAwemeModels:;
+ (id)checkBoxSelectCacheKey;
+ (void)showBottomNotification;
@end
