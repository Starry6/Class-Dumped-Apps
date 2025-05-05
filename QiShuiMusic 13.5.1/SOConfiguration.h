@interface SOConfiguration : NSObject
@property (nonatomic) NSArray profiles;
@property (nonatomic) BOOL empty;
- (id)profileForURL:responseCode:;
- (id)initWithProfiles:;
- (id)initWithCoder:;
- (BOOL)_matchHost:inCredentialProfile:;
- (BOOL)empty;
- (void)encodeWithCoder:;
- (id)_profileForURLWithStandardScheme:isCredential:;
- (long long)willHandleURL:responseCode:callerBundleIdentifier:profile:;
- (void).cxx_destruct;
- (id)profiles;
- (id)realms;
- (id)description;
- (BOOL)willHandleURL:responseCode:callerBundleIdentifier:;
- (id)_profileForURLWithHostScheme:;
- (id)_profileForURLWithSSOIDScheme:;
- (id)_profileForURLWithRealmScheme:;
+ (BOOL)supportsSecureCoding;
+ (id)stringWithHandleResult:;
@end
