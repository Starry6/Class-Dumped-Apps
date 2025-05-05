@interface CTStewieDataClient : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)sendMessageInternal:usingConnection:completion:;
- (void)receivedData:fromConnectionId:;
- (id)getState;
- (void)failAllPendingMessages;
- (BOOL)start;
- (void)dispatchOnDelegateQueue:;
- (void)connectionPairStateChanged:;
- (void)updateConnectedServices:;
- (void)invokeSendCompletionForMsgId:ack:metadata:;
- (void)stateChanged:;
- (void)discardConnectionPairIfRequired;
- (void)createConnectionPairIfRequired;
- (BOOL)sendMessage:completion:;
- (void).cxx_destruct;
- (void)reEvaluate;
- (id).cxx_construct;
- (id)initWithServices:delegate:delegateQueue:;
@end
