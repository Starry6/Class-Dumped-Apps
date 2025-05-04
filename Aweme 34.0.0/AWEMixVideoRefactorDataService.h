@interface AWEMixVideoRefactorDataService : NSObject
+ (void)requestMixVideoDetailInfo:skipLocalCache:completeBlock:;
+ (void)requestMixTabWithUserID:cursor:mixCount:awemeCount:currMixID:startEpisode:completeBlock:;
+ (void)requestRecommendMixTabWithCursor:mixCount:authorID:awemeCount:curMixID:curItemID:scene:completeBlock:;
+ (id)shareInstance;
@end
