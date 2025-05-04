@interface AWELuckyCatReadTaskSocialCommentIncentiveTaskInfo : MTLModel
@property (nonatomic) NSString taskKey;
@property (nonatomic) q rewardAmount;
@property (nonatomic) q moreRewardAmount;
@property (nonatomic) BOOL hasNext;
@property (nonatomic) AWELuckyCatReadTaskSocialCommentIncentiveTaskExtraInfo showGuideExtra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)rewardAmount;
- (void)setRewardAmount:;
- (id)taskKey;
- (void)setTaskKey:;
- (void)setHasNext:;
- (long long)moreRewardAmount;
- (void)setMoreRewardAmount:;
- (id)showGuideExtra;
- (void)setShowGuideExtra:;
- (void).cxx_destruct;
- (BOOL)hasNext;
+ (id)showGuideExtraJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
