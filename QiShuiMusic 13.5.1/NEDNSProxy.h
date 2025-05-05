@interface NEDNSProxy : NSObject
@property (nonatomic) BOOL enabled;
@property (nonatomic) NEDNSProxyProviderProtocol protocol;
@property (nonatomic) NEPerApp perApp;
- (id)protocol;
- (void)setProtocol:;
- (BOOL)checkValidityAndCollectErrors:;
- (id)init;
- (id)descriptionWithIndent:options:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setEnabled:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (BOOL)isEnabled;
- (id)perApp;
- (void)setPerApp:;
+ (BOOL)supportsSecureCoding;
@end
