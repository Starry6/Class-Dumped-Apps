@interface BU_IESGurdResourceManager : NSObject
@property (nonatomic) BU_IESGurdDefaultNetworkDelegate defaultNetworkDelegate;
- (id)defaultNetworkDelegate;
- (void)setDefaultNetworkDelegate:;
- (void).cxx_destruct;
+ (void)POSTWithURLString:params:completion:;
+ (id)configResponseFromDataDictionary:;
+ (void)downloadPackageWithURLStrings:completion:;
+ (void)gurdDidFetchConfigWithResponse:configsDictionary:;
+ (void)handleUniversalStrategies:;
+ (void)ies_fetchConfigWithRequest:completion:;
+ (void)innerRequestConfigWithParams:businessDomain:completion:;
+ (void)innerRequestWithMethod:URLString:params:completion:;
+ (id)networkDelegateForDownload;
+ (id)networkDelegateForRequest;
+ (id)sharedManager;
@end
