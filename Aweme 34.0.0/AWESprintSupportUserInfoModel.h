@interface AWESprintSupportUserInfoModel : AWEBaseApiModel
@property (nonatomic) NSArray followersList;
@property (nonatomic) q sprintNumber;
- (id)followersList;
- (void)setFollowersList:;
- (long long)sprintNumber;
- (void)setSprintNumber:;
- (void).cxx_destruct;
- (id)initWithDict:;
+ (id)followersListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
