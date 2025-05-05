@interface CXNetworkExtensionMessageController : NSObject
@property (nonatomic) <CXNetworkExtensionMessageControllerDataSource> dataSource;
- (id)init;
- (id)initWithDataSource:;
- (id)dataSource;
- (void).cxx_destruct;
- (void)sendNetworkExtensionMessage:forBundleIdentifier:completion:;
@end
