@interface AWEMixVideoDetailService : NSObject
@property (nonatomic) NSHashTable hashTable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)hashTable;
- (void)setHashTable:;
- (void).cxx_destruct;
+ (void)requestLoginBeforeMixCollectWithCompleteBlcok:;
+ (void)requestMixCollectWithMixId:action:completeBlock:;
+ (void)mixWatchedReportWithMixID:itemID:cursor:completeBlock:;
+ (void)saveMixID:playCurrentEpisode:;
+ (id)mixExtraParamsForAwemeStatsWithAweme:;
+ (void)trackCompilationMonitorWithMixVideoModel:error:enterFrom:;
+ (void)requestMixVideoDetailInfo:completeBlock:;
+ (void)updateVideo:toMix:withType:completeBlock:;
+ (void)requestMixVideoDetailList:cursor:count:pullDown:skipLocalCache:reqFrom:completeBlock:;
+ (void)trackMixAwemeRequestMonitorWithModel:error:mixID:;
+ (void)requestMixVideoDetailInfo:skipLocalCache:reqFrom:completeBlock:;
+ (id)lastReadEpisodeForMixID:;
+ (void)requestBatchMixCollectWithMixId:batchMixIds:action:completeBlock:;
+ (void)registerObserver:;
+ (id)shareInstance;
@end
