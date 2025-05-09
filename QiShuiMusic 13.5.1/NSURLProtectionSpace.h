@interface NSURLProtectionSpace : NSObject
@property (nonatomic) NSString _sf_highLevelDomainAndPort;
@property (nonatomic) NSArray _sf_identities;
@property (nonatomic) BOOL _sf_canAuthenticate;
@property (nonatomic) r^{__CFString=} safari_protocolAsSecAttrProtocolValue;
@property (nonatomic) NSURLProtectionSpace safari_protectionSpaceByReplacingHostWithHighlevelDomain;
@property (nonatomic) NSString safari_addressString;
@property (nonatomic) NSString safari_userVisibleSiteForProtectionSpace;
@property (nonatomic) NSURL safari_URL;
@property (nonatomic) BOOL safari_allowsCredentialSaving;
@property (nonatomic) NSString safari_identityPreferenceDomain;
@property (nonatomic) NSString realm;
@property (nonatomic) BOOL receivesCredentialSecurely;
@property (nonatomic) BOOL isProxy;
@property (nonatomic) NSString host;
@property (nonatomic) q port;
@property (nonatomic) NSString proxyType;
@property (nonatomic) NSString protocol;
@property (nonatomic) NSString authenticationMethod;
- (id)_sf_highLevelDomainAndPort;
- (id)_sf_identities;
- (BOOL)_sf_canAuthenticate;
- (id)safari_creationDateOfCredentialWithUser:;
- (id)safari_addressString;
- (id)safari_URL;
- (id)safari_identityPreferenceDomain;
- (id)safari_protocolAsSecAttrProtocolValue;
- (id)safari_protectionSpaceByReplacingHostWithHighlevelDomain;
- (long long)safari_compareToHighLevelDomainFromProtectionSpaceOrderingDecimalCharactersLast:;
- (long long)safari_compareToHighLevelDomainFromProtectionSpace:;
- (id)safari_userVisibleSiteForProtectionSpace;
- (BOOL)isEqualToProtectionSpaceForPasswordManager:;
- (BOOL)safari_allowsCredentialSaving;
- (id)protocol;
- (id)init;
- (id)realm;
- (void)dealloc;
- (id)host;
- (long long)port;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (BOOL)isProxy;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithHost:port:protocol:realm:authenticationMethod:;
- (id)authenticationMethod;
- (void)_setServerTrust:;
- (void)_setDistinguishedNames:;
- (id)initWithProxyHost:port:type:realm:authenticationMethod:;
- (id)_initWithCFURLProtectionSpace:;
- (BOOL)receivesCredentialSecurely;
- (id)proxyType;
- (id)distinguishedNames;
- (id)serverTrust;
- (id)_cfurlprtotectionspace;
- (id)_CFURLProtectionSpace;
+ (id)safari_HTMLFormProtectionSpaceForURL:;
+ (id)safari_passkeySidecarProtectionSpaceForRelyingPartyIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
