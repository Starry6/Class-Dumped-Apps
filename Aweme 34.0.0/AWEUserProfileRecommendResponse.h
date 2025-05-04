@interface AWEUserProfileRecommendResponse : AWEBaseApiModel
@property (nonatomic) NSArray userList;
@property (nonatomic) q relationType;
@property (nonatomic) NSNumber commonUserCount;
- (id)userList;
- (void)setUserList:;
- (void)setRelationType:;
- (id)commonUserCount;
- (void)setCommonUserCount:;
- (void).cxx_destruct;
- (long long)relationType;
+ (id)userListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
