@interface IXApplicationIdentity : MIAppIdentity
@property (nonatomic) NSString uniqueIdentifier;
@property (nonatomic) MIAppIdentity miAppIdentity;
@property (nonatomic) BOOL isPersonalPersonaPlaceholder;
- (id)uniqueIdentifier;
- (void)setIsPersonalPersonaPlaceholder:;
- (id)possibleSerializationsForPlistKey;
- (id)canonicalSerializationForPlistKey;
- (id)initWithBundleIdentifier:;
- (id)initWithBundleIdentifier:personaUniqueString:;
- (BOOL)isPersonalPersonaPlaceholder;
- (id)initWithCoder:;
- (id)miAppIdentity;
- (id)description;
- (id)initUsingPersonaFromCurrentThreadAndBundleIdentifier:;
- (id)copyWithZone:;
- (id)initWithPlistKeySerialization:;
+ (BOOL)supportsSecureCoding;
+ (id)identitiesForBundleIdentifiers:;
@end
