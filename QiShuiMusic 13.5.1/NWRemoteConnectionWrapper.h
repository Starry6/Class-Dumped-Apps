@interface NWRemoteConnectionWrapper : NSObject
@property (nonatomic) NSUUID clientID;
@property (nonatomic) NWConnection connection;
- (void)setClientID:;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (id)clientID;
@end
