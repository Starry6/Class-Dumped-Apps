@interface AWEFriendsOnPlayAndMonitorHandler : AWEOnPlayAndMonitorBaseHandler
- (void)onPlayer:didChangePlaybackStateWithAction:context:;
- (id)initWithPlayerController:;
- (void)onPlay:;
@end
