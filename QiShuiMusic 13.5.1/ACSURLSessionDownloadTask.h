@interface ACSURLSessionDownloadTask : ACSURLSessionTask
@property (nonatomic) @? _clientLocationCompletionHandler;
@property (nonatomic) NSURLRequest _resumedOriginalRequest;
@property (nonatomic) NSError _deferredLinkError;
@property (nonatomic) NSURLRequest originalRequest;
- (BOOL)_isUpload;
- (void).cxx_destruct;
- (void)cancelByProducingResumeData:;
- (id)originalRequest;
- (id)initWithNSURLDownloadTaskCreator:initialRequest:forSession:;
- (id)_clientLocationCompletionHandler;
- (void)set_clientLocationCompletionHandler:;
- (id)_resumedOriginalRequest;
- (void)set_resumedOriginalRequest:;
- (id)_deferredLinkError;
- (void)set_deferredLinkError:;
@end
