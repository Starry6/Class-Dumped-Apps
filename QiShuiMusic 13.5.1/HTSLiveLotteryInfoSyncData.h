@interface HTSLiveLotteryInfoSyncData : IESLivePBBaseMessage
@property (nonatomic) q lotteryId;
@property (nonatomic) q luckyCount;
@property (nonatomic) q candidateTotalCount;
@property (nonatomic) q lastCandidateTotalCountSurgeTimestamp;
+ (id)descriptor;
@end
