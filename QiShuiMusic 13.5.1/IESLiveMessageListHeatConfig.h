@interface IESLiveMessageListHeatConfig : NSObject
@property (nonatomic) q userCountHotThreshold;
@property (nonatomic) q userCountColdThreshold;
@property (nonatomic) q receivedCommentCountDuration;
@property (nonatomic) q judgeRangeCount;
@property (nonatomic) q receivedCommentHotThreshold;
@property (nonatomic) q receivedCommentColdThreshold;
@property (nonatomic) q switchHeatNeedCount;
- (long long)judgeRangeCount;
- (void)setReceivedCommentHotThreshold:;
- (long long)receivedCommentColdThreshold;
- (long long)receivedCommentCountDuration;
- (long long)receivedCommentHotThreshold;
- (void)setJudgeRangeCount:;
- (void)setReceivedCommentColdThreshold:;
- (void)setReceivedCommentCountDuration:;
- (void)setSwitchHeatNeedCount:;
- (void)setUserCountColdThreshold:;
- (void)setUserCountHotThreshold:;
- (long long)switchHeatNeedCount;
- (long long)userCountColdThreshold;
- (long long)userCountHotThreshold;
- (id)initWithAnchor:;
@end
