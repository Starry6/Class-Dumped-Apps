@interface TSXAnonymousClient : NSObject
@property (nonatomic) NSXPCConnection serverConnection;
- (id)serverConnection;
- (void)dealloc;
- (id)exportedObject;
- (id)initWithEndpoint:;
- (void).cxx_destruct;
- (void)invalidatedConnection;
- (void)interruptedConnection;
+ (id)clientProtocol;
+ (id)serverProtocol;
@end
