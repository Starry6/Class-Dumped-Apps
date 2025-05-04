@interface AWEIMLiveGroupDataModel : AWEBaseApiModel
@property (nonatomic) q livePeopleCount;
@property (nonatomic) NSArray groupUsers;
- (id)groupUsers;
- (void)setGroupUsers:;
- (long long)livePeopleCount;
- (void)setLivePeopleCount:;
- (void).cxx_destruct;
+ (id)groupUsersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
