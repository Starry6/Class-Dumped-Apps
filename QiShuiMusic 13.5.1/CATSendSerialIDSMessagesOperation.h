@interface CATSendSerialIDSMessagesOperation : CATOperation
- (BOOL)isAsynchronous;
- (void)main;
- (void).cxx_destruct;
- (id)initWithIDSPrimitives:workQueue:messages:destinationAddress:sourceAppleID:options:;
- (void)sendMessages;
- (void)didSendMessagesWithError:;
@end
