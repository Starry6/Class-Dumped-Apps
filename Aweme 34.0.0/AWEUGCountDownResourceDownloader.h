@interface AWEUGCountDownResourceDownloader : NSObject
@property (nonatomic) NSOperationQueue downloadQueue;
- (void)trackLogWithKey:message:;
- (id)loadLottieFromURL:withMD5:lottieName:bundleName:;
- (id)getAWEUGCountDownRootFolderPath;
- (void)setupResourceRootFolder:;
- (void)downloadLottieFromURL:withMD5:lottieName:bundleName:;
- (BOOL)isLottieResourceExisted:lottieName:;
- (void)downloadResourceWithURL:md5:retryTimes:completion:;
- (id)lottieResourceDir:;
- (id)lottieNamed:bundleName:formPath:;
- (void)postResourceIsReadyNotify:;
- (void)downloadLottieWithURL:md5:retryTimes:completion:;
- (id)lottieZipFilePath:;
- (void)preDownloadWithConfig:;
- (void)setDownloadQueue:;
- (void).cxx_destruct;
- (id)downloadQueue;
+ (id)sharedInstance;
@end
