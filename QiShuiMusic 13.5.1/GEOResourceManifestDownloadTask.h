@interface GEOResourceManifestDownloadTask : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dataSession:shouldConvertDataTask:toDownloadTaskForEstimatedResponseSize:completionHandler:;
- (id)init;
- (void)cancel;
- (void)dataSession:didCompleteTask:;
- (void)_finishWithUpdatedManifest:newETag:isExistingManifestCurrent:error:;
- (id)initWithURL:eTag:;
- (void)startWithQueue:completionHandler:;
- (void).cxx_destruct;
- (void)_captureNetworkEventForTask:;
@end
