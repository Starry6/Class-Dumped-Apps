@interface AWERecommendInsertUsersModel : AWEBaseApiModel
@property (nonatomic) NSArray users;
@property (nonatomic) NSNumber offset;
- (void)setOffset:;
- (id)users;
- (id)offset;
- (void).cxx_destruct;
- (void)setUsers:;
+ (id)usersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
