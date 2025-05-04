@interface AWEFollowUserUpdateUserModel : AWEBaseApiModel
@property (nonatomic) AWEUserModel userModel;
@property (nonatomic) q unwatchedCount;
@property (nonatomic) double latestItemPublishTime;
- (long long)unwatchedCount;
- (void)setUnwatchedCount:;
- (double)latestItemPublishTime;
- (void)setLatestItemPublishTime:;
- (void)setUserModel:;
- (void).cxx_destruct;
- (id)userModel;
+ (id)userModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
