@interface XPCNSClientConnection : NSObject
@property (nonatomic) <XPCNSClientConnectionDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)shutDownCompletionBlock:;
- (void)sendMessageReliably:data:maxRetryCount:withHandler:;
- (id)initWithServiceName:delegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)sendMessage:data:withHandler:;
- (void)XPCClientConnection:didReceiveRequest:;
@end
