@interface AWERemoteResourceDownloader : NSObject
@property (nonatomic) NSMutableDictionary completionHandlerMap;
@property (nonatomic) NSMutableDictionary downloadStatusMap;
- (void)monitorDownloadEventForType:success:duration:isPredownload:fileSize:uri:error:;
- (void)handleResourceValidForType:uri:;
- (void)handleStartDownloadingForType:uri:;
- (id)downloadStatusMap;
- (id)completionHandlerMap;
- (void)handleAlreadyDownloadingForType:uri:count:;
- (void)handleFinishDownloadingForType:uri:;
- (void)handleStatusChangeForMessage:;
- (void)downloadImageWithURL:URI:isPredownload:completionHandler:;
- (void)downloadVideoWithURLList:URI:isPredownload:progress:completionHandler:;
- (void)downloadFileWithURL:destinationDirectory:completionHandler:;
- (void)setCompletionHandlerMap:;
- (void)setDownloadStatusMap:;
- (void).cxx_destruct;
+ (id)getLocalImageURLForURI:;
+ (id)getLocalVideoURLForURI:;
+ (BOOL)isVideoAssetReadyAtURL:;
+ (id)downloader;
+ (id)fileURLWithString:;
@end
