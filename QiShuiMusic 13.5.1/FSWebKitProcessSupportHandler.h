@interface FSWebKitProcessSupportHandler : NSObject
@property (nonatomic) NSXPCConnection connection;
- (void)ping:;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (id)initWithConnection:;
- (void)checkin:reply:;
@end
