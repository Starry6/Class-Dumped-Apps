@interface AWELuckyCatDoneSocialTaskResponseModel : AWELiteBaseApiModel
@property (nonatomic) NSString taskKey;
@property (nonatomic) q taskID;
@property (nonatomic) q rewardAmount;
@property (nonatomic) q totalCount;
@property (nonatomic) q currentCount;
- (long long)rewardAmount;
- (void)setRewardAmount:;
- (id)taskKey;
- (void)setTaskKey:;
- (long long)currentCount;
- (long long)totalCount;
- (void).cxx_destruct;
- (void)setTaskID:;
- (long long)taskID;
- (void)setCurrentCount:;
- (void)setTotalCount:;
+ (id)JSONKeyPathsByPropertyKey;
@end
