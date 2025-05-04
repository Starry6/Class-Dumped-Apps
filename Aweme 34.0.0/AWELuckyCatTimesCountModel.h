@interface AWELuckyCatTimesCountModel : AWEBaseApiModel
@property (nonatomic) NSString taskID;
@property (nonatomic) q taskLimit;
@property (nonatomic) q rewardNum;
- (long long)rewardNum;
- (void)setRewardNum:;
- (long long)taskLimit;
- (void)setTaskLimit:;
- (void).cxx_destruct;
- (void)setTaskID:;
- (id)taskID;
+ (id)JSONKeyPathsByPropertyKey;
@end
