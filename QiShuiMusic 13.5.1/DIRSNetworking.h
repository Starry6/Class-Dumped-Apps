@interface DIRSNetworking : DIRSBasicModule
@property (nonatomic) <IRISNetworkProvider> provider;
- (id)endpointUsingSchema:options:attempts:;
- (id)loadUserHTTPHeaderFields:;
- (void)syncUsingSchema:header:body:options:completion:;
- (void)setProvider:;
- (void)commonInit;
- (void)resume;
- (id)provider;
- (void).cxx_destruct;
+ (id)moduleId;
+ (id)moduleVersion;
@end
