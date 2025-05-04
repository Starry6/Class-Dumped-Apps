@interface AWEMVChannelPreloadVideoController : AWEMVChannelBaseController
@property (nonatomic) AWEMVChannelPreloadManager preloadManager;
@property (nonatomic) NSMutableSet largeCardModelSet;
- (void)sectionControllerWillEnterWorkingRange:;
- (id)preloadManager;
- (void)setPreloadManager:;
- (void)channelVideoViewController:awemeModel:didChangePlaybackToAction:;
- (id)largeCardModelSet;
- (void)clearLargeCardPreloadSet;
- (void)setLargeCardModelSet:;
- (void).cxx_destruct;
@end
