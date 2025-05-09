@interface AWESearchReplayVideoView : UIView
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) <AWELiveVideoPreviewStreamPlayerProtocol> playerController;
@property (nonatomic) BOOL needRelocatePlayProgress;
@property (nonatomic) double startPlayerTime;
@property (nonatomic) double startLoadingTime;
@property (nonatomic) UIView grayContainerView;
@property (nonatomic) AWELiveVSEpisode episode;
@property (nonatomic) UIView vsWatermarkView;
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) NSString btm;
@property (nonatomic) <AWESearchReplayVideoViewPlayerDelegate> delegate;
@property (nonatomic) BOOL repeat;
@property (nonatomic) q scaleMode;
@property (nonatomic) double currPlaybackTime;
@property (nonatomic) q playState;
@property (nonatomic) NSDictionary logExtra;
@property (nonatomic) NSString referString;
@property (nonatomic) double startPosition;
@property (nonatomic) NSDictionary btmInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)referString;
- (void)setReferString:;
- (void)setLogExtra:;
- (id)logExtra;
- (id)btmInfo;
- (void)setBtmInfo:;
- (void)setCoverContentMode:;
- (void)playerController:currentPlayTime:playableTime:duration:;
- (void)playerController:playStateDidChange:;
- (void)playerController:playError:;
- (void)playerControllerPlayFinished:;
- (void)onStalledStart:actionType:reason:;
- (void)onStalledEnd:;
- (void)videoPlayerDidLoadFirstFrame:;
- (void)viewStatusDidChange:;
- (double)currPlaybackTime;
- (id)coverImageView;
- (void)setCoverImageView:;
- (void)updateLogExtra:;
- (id)btm;
- (void)setBtm:;
- (void)videoPlay;
- (void)videoPause;
- (void)didStartShowing;
- (double)startPlayerTime;
- (void)setStartPlayerTime:;
- (void)setStartLoadingTime:;
- (id)vsWatermarkView;
- (void)setVsWatermarkView:;
- (double)startLoadingTime;
- (void)addWatermark;
- (BOOL)needRelocatePlayProgress;
- (void)setNeedRelocatePlayProgress:;
- (void)updateCoverImageCover;
- (void)trackReplayVideoShow;
- (void)trackReplayVideoWindowShow;
- (void)trackReplayVideoDurationV2;
- (void)trackReplayVideoDuration;
- (void)trackReplayVideoPlay;
- (void)enterReplayRoom;
- (id)grayContainerView;
- (void)setGrayContainerView:;
- (void)dealloc;
- (void)play;
- (id)delegate;
- (void)setPlayerController:;
- (id)initWithFrame:;
- (id)transitionContext;
- (id)playerController;
- (id)player;
- (void).cxx_destruct;
- (void)reset;
- (void)setDelegate:;
- (void)viewDidAppear;
- (void)layoutSubviews;
- (void)stop;
- (void)pause;
- (void)setStartPosition:;
- (double)startPosition;
- (id)episode;
- (void)setEpisode:;
- (long long)playState;
- (void)setPlayState:;
- (void)updateWithModel:;
- (long long)scaleMode;
- (void)setScaleMode:;
- (BOOL)repeat;
- (void)setRepeat:;
- (void)seekToTime:completion:;
@end
