@interface AWEVideoMusicStreamDownloader : NSObject
- (BOOL)enableMusicCacheFileNameByUrlKey;
- (void)downloadMusic:targetTime:progressHandler:playingHandler:completion:;
- (void)downloadFileWithURLs:urlKey:cacheDirectory:targetTime:progressHandler:playingHandler:completion:;
- (void)downloadFileWithURL:urlKey:targetTime:cacheDir:progressHandler:completion:;
+ (double)durationForURL:;
+ (BOOL)isNetworkURL:;
+ (id)musicErrorWithLocalizedDescription:;
+ (void)downloadMusicModel:params:extraTrack:progressHandler:playingHandler:completion:;
+ (void)cancelDownloadMusicModel:;
+ (BOOL)httpAssetHasAudio:;
+ (id)createDirectoryIfNotExist;
+ (id)musicDirectory;
+ (id)musicDirectoryPath;
+ (void)downloadMusicModel:params:extraTrack:playingHandler:completion:;
+ (id)sharedInstance;
+ (BOOL)moveURL:toURL:error:;
@end
