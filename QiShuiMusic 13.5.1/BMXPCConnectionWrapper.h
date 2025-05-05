@interface BMXPCConnectionWrapper : NSObject
@property (nonatomic) NSXPCConnection connection;
- (void)dealloc;
- (id)connection;
- (void).cxx_destruct;
- (id)initWithConnection:;
@end
