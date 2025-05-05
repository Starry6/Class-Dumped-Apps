@interface CATIDSServiceTransport : CATTransport
- (void)invalidateConnection;
- (void)connectionClosed:;
- (void)resumeConnection;
- (void)suspendConnection;
- (void)tryReportingInvalidation;
- (void)serviceReceiveQueue;
- (void).cxx_destruct;
- (void)connection:receivedData:;
- (id)name;
- (id)operationToSendMessage:;
- (id)initWithConnection:;
@end
