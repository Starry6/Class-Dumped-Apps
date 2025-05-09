@interface AWEFeedPreLoadVideoController : AWEBaseController
@property (nonatomic) BOOL needPreFetch;
@property (nonatomic) BOOL commonPreloadStarted;
@property (nonatomic) NSMutableDictionary videoDownloadCompletedDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)holdStopPlayer;
- (void)preloadVideoModel:;
- (id)videoDownloadCompletedDict;
- (void)setVideoDownloadCompletedDict:;
- (BOOL)commonPreloadStarted;
- (void)videoControllerWillStartNextLoop:;
- (void)refreshCompletion:error:needAnimation:;
- (void)viewDidLoadBeforeTableviewSetup;
- (void)scrollViewDidScrollEndWithActive;
- (void)initialFetchCompletion:error:;
- (void)loadMoreCompletion:error:isFooterRefreshing:;
- (void)videoBufferingPrepared:;
- (void)modernVideoBufferingPrepared:;
- (void)videoCacheEndedWhenPlay:;
- (void)videoBufferLoadEnough:;
- (void)videoBufferLoadNotEnough:;
- (void)adWebViewDidFinishLoad;
- (void)adWebViewStartLoad;
- (void)adWebViewDidFailLoad:;
- (void)adWebViewWillDisappear;
- (void)videoDownloadFinished:;
- (void)preloadManagerAllTaskCompleted:;
- (void)preloadManager:didCompleteTaskWithModel:error:;
- (void)setNeedPreFetch:;
- (BOOL)needPreFetch;
- (void)setCommonPreloadStarted:;
- (void)bizDowngradeAsyncSilentPreload;
- (void)_tryPreloadFirstVideo;
- (void)_preloadVideosFromIndex:;
- (void)_cancelVideoPreload;
- (void)_silentpreloadVideosFromIndex:;
- (void)_silentCancelVideoPreload;
- (void)_retryVideoPreloadIfNeed;
- (BOOL)shouldUseNewPreloadController;
- (void)_preloadVideoModel:;
- (void)dealloc;
- (void)play;
- (void)scrollViewWillBeginDragging:;
- (void).cxx_destruct;
- (void)stop;
- (void)pause;
- (void)scrollViewWillEndDragging:withVelocity:targetContentOffset:;
@end
