@interface STCommunicationClient : NSObject
@property (nonatomic) NSXPCConnection connection;
- (id)init;
- (void)dealloc;
- (id)currentConfigurationWithError:;
- (id)connection;
- (void).cxx_destruct;
- (void)authenticateForCommunicationConfigurationOverrideWithCompletionHandler:;
+ (id)_newConnection;
@end
