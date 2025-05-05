@interface VSServiceConnectionHandler : NSObject
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) <VSServiceConnectionHandlerDelegate> delegate;
- (void)setDelegate:;
- (void)_didFinish;
- (id)delegate;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
@end
