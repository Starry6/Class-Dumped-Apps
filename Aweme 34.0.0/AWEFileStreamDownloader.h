@interface AWEFileStreamDownloader : NSObject
- (void)downloadFileWithRequest:;
+ (id)fileCacheWithURL:cacheDir:;
+ (BOOL)httpAssetHasAudio:;
+ (void)downloadFileWithRequest:;
+ (double)durationWithURL:;
+ (void)cancelDownloadFileWithURL:;
+ (id)sharedInstance;
@end
