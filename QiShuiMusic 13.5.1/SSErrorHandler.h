@interface SSErrorHandler : NSObject
@property (nonatomic) <SSErrorHandlerDelegate> delegate;
@property (nonatomic) NSArray failureTypes;
- (void)_handleMessage:fromServerConnection:;
- (id)init;
- (void)dealloc;
- (void)startWithCompletionBlock:;
- (void)setDelegate:;
- (id)delegate;
- (id)failureTypes;
- (void)_sendDisconnectMessage;
- (void)setFailureTypes:;
- (void)stopWithCompletionBlock:;
- (void)_dispatchToDelegate:;
- (void)_openSessionWithMessage:;
- (void)_reconnectToDaemonWithCompletionBlock:;
- (void)_tearDownConnections;
@end
