@interface TKSmartCardSessionRequest : NSObject
@property (nonatomic) NSDictionary parameters;
@property (nonatomic) @? reply;
@property (nonatomic) NSXPCConnection connection;
- (id)reply;
- (void)setReply:;
- (id)parameters;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (void)setParameters:;
@end
