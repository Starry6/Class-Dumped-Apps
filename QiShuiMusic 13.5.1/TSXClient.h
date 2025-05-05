@interface TSXClient : NSObject
@property (nonatomic) NSXPCConnection serverConnection;
- (id)serverConnection;
- (id)init;
- (void)dealloc;
- (id)exportedObject;
- (void).cxx_destruct;
- (void)invalidatedConnection;
- (void)interruptedConnection;
+ (id)clientProtocol;
+ (id)serviceName;
+ (id)serverProtocol;
@end
