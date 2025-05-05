@interface CSJRewardedVideoAdReporter : NSObject
+ (void)reportAppLogEvent:material:;
+ (void)reportAppLogEvent:material:adExtraDic:;
+ (void)reportRewardArrivedBeginWithMaterial:rewardType:;
+ (void)reportRewardArrivedResult:material:rewardType:verify:error:;
+ (void)reportStatsEvent:material:eventExtra:;
@end
