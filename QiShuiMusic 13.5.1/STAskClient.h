@interface STAskClient : NSObject
@property (nonatomic) NSXPCConnection connection;
- (id)init;
- (void)dealloc;
- (id)connection;
- (void).cxx_destruct;
- (BOOL)respondToAskForTimeRequestWithIdentifier:answer:error:;
+ (id)_newConnection;
@end
