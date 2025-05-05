@interface STAd.PangleAdLivePlayer : NSObject
@property (nonatomic) <BULivePlayerDelegate> delegate;
- (void)onPlayerStateReport:;
- (void)onStreamDryup:;
- (void)player:didReceiveError:;
- (void)player:loadStateDidChange:;
- (void)player:playbackStateDidChange:;
- (void)replaceCurrentItemWithLiveItem:;
- (BOOL)mute;
- (void)play;
- (void)stop;
- (void)setMute:;
- (id)view;
- (long long)state;
- (void)pause;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
+ (id)playerWithLiveStream:config:;
@end
