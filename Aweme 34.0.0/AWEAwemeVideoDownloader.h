@interface AWEAwemeVideoDownloader : NSObject
+ (void)downloadVideoWithURLGoup:destinationURL:progress:completionHandler:;
+ (void)fetchLocalVideoFromVideoId:downloadUrl:completion:;
+ (id)getLocalVideoURLForAweme:;
+ (BOOL)validateVideoURL:;
+ (id)forceFlagFilePathWithDestURL:;
+ (id)ttnet_downloadVideo:destURL:progress:completion:;
+ (void)ttnet_getLocalVideoFromAweme:enterFrom:forceDownload:progress:completion:;
+ (void)p_downloadVideoWithUrl:destURL:completion:;
+ (id)deprecated_downloadVideoWithURLGoup:destinationURL:downloadTaskToStopDownload:progress:completionHandler:;
+ (void)getLocalVideoDontWaitForResultWithAweme:destURL:task:enterFrom:isDashVideo:forceCopy:progress:completion:;
+ (void)fetchLocalVideoFromAweme:enterFrom:forceDownload:completion:;
+ (void)fetchLocalVideoFromAweme:enterFrom:forceDownload:progress:completion:;
+ (id)fetchEditChapterVideoFromAweme:enterFrom:progress:completion:;
+ (void)willdelete_downloadVideo:destURL:task:progress:completion:;
@end
