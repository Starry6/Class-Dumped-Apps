@interface CATSendDeviceSessionMessageOperation : CATOperation
- (BOOL)isAsynchronous;
- (void)main;
- (void).cxx_destruct;
- (id)initWithDeviceSession:message:;
- (void)sendMessage;
@end
