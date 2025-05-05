@interface AKAuthorization : NSObject
@property (nonatomic) <AKCredentialRequestProtocol> authorizedRequest;
@property (nonatomic) <AKCredential> credential;
- (id)initWithCoder:;
- (id)credential;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (void)setCredential:;
- (void)setAuthorizedRequest:;
- (id)authorizedRequest;
+ (BOOL)supportsSecureCoding;
@end
