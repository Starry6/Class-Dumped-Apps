@interface AWELeftSideBarBannerExitManager : NSObject
@property (nonatomic) MMKV mmKvStorage;
@property (nonatomic) AWELeftSideBarUserBannerExitInfo userBannerExitInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (void)p_createBannerExitInfoIfNeededWithBusinessID:endTime:;
- (void)p_saveUserExitInfo;
- (id)p_bannerExitInfoWithBusinessID:;
- (id)mmKvStorage;
- (id)userBannerExitInfo;
- (void)p_loadMMKVStorage;
- (void)p_loadCurrentUserExitInfo;
- (void)p_filterExitInfoInValidPeriod;
- (void)setMmKvStorage:;
- (id)p_currentUserID;
- (id)p_userBannerExitInfoKeyWithUserID:;
- (void)setUserBannerExitInfo:;
- (double)p_currentServerTime;
- (void)bannerCellDidReceiveDataWithBusinessID:endTime:;
- (void)bannerCellDidShowWithBusinessID:;
- (void)bannerCellDidClickCloseWithBusinessID:;
- (void)bannerCellDidClickWithBusinessID:;
- (unsigned long long)shouldExitWithBusinessID:showCountThreshold:;
- (void)clearCacheData;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
