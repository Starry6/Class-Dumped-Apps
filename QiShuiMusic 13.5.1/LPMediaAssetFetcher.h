@interface LPMediaAssetFetcher : LPFetcher
@property (nonatomic) NSURL URL;
@property (nonatomic) BOOL shouldDownloadIfPossible;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)URLSession:dataTask:didReceiveData:;
- (void)stopLoading;
- (id)init;
- (void)cancel;
- (void)URLSession:task:didCompleteWithError:;
- (void)URLSession:dataTask:didReceiveResponse:completionHandler:;
- (void).cxx_destruct;
- (void)setURL:;
- (id)URL;
- (void)fetchWithConfiguration:completionHandler:;
- (void)_resolveVideo;
- (void)_completedWithVideo:;
- (void)_completedWithAudio:;
- (id)videoProperties;
- (id)audioProperties;
- (BOOL)shouldDownloadIfPossible;
- (void)setShouldDownloadIfPossible:;
@end
