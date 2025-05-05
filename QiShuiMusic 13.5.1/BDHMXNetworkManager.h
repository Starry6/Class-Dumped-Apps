@interface BDHMXNetworkManager : NSObject
@property (nonatomic) <BDHMXNetworkProtocol> activeManager;
@property (nonatomic) <BDHMXNetworkProtocol> urlSessionManager;
@property (nonatomic) BOOL forceUseURLSession;
@property (nonatomic) BOOL disableNetworkRequest;
- (id)activeManager;
- (BOOL)disableNetworkRequest;
- (BOOL)forceUseURLSession;
- (void)requestWithURL:method:headerField:params:useAutoTagInfo:callBack:;
- (void)setActiveManager:;
- (void)setDisableNetworkRequest:;
- (void)setForceUseURLSession:;
- (void)setUrlSessionManager:;
- (id)urlSessionManager;
- (id)validManager;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
