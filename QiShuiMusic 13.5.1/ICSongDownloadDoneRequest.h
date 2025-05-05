@interface ICSongDownloadDoneRequest : ICRequestOperation
- (void)execute;
- (void)cancel;
- (void)performRequestWithResponseHandler:;
- (void).cxx_destruct;
- (id)initWithRequestContext:downloadIdentifier:songID:;
@end
