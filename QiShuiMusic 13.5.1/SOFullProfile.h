@interface SOFullProfile : SOProfile
@property (nonatomic) NSString extensionTeamIdentifier;
@property (nonatomic) NSDictionary extensionData;
- (id)copyProfile;
- (void)setExtensionData:;
- (id)extensionData;
- (id)extensionTeamIdentifier;
- (id)copyProfileForClient;
- (void)setExtensionTeamIdentifier:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)removeURLPrefix:;
- (id)initWithProfileData:;
- (id)description;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (long long)profileTypeWithString:;
+ (long long)screenLockedBehaviorWithString:;
+ (long long)authMethodWithString:;
@end
