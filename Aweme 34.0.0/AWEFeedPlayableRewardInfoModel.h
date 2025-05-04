@interface AWEFeedPlayableRewardInfoModel : MTLModel
@property (nonatomic) Q rewardType;
@property (nonatomic) AWEFeedPlayableRewardBeforeModel rewardBefore;
@property (nonatomic) AWEFeedPlayableRewardAfterModel rewardAfter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setRewardType:;
- (unsigned long long)rewardType;
- (id)rewardAfter;
- (id)rewardBefore;
- (void)setRewardBefore:;
- (void)setRewardAfter:;
- (void).cxx_destruct;
+ (id)rewardBeforeJSONTransformer;
+ (id)rewardAfterJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
