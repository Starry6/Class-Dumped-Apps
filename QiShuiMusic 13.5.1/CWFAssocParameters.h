@interface CWFAssocParameters : NSObject
@property (nonatomic) CWFScanResult scanResult;
@property (nonatomic) CWFNetworkProfile knownNetworkProfile;
@property (nonatomic) NSString password;
@property (nonatomic) CWFEAPCredentials EAPCredentials;
@property (nonatomic) BOOL rememberUponSuccessfulAssociation;
- (void)setPassword:;
- (id)password;
- (id)scanResult;
- (void)setScanResult:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)isEqualToAssocParameters:;
- (id)knownNetworkProfile;
- (void)setKnownNetworkProfile:;
- (id)EAPCredentials;
- (void)setEAPCredentials:;
- (BOOL)rememberUponSuccessfulAssociation;
- (void)setRememberUponSuccessfulAssociation:;
+ (BOOL)supportsSecureCoding;
@end
