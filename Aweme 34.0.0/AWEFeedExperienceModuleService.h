@interface AWEFeedExperienceModuleService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)checkLeftSpaceEnough;
- (void)setLastUseFeedCacheUserID:;
- (id)lastUseFeedCacheUserID;
- (void)setReleaseGoldenHouseVideos:;
- (id)releaseGoldenHouseVideos;
- (Class)preloaderWrapperClass;
- (BOOL)enableCacheFeedDowngradeSR;
- (id)getFeedCacheBsModelWith:;
- (id)identifierWithModel:forType:;
- (id)createIndividualPlayController;
- (void)individualPreparePlay:model:enableLoading:;
- (BOOL)individualPlay:;
- (void)individualPause:;
- (id)currentAwemeModelInFeedTableVC;
@end
