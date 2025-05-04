@interface AWEAwemeDetailFirstVideoMonitorHandler : AWEOnPlayAndMonitorBaseHandler
- (void)onPlayer:didChangePlaybackStateWithAction:context:;
- (BOOL)isFromDetailFeed;
- (void)endDetailFirstFrameUIMonitor;
- (void)endDetailFirstVideoUIMonitor;
- (id)paramsForVideoPlayEnd;
- (id)paramsForVideoPlayFailed:;
@end
