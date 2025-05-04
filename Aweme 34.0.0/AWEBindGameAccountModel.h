@interface AWEBindGameAccountModel : AWEBaseApiModel
@property (nonatomic) NSString gameId;
@property (nonatomic) NSString gameName;
@property (nonatomic) NSString gameUserId;
@property (nonatomic) NSString roleId;
@property (nonatomic) NSString roleName;
- (id)gameName;
- (void)setGameName:;
- (void)setGameId:;
- (void)setRoleName:;
- (id)gameId;
- (id)gameUserId;
- (void)setGameUserId:;
- (void).cxx_destruct;
- (id)roleId;
- (void)setRoleId:;
- (id)roleName;
+ (id)JSONKeyPathsByPropertyKey;
@end
