@interface AWECoProduceUserModel : NSObject
@property (nonatomic) AWEUserModel user;
@property (nonatomic) q userRoleId;
@property (nonatomic) NSString userRoleName;
- (void)setUserRoleId:;
- (void)setUserRoleName:;
- (id)initWithUser:userRoleId:userRoleName:;
- (long long)userRoleId;
- (id)userRoleName;
- (id)user;
- (void)setUser:;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
@end
