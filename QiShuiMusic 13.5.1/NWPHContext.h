@interface NWPHContext : NSObject
@property (nonatomic) NSObject<OS_xpc_object> connection;
@property (nonatomic) NSObject<OS_xpc_object> request;
@property (nonatomic) NSObject<OS_xpc_object> reply;
@property (nonatomic) NSInteger pid;
- (id)reply;
- (void)setReply:;
- (id)request;
- (int)pid;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (void)setRequest:;
- (id)initWithRequest:onConnection:;
@end
