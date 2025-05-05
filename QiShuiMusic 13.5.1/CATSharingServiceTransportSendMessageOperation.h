@interface CATSharingServiceTransportSendMessageOperation : CATOperation
- (void)cancel;
- (BOOL)isAsynchronous;
- (void)main;
- (void).cxx_destruct;
- (void)sendMessage;
- (id)initWithConnection:message:;
- (void)didSendMessageWithError:;
@end
