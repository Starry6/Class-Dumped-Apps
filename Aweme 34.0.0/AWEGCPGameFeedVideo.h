@interface AWEGCPGameFeedVideo : UIView
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) BOOL isPlayed;
@property (nonatomic) UIViewController<AWEPlayVideoViewControllerProtocol> playVideoViewController;
@property (nonatomic) UIView<AFDSlidesViewProtocol> imageSliderView;
@property (nonatomic) NSDictionary logExtra;
@property (nonatomic) NSString referString;
@property (nonatomic) q defaultImageIndex;
@property (nonatomic) double defaultSeekToTime;
@property (nonatomic) BOOL videoContentAspectFill;
@property (nonatomic) <AWEGCPGameFeedVideoDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (long long)currentImageIndex;
- (void)setAwemeModel:;
- (id)referString;
- (void)playerDidReadyForDisplay:;
- (void)player:didChangePlaybackStateWithAction:;
- (void)playerWillLoopPlaying:;
- (void)player:playbackFailedForURL:error:;
- (void)player:didChangeStallState:actionType:reason:;
- (void)setReferString:;
- (void)setLogExtra:;
- (id)logExtra;
- (void)updatePlayerIfNeeded;
- (double)defaultSeekToTime;
- (void)setDefaultSeekToTime:;
- (void)player:updatePlayTime:canPlayTime:totalTime:;
- (id)playVideoViewController;
- (void)setPlayVideoViewController:;
- (void)progressDidUpdateWithIndex:progress:duration:animated:;
- (id)imageSliderView;
- (void)setImageSliderView:;
- (void)videoController:playerPlayTime:canPlayTime:totalTime:;
- (void)updateLogExtra:;
- (void)updateVideoFrame;
- (void)videoUpdatePlayerControllerWithPlayVideoVC:;
- (void)videoUpdatePlayerControllerWithPlayState:;
- (void)setDefaultImageIndex:;
- (void)setupPlayVideoView;
- (id)createImageSliderView:;
- (long long)defaultImageIndex;
- (BOOL)isAlbumPlayer:;
- (void)setupAlbumSliderView;
- (BOOL)enableAlbumPlayer;
- (void)videoUpdatePlayerControllerWithNewPlayState:;
- (void)scrollToDefaultImageIndexIfNeeded;
- (BOOL)videoContentAspectFill;
- (void)setVideoContentAspectFill:;
- (void)dealloc;
- (BOOL)play;
- (id)delegate;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (double)currentPlaybackTime;
- (void)setDelegate:;
- (void)layoutSubviews;
- (void)stop;
- (void)pause;
- (void)setupUI;
- (BOOL)isPlayed;
- (void)setIsPlayed:;
- (void)updateWithModel:;
- (void)frameDidChange;
@end
