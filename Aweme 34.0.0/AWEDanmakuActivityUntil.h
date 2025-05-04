@interface AWEDanmakuActivityUntil : NSObject
+ (BOOL)supportDanmakuActivityWithModel:activityType:;
+ (void)trackDanmakuPendantUseURL:activityID:;
+ (id)danmakuPendantActivityConfigWithID:;
+ (id)danmakuEggActivityConfigWithID:;
+ (id)localResourceVersion;
+ (id)pendantURLRecords;
+ (int)getRandomNumber:to:;
+ (BOOL)isLocalGeckoResourceLastest;
+ (void)loadDanmakuActivityGeckoResource;
+ (BOOL)danmakuActivityResourceExist;
+ (id)randDomPick:weights:;
+ (BOOL)canMatchPatternWithContent:effectForAll:matchList:includeList:;
+ (id)pickRandomPendantMaterialWithModel:;
+ (void)trackActivityMatchedDanmakuPost:awemeModel:activityID:addPendantSuccess:;
+ (id)pickRandomEggMaterialWithModel:;
+ (void)trackDanmakuEggShowSuccess:msg:;
+ (id)fetchDanmakuActivityConfigUrl;
+ (id)pendantActivityModels;
+ (id)eggActivityModels;
+ (void)trackDanmakuGeckoResourceResultIfNeed;
+ (void)loadDanmakuActivityGeckoResourceAfterLaunch;
+ (BOOL)shouldUpdateDanmakuActivityResource;
+ (id)pendantMaterialWithPendantID:materialID:;
+ (id)danmakuMaterialPathWithMaterialName:channelName:;
+ (void)configActivityForNewPublishDanmaku:awemeModel:needShowEgg:;
+ (void)fetchDanmakuActivityConfigIfNeeded;
@end
