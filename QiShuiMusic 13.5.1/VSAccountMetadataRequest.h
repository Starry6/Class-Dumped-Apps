@interface VSAccountMetadataRequest : NSObject
@property (nonatomic) NSString channelIdentifier;
@property (nonatomic) NSArray supportedAccountProviderIdentifiers;
@property (nonatomic) NSArray featuredAccountProviderIdentifiers;
@property (nonatomic) NSString verificationToken;
@property (nonatomic) BOOL includeAccountProviderIdentifier;
@property (nonatomic) BOOL includeAuthenticationExpirationDate;
@property (nonatomic) NSString localizedVideoTitle;
@property (nonatomic) BOOL interruptionAllowed;
@property (nonatomic) BOOL forceAuthentication;
@property (nonatomic) NSArray attributeNames;
@property (nonatomic) NSArray supportedAuthenticationSchemes;
@property (nonatomic) NSString accountProviderAuthenticationToken;
@property (nonatomic) NSArray applicationAccountProviders;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)attributeNames;
- (id)channelIdentifier;
- (void)setChannelIdentifier:;
- (id)verificationToken;
- (void)setVerificationToken:;
- (id)applicationAccountProviders;
- (id)localizedVideoTitle;
- (id)accountProviderAuthenticationToken;
- (id)supportedAuthenticationSchemes;
- (void)setSupportedAuthenticationSchemes:;
- (void)setAttributeNames:;
- (void)setSupportedAccountProviderIdentifiers:;
- (void)setFeaturedAccountProviderIdentifiers:;
- (id)supportedAccountProviderIdentifiers;
- (id)featuredAccountProviderIdentifiers;
- (BOOL)includeAccountProviderIdentifier;
- (void)setIncludeAccountProviderIdentifier:;
- (BOOL)includeAuthenticationExpirationDate;
- (void)setIncludeAuthenticationExpirationDate:;
- (void)setLocalizedVideoTitle:;
- (BOOL)isInterruptionAllowed;
- (void)setInterruptionAllowed:;
- (BOOL)forceAuthentication;
- (void)setForceAuthentication:;
- (void)setAccountProviderAuthenticationToken:;
- (void)setApplicationAccountProviders:;
+ (BOOL)supportsSecureCoding;
@end
