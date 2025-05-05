@interface RUIImageLoader : NSObject
- (id)init;
- (id)notificationCenter;
- (void).cxx_destruct;
- (void)_loadingStatusChanged;
- (void)_startLoader;
- (void)_mainThread_postLoadingStatusChanged;
- (void)_postLoadingStatusChanged;
- (void)_postImageLoadedNotification:;
- (BOOL)isLoadingImages;
- (void)imageForURL:scale:completion:;
- (id)imageForURL:loadIfAbsent:;
- (BOOL)_locked_URLIsLoading:;
- (void)_locked_loadImageForURL:;
- (void)_loadImageURL:completion:;
- (void)_callCompletionsForURL:image:error:;
- (void)_setImageData:forURL:error:;
- (void)_locked_imageLoadStarted:;
- (void)_imageLoadFinished:;
+ (id)sharedImageLoader;
@end
