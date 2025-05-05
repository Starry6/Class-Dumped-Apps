@interface MCSingleSignOnPayloadKerberosInfo : NSObject
@property (nonatomic) NSString principalName;
@property (nonatomic) NSString realm;
@property (nonatomic) NSString certificateUUID;
@property (nonatomic) NSArray URLPrefixMatches;
@property (nonatomic) NSArray appIdentifierMatches;
@property (nonatomic) NSString accountGUID;
@property (nonatomic) NSString accountTypeGUID;
- (id)realm;
- (void)setRealm:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:profile:outError:;
- (id)stubDictionary;
- (id)certificateUUID;
- (void)setCertificateUUID:;
- (BOOL)validateAppIdentifierMatch:outError:;
- (BOOL)validateURLPrefixMatch:outNormalizedString:outError:;
- (id)principalName;
- (void)setPrincipalName:;
- (id)URLPrefixMatches;
- (void)setURLPrefixMatches:;
- (id)appIdentifierMatches;
- (void)setAppIdentifierMatches:;
- (id)accountGUID;
- (void)setAccountGUID:;
- (id)accountTypeGUID;
- (void)setAccountTypeGUID:;
@end
