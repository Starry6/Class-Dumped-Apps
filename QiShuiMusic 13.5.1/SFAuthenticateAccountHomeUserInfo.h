@interface SFAuthenticateAccountHomeUserInfo : NSObject
@property (nonatomic) NSUUID homeUniqueIdentifier;
@property (nonatomic) NSUUID userUniqueIdentifier;
- (id)userUniqueIdentifier;
- (void).cxx_destruct;
- (id)homeUniqueIdentifier;
- (id)initWithHomeUUID:userUUID:;
@end
