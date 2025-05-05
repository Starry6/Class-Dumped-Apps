@interface SecuritydXPCClient : NSObject
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (id)protocolWithSync:errorHandler:;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (id)initTargetingSession:;
+ (void)configureSecuritydXPCProtocol:;
@end
