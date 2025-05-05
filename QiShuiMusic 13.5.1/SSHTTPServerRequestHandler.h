@interface SSHTTPServerRequestHandler : NSObject
@property (nonatomic) <SSHTTPServerRequestHandlerDelegate> delegate;
@property (nonatomic) NSInteger downloadSpeed;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_close;
- (void)dealloc;
- (void)setDelegate:;
- (void)close;
- (id)delegate;
- (void).cxx_destruct;
- (void)stream:handleEvent:;
- (int)downloadSpeed;
- (void)setDownloadSpeed:;
- (id)initWithReadStream:writeStream:runLoop:;
- (BOOL)_handleReceivedDataWithError:;
- (void)_respondWithRequest:error:;
- (id)_errorResponseDataWithStatus:message:;
- (long long)_throttledWriteSpeed;
- (BOOL)_shouldKeepRunning;
- (long long)_writeResponseData:error:;
@end
