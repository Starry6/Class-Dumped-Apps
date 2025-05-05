@interface CXInProcessCallSource : CXCallSource
@property (nonatomic) CXInProcessProvider provider;
- (void)setProvider:;
- (id)bundleIdentifier;
- (id)bundleURL;
- (id)vendorProtocolDelegate;
- (id)localizedName;
- (id)auditToken;
- (id)provider;
- (int)processIdentifier;
- (BOOL)isPermittedToUsePrivateAPI;
- (void).cxx_destruct;
- (BOOL)isPermittedToUsePublicAPI;
- (id)initWithIdentifier:bundleIdentifier:;
@end
