@interface GEONavdPeer : NSObject
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) GEONavdClientInfo clientInfo;
@property (nonatomic) BOOL expectingUpdates;
- (id)initWithXPCConnection:;
- (id)clientInfo;
- (id)connection;
- (void).cxx_destruct;
- (id)description;
- (BOOL)hasEntitlement:;
- (void)updateConnection:;
- (BOOL)expectingUpdates;
- (void)setExpectingUpdates:;
@end
