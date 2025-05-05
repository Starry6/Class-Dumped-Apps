@interface ICUserVerificationContext : NSObject
@property (nonatomic) ACAccount ACAccount;
@property (nonatomic) ACAccountStore ACAccountStore;
@property (nonatomic) ICUserIdentityProperties identityProperties;
@property (nonatomic) ICUserIdentityStore identityStore;
@property (nonatomic) q verificationStyle;
@property (nonatomic) q interactionLevel;
@property (nonatomic) NSString debugReason;
- (id)identityStore;
- (id)identityProperties;
- (void)setIdentityProperties:;
- (void).cxx_destruct;
- (long long)interactionLevel;
- (id)copyWithZone:;
- (id)debugReason;
- (void)setDebugReason:;
- (void)setIdentityStore:;
- (void)setInteractionLevel:;
- (id)ACAccount;
- (void)setACAccount:;
- (id)ACAccountStore;
- (void)setACAccountStore:;
- (long long)verificationStyle;
- (void)setVerificationStyle:;
+ (id)contextWithACAccount:accountStore:;
@end
