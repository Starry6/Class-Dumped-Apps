@interface TKSmartCardSessionEngine : NSObject
@property (nonatomic) BOOL valid;
@property (nonatomic) BOOL active;
@property (nonatomic) q endPolicy;
@property (nonatomic) NSXPCConnection connection;
- (BOOL)active;
- (void)dealloc;
- (BOOL)valid;
- (void)setValid:;
- (void)setEndPolicy:;
- (id)connection;
- (void).cxx_destruct;
- (long long)endPolicy;
- (void)setActive:;
- (void)transmit:reply:;
- (void)terminateWithReply:;
- (void)setSessionEndPolicy:;
- (id)initWithSlot:connection:;
@end
