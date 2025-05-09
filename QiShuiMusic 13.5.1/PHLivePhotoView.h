@interface PHLivePhotoView : UIView
@property (nonatomic) ISPlayerItem _playerItem;
@property (nonatomic) BOOL _playingVitality;
@property (nonatomic) BOOL _playbackRequested;
@property (nonatomic) BOOL scrubbing;
@property (nonatomic) q videoFilterUpdateCounter;
@property (nonatomic) q targetReadiness;
@property (nonatomic) BOOL shouldApplyTargetReadiness;
@property (nonatomic) UIView photoView;
@property (nonatomic) {CGPoint=dd} scaleAnchorOffset;
@property (nonatomic) ISLivePhotoUIView playerView;
@property (nonatomic) ISLivePhotoPlayer player;
@property (nonatomic) BOOL showsStatusBorder;
@property (nonatomic) {?={?=qiIq}{?=qiIq}} trimmedTimeRange;
@property (nonatomic) ^{CGImage=} overridePhoto;
@property (nonatomic) {?=qiIq} seekTime;
@property (nonatomic) BOOL displayingPhoto;
@property (nonatomic) NSNumber overrideSRLCompensationAmount;
@property (nonatomic) <PHLivePhotoViewDelegate> delegate;
@property (nonatomic) PHLivePhoto livePhoto;
@property (nonatomic) BOOL muted;
@property (nonatomic) UIGestureRecognizer playbackGestureRecognizer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setPlayerView:;
- (BOOL)showsStatusBorder;
- (void)_setPlayerItem:;
- (void)setTargetReadiness:;
- (void)_updatePlayerTargetReadiness;
- (void)_playerDidBeginHinting;
- (id)scaleAnchorOffset;
- (long long)videoFilterUpdateCounter;
- (void)setVideoFilterUpdateCounter:;
- (BOOL)scrubbing;
- (void)setDelegate:;
- (void)setPhotoView:;
- (void)startPlaybackWithStyle:;
- (void)observable:didChange:context:;
- (void)setMuted:;
- (BOOL)isMuted;
- (void)stopPlayback;
- (BOOL)isDisplayingPhoto;
- (id)generateSnapshotImage;
- (void)_applySRLCompensationAmount:updateCount:;
- (BOOL)livePhotoViewCanBeginInteractivePlayback:;
- (void)_setPlayingVitality:;
- (id)initWithCoder:;
- (void)setScaleAnchorOffset:;
- (id)trimmedTimeRange;
- (void)setOverridePhoto:;
- (id)initWithFrame:;
- (void)_commonPHLivePhotoViewInitialization;
- (BOOL)shouldApplyTargetReadiness;
- (id)player;
- (void)_updatePlayingVitality;
- (void)setShouldApplyTargetReadiness:;
- (long long)targetReadiness;
- (BOOL)_playingVitality;
- (id)delegate;
- (void)_updateVideoFilter;
- (double)livePhotoViewExtraMinimumTouchDuration:touch:;
- (void)_handlePlayerItemStatusChanged;
- (id)_playerItem;
- (void).cxx_destruct;
- (id)overrideSRLCompensationAmount;
- (void)setPlayer:;
- (void)_updateCurrentPlaybackStyleAndSeeking;
- (void)setTrimmedTimeRange:;
- (id)playerView;
- (void)setLivePhoto:;
- (void)setOverrideSRLCompensationAmount:;
- (void)_updatePlayerAudioEnabled;
- (void)setSeekTime:;
- (id)overridePhoto;
- (BOOL)_playbackRequested;
- (void)setContentMode:;
- (void)_updateStatusBorder;
- (void)setShowsStatusBorder:;
- (void)_setScrubbing:;
- (id)seekTime;
- (id)livePhoto;
- (id)playbackGestureRecognizer;
- (void)_setPlaybackRequested:;
- (id)photoView;
+ (id)livePhotoBadgeImageWithOptions:;
@end
