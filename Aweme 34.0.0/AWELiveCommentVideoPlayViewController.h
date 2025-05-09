@interface AWELiveCommentVideoPlayViewController : UIViewController
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) UIViewController<AWEAwemePlayVideoViewControllerProtocol><AWEPlayVideoViewControllerProtocol><AWEAwemeBizPlayVideoProtocol> playVideoViewController;
@property (nonatomic) ^{EngineAudioWrapper=^?^?^?^?^v} audioWrapper;
@property (nonatomic) BOOL isPlayingBeforeEnterBackground;
@property (nonatomic) UITapGestureRecognizer singleTapGesture;
@property (nonatomic) double videoPlayTime;
@property (nonatomic) BOOL isFirstPlayLoop;
@property (nonatomic) IESLiveGradientView bottomMaskView;
@property (nonatomic) UIImageView avatar;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UILabel descLabel;
@property (nonatomic) IESLiveImageView pauseIcon;
@property (nonatomic) UILabel zanLabel;
@property (nonatomic) IESLiveImageView zanIcon;
@property (nonatomic) NSDictionary extraTrackParams;
@property (nonatomic) @? didClickVideoCallback;
@property (nonatomic) q style;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (void)setAwemeModel:;
- (BOOL)pauseBySingleClick;
- (id)audioWrapper;
- (void)setAudioWrapper:;
- (void)playerWillStartNextLoop:;
- (id)playVideoViewController;
- (void)setPlayVideoViewController:;
- (void)didSetAttachingDIContext;
- (id)descLabel;
- (void)setDescLabel:;
- (id)pauseIcon;
- (void)setPauseIcon:;
- (id)extraTrackParams;
- (void)setExtraTrackParams:;
- (void)setBottomMaskView:;
- (id)bottomMaskView;
- (double)videoPlayTime;
- (void)setVideoPlayTime:;
- (void)initVideoController;
- (void)setSingleTapGesture:;
- (BOOL)needAudioWrapper;
- (void)appDidActive;
- (void)appEnterBack;
- (void)resetVideoPlayerViewController;
- (void)setupDetailStyleUI;
- (void)setupSearchStyleUI;
- (id)zanLabel;
- (id)zanIcon;
- (void)trackVideoDuration;
- (BOOL)isFirstPlayLoop;
- (void)setIsFirstPlayLoop:;
- (BOOL)isVideoPlayerVisble;
- (BOOL)isPlayingBeforeEnterBackground;
- (void)setIsPlayingBeforeEnterBackground:;
- (id)didClickVideoCallback;
- (BOOL)isSelfGuest;
- (BOOL)isSelfAnchor;
- (void)setDidClickVideoCallback:;
- (id)initWithDIContext:awemeModel:trackParams:;
- (void)setupVolume;
- (unsigned long long)getReportTypeWithAweme:;
- (BOOL)isMyAwemeModel;
- (void)setZanLabel:;
- (void)setZanIcon:;
- (void)viewWillDisappear:;
- (void)dealloc;
- (void)play:;
- (void)viewDidLoad;
- (void)prepareForDisplay;
- (long long)style;
- (id)nameLabel;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (void)pause;
- (void)setStyle:;
- (void)setNameLabel:;
- (id)singleTapGesture;
- (void)setupUI;
- (id)avatar;
- (void)setAvatar:;
- (void)handleSingleTap;
- (void)willDisplay;
- (void)resetVolume;
@end
