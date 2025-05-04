@interface AWEResourceDownloaderTTNetAdapter : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> dataHandlerSerialQueue;
- (id)allCookieString;
- (id)downloadFileWithURLs:savePath:channel:needCookie:progress:completion:;
- (id)dataHandlerSerialQueue;
- (void)notifyProgress:progress:;
- (void)setDataHandlerSerialQueue:;
- (void).cxx_destruct;
@end
