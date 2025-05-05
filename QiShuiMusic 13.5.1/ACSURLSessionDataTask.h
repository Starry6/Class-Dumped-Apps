@interface ACSURLSessionDataTask : ACSURLSessionTask
@property (nonatomic) @? _clientDataCompletionHandler;
- (id)_clientDataCompletionHandler;
- (BOOL)_isUpload;
- (void).cxx_destruct;
- (id)initWithNSURLDataTaskCreator:initialRequest:forSession:;
- (void)set_clientDataCompletionHandler:;
@end
