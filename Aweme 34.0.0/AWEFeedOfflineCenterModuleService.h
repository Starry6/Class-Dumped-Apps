@interface AWEFeedOfflineCenterModuleService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)offlineModeSavePlayedVideoItemID:;
+ (void)offlineModePlayedItemIDArrayReport;
+ (long long)offlineCacheSizeTotal;
+ (void)cleanOfflineModeCache;
+ (id)offlineCommentCacheManager;
+ (long long)getOfflineModeCacheVideoCount;
+ (BOOL)checkLeftSpaceEnough;
+ (void)setForyouFeedDataController:;
+ (BOOL)shouldBlockOfflineToast;
+ (void)configEnableOfflineMode:;
+ (BOOL)networkAlreadyFlag;
+ (void)configNetworkAlreadyFlag:;
+ (void)configHomepagePlayerStop:;
+ (void)checkVideoSafetyWithModel:index:;
+ (void)showOfflinePanelWithLoadMoreTimeOut;
@end
