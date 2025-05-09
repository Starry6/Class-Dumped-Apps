@interface AMSBiometricsSignatureRequest : NSObject
@property (nonatomic) ACAccount account;
@property (nonatomic) <AMSBagProtocol> bag;
@property (nonatomic) NSString challenge;
@property (nonatomic) AMSProcessInfo clientInfo;
@property (nonatomic) BOOL dualAction;
@property (nonatomic) AMSKeychainOptions keychainOptions;
@property (nonatomic) ^{__SecAccessControl=} localAuthAccessControlRef;
@property (nonatomic) LAContext localAuthContext;
@property (nonatomic) NSDictionary localAuthOptions;
- (id)account;
- (id)keychainOptions;
- (void)dealloc;
- (id)clientInfo;
- (id)initWithCoder:;
- (void)setBag:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)bag;
- (id)challenge;
- (id)initWithAccount:clientInfo:challenge:options:error:;
- (id)localAuthAccessControlRef;
- (void)setLocalAuthAccessControlRef:;
- (id)_localAuthOptions;
- (BOOL)isDualAction;
- (void)setDualAction:;
- (id)localAuthContext;
- (id)localAuthOptions;
+ (BOOL)supportsSecureCoding;
+ (id)biometricsSignatureRequestForURLResponse:account:session:task:clientInfo:options:error:;
@end
