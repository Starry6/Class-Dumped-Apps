@interface AWEUGResourceDownloader : NSObject
+ (BOOL)unzipFileAtPath:toDestination:error:;
+ (BOOL)moveFileFromPath:toTargetPath:;
+ (void)downloadWithURLs:targetPath:index:completion:;
+ (id)ugResourceTmpRootFolder;
+ (void)downloadLottieWithURLs:zipFileMD5:zipTargetPath:unzipDirectory:completion:;
+ (void)downloadPNGWithURLs:targetPath:completion:;
+ (id)ugResourceRootFolder;
@end
