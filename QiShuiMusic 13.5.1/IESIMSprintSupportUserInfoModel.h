@interface IESIMSprintSupportUserInfoModel : IESIMBaseApiModel
@property (nonatomic) NSArray followersList;
@property (nonatomic) q sprintNumber;
- (id)followersList;
- (void)setFollowersList:;
- (void)setSprintNumber:;
- (long long)sprintNumber;
- (id)initWithDict:;
- (void).cxx_destruct;
+ (id)followersListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
