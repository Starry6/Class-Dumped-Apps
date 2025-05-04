@interface AWESocialFollowFriendsRewardDataModel : AWELiteBaseApiModel
@property (nonatomic) NSNumber amount;
@property (nonatomic) NSString toastInfo;
@property (nonatomic) q followNum;
@property (nonatomic) q gainedAmount;
@property (nonatomic) BOOL taskComplete;
- (id)toastInfo;
- (void)setToastInfo:;
- (long long)followNum;
- (void)setFollowNum:;
- (long long)gainedAmount;
- (void)setGainedAmount:;
- (BOOL)taskComplete;
- (void)setTaskComplete:;
- (void).cxx_destruct;
- (id)amount;
- (void)setAmount:;
+ (id)JSONKeyPathsByPropertyKey;
@end
