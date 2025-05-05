@interface MAXpcManager : NSObject
- (void)clearConnection:;
- (void)setClientName:;
- (void)ensureConnection;
- (void)sendAsync:clientHandler:taskDescriptor:withRetry:;
- (void)sendAsync:clientHandler:taskDescriptor:;
- (void)attachProgressHandler:assetId:callBack:withPurpose:;
- (id)sendSync:gettingResponseCode:codeForXpcError:loggingName:;
- (void)setClientConnectionHandler;
- (void)notifyClientsOfProgress:;
- (void).cxx_destruct;
- (id)initWithServiceName:callbackQueue:;
@end
