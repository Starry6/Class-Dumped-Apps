@interface AWEResourceDownloader : NSObject
@property (nonatomic) AWEResourceDownloaderTTNetAdapter networkAdapter;
- (id)downloadAndSaveFileWithURLs:channel:identify:savePath:logDic:needCookie:progress:completion:;
- (void)setNetworkAdapter:;
- (id)networkAdapter;
- (id)downloadFileWithURLs:channel:identify:savePath:index:logDic:needCookie:progress:completion:;
- (void)callCompletionBlock:error:completion:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
