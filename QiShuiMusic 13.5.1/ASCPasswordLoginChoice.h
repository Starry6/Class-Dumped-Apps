@interface ASCPasswordLoginChoice : NSObject
@property (nonatomic) NSString username;
@property (nonatomic) NSString site;
@property (nonatomic) BOOL external;
@property (nonatomic) SFPasswordCredentialIdentity externalCredentialIdentity;
@property (nonatomic) NSString providerBundleIdentifier;
@property (nonatomic) Q loginChoiceKind;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)username;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)compare:;
- (void).cxx_destruct;
- (BOOL)isExternal;
- (BOOL)isEqual:;
- (id)site;
- (id)providerBundleIdentifier;
- (unsigned long long)loginChoiceKind;
- (id)externalCredentialIdentity;
- (id)initWithUsername:site:externalCredentialIdentity:;
+ (BOOL)supportsSecureCoding;
@end
