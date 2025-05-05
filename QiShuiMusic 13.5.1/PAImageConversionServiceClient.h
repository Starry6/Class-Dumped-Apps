@interface PAImageConversionServiceClient : NSObject
@property (nonatomic) NSXPCConnection serviceConnection;
- (id)serviceConnection;
- (id)init;
- (void)dealloc;
- (void)setServiceConnection:;
- (void).cxx_destruct;
- (void)convertImageAtSourceURL:options:completionHandler:;
- (void)convertImageAtSourceURLCollection:toDestinationURLCollection:options:completionHandler:;
- (void)setupServiceConnection;
- (void)requestStatusWithCompletionHandler:;
- (void)sendRequestWithOptions:sourceURLCollection:destinationURLCollection:jobIdentifier:attemptCount:completionHandler:;
@end
