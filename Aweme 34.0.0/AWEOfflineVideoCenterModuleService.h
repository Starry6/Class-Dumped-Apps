@interface AWEOfflineVideoCenterModuleService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)videoCenterCacheInit;
+ (BOOL)enableShowCacheVideoEntranceWithModel:;
+ (BOOL)enableShowCacheVideoEntrance;
+ (void)canDownloadVideoWithAwemeModel:completion:;
+ (void)canDownloadVideoWithAwemeModels:completion:;
+ (void)downloadVideoWithAwemeModel:enterFrom:;
+ (void)downloadVideoWithAwemeModels:enterFrom:;
+ (BOOL)hasUserDownloadedVideo;
+ (id)downloadVideoList;
+ (BOOL)hasCachedAwemeModel:;
+ (BOOL)hasDownloadedAwemeModel:;
+ (BOOL)isFromCacheWithAwemeModel:;
+ (BOOL)offlineCenterEnabled;
+ (long long)offlineCenterCanUseMaxStorageGB;
+ (void)showCacheSuccessBottomNotification:;
+ (void)showCacheSuccessToast:;
+ (long long)videoSizeMBWithAwemodels:;
+ (long long)availableStorageGB;
+ (BOOL)hasEnoughStorageWithModels:;
+ (id)downloadVideoListWithMixInfo:;
+ (BOOL)hasWatchedVideo:;
+ (void)setVideoWatched:watched:;
+ (void)setShouldHideFeedErrorPage:;
+ (Class)offlineDetailBottomBarClass;
+ (id)cacheVideoViewControllerConfig;
+ (id)cacheVideoViewControllerWithDataController:enterFrom:config:;
+ (BOOL)offlineModeInsertFeedEnable;
+ (BOOL)offlineModeWeakNetInsertFeedEnable;
+ (BOOL)offlineModeInsertToRecommendEnable;
+ (BOOL)offlineModeInsertToHideErrorPageEnable;
+ (BOOL)offlineModeWeakNetInsertTaskDelayInitEnable;
+ (BOOL)offlineCenterPersonalEnable;
+ (Class)offlineConfigUtils;
+ (Class)offlineSettings;
+ (void)realDownloadVideoWithAwemeModel:enterFrom:;
@end
