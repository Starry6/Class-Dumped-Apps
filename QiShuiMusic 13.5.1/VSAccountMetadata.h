@interface VSAccountMetadata : NSObject
@property (nonatomic) NSString accountProviderIdentifier;
@property (nonatomic) NSDate authenticationExpirationDate;
@property (nonatomic) NSData verificationData;
@property (nonatomic) VSAccountProviderResponse accountProviderResponse;
@property (nonatomic) NSString SAMLAttributeQueryResponse;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)verificationData;
- (void)setVerificationData:;
- (id)accountProviderIdentifier;
- (void)setAccountProviderIdentifier:;
- (id)SAMLAttributeQueryResponse;
- (id)authenticationExpirationDate;
- (void)setAuthenticationExpirationDate:;
- (id)accountProviderResponse;
- (void)setAccountProviderResponse:;
+ (BOOL)supportsSecureCoding;
@end
