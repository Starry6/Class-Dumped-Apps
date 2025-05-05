@interface GEOProxyClient : NSObject
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) NSString bundleVersion;
@property (nonatomic) GEOApplicationAuditToken auditToken;
@property (nonatomic) BOOL isApplication;
- (void)setBundleVersion:;
- (id)bundleVersion;
- (void)setAuditToken:;
- (id)bundleIdentifier;
- (BOOL)isApplication;
- (id)initWithXPCConnection:;
- (unsigned long long)hash;
- (id)auditToken;
- (void)setBundleIdentifier:;
- (void).cxx_destruct;
- (id)initWithAuditToken:;
- (id)description;
- (BOOL)isEqual:;
- (id)URLConnectionProperties;
- (void)setIsApplication:;
+ (id)currentClient;
+ (id)compositeClientForClients:;
@end
