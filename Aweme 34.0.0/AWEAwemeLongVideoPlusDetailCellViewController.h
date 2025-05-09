@interface AWEAwemeLongVideoPlusDetailCellViewController : AWEAwemeDetailCellViewController
@property (nonatomic) BOOL isFirst;
@property (nonatomic) double playerStartTime;
@property (nonatomic) NSObject screenCaptureBlocker;
@property (nonatomic) BOOL isShowingScreenBlockToast;
@property (nonatomic) UIImageView upImageView;
@property (nonatomic) UIImageView bottomImageView;
@property (nonatomic) UIView backgroundBlurView;
@property (nonatomic) UIImageView backgroundImageView;
@property (nonatomic) BOOL isShowDefaultBackground;
@property (nonatomic) BOOL isChange;
@property (nonatomic) @ bindPlayerController;
@property (nonatomic) @ bindVideoController;
@property (nonatomic) BOOL isChangeBoundsValue;
@property (nonatomic) BOOL isPlayFinished;
@property (nonatomic) AWEBinding videoBind;
@property (nonatomic) AWEBinding playerBind;
@property (nonatomic) AWEBinding frameBind;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateDefaultSeekToTime:;
- (void)awe_viewController:willTransitionToSize:transitionCoordinator:;
- (void)player:updatePlayTime:canPlayTime:totalTime:;
- (void)playerWillStartNextLoop:;
- (void)player:didChangePlaybackToAction:;
- (void)setIsFirst:;
- (void)setPlayerStartTime:;
- (double)playerStartTime;
- (void)postVideoNotificationForAutoPlay;
- (void)setupBindings;
- (id)playerBind;
- (void)setPlayerBind:;
- (id)bindPlayerController;
- (id)frameBind;
- (void)setBindPlayerController:;
- (void)setFrameBind:;
- (void)updateImageViewLayout;
- (void)configBasicLogic;
- (void)disableScreenCapture;
- (BOOL)isShowingScreenBlockToast;
- (void)setIsShowingScreenBlockToast:;
- (void)setScreenCaptureBlocker:;
- (id)screenCaptureBlocker;
- (void)traceVideoPlayFinished;
- (void)setIsPlayFinished:;
- (void)requestPaidAweme:;
- (void)disableDefaultVideoPlayFinishTrack;
- (void)setIsChangeBoundsValue:;
- (void)setIsShowDefaultBackground:;
- (void)setBindVideoController:;
- (id)videoBind;
- (void)setVideoBind:;
- (id)bindVideoController;
- (void)setupBindVideoController;
- (void)setupBindPlayerController;
- (void)adjustViewLayer;
- (void)adaptPad;
- (void)trackSelectionButtonWithModel:show:;
- (void)submitLongVideoHistory;
- (BOOL)isChangeBoundsValue;
- (void)trackHighLightPlay;
- (BOOL)isPlayFinished;
- (BOOL)isShowDefaultBackground;
- (BOOL)isChange;
- (void)setIsChange:;
- (void)setModel:;
- (void)viewWillDisappear:;
- (void)viewDidLoad;
- (void)viewDidDisappear:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)reset;
- (id)backgroundBlurView;
- (id)backgroundImageView;
- (BOOL)isFirst;
- (void)setBackgroundBlurView:;
- (void)setBackgroundImageView:;
- (void)updateWithModel:;
- (id)bottomImageView;
- (void)setBottomImageView:;
- (void)setUpImageView:;
- (id)upImageView;
@end
