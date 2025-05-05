@interface XPCClientConnection : NSObject
@property (nonatomic) <XPCClientConnectionDelegate> delegate;
- (void)shutDownCompletionBlock:;
- (id)initWithServiceName:delegate:;
- (void)_handleIncomingMessage:;
- (void)sendMessage:withHandler:;
- (void)_reallySendMessage:handler:sequence:retryCount:;
- (id)debugDescription;
- (id)delegate;
- (void)_handleConnectionEvent:;
- (void).cxx_destruct;
@end
