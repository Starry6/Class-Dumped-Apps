@interface AWETeenPlayInteractionView : NSObject
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) UIViewController<AWETeenPlayInteractionViewDelegate><AWETeenStoryProgressSlideViewDelegate> viewController;
@property (nonatomic) AWETeenPlayInteractionContext context;
@property (nonatomic) AWETeenPlayInteractionProgressHelper progressHelper;
@property (nonatomic) AWETeenPlayInteractionMiniSlider miniSlider;
@property (nonatomic) AWETeenStoryProgressSlideView storyProgressView;
@property (nonatomic) AWELoadingAndVolumeView loadAndVolumeView;
@property (nonatomic) AWETeenModeLandscapeEntryView landscapeEnterView;
@property (nonatomic) AWETeenPlayInteractionVideoPauseIcon pauseIcon;
@property (nonatomic) AWETeenPlayInteractionSubscribeButton subscribeButton;
@property (nonatomic) AWETeenPlayInteractionMaximumProgressView progressView;
@property (nonatomic) AWEGradientView bottomMaskView1;
@property (nonatomic) AWEGradientView bottomMaskView2;
@property (nonatomic) double lastPlayDuration;
@property (nonatomic) NSTimer hideVolumeTimer;
@property (nonatomic) double videoScale;
@property (nonatomic) BOOL isSeeking;
@property (nonatomic) BOOL panWillStart;
@property (nonatomic) BOOL isAppearing;
@property (nonatomic) UIImageView previewImageView;
@property (nonatomic) double heightWidthRatio;
@property (nonatomic) BOOL hasUpdatePauseIconByPureMode;
@property (nonatomic) AWETeenCreationStickerCard creationStickerCard;
@property (nonatomic) BOOL hasTrackedCreationStickerShow;
@property (nonatomic) AWEElementContainer leftContainer;
@property (nonatomic) AWEElementContainer rightContainer;
@property (nonatomic) AWEElementContainer bottomContainer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) double bottomMargin;
@property (nonatomic) Q playerStatus;
- (void)p_setupUI;
- (void)setPauseHidden:;
- (void)setHide:;
- (void)videoDidActivity;
- (void)playLoadingAnimation;
- (id)leftContainer;
- (id)rightContainer;
- (id)pauseIcon;
- (void)setPauseIcon:;
- (void)setRightContainer:;
- (void)setLeftContainer:;
- (void)setIsSeeking:;
- (void)p_updateInteractionElementsStatus;
- (void)p_updateDataForContainerElements:;
- (BOOL)windowGestureShouldRecognizedFromView:withPoint:;
- (BOOL)windowGestureRecognizerShouldBegin:;
- (BOOL)windowGestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:;
- (void)windowGestureTriggered:;
- (void)setLastPlayDuration:;
- (double)lastPlayDuration;
- (void)updatePlayProgressWithTime:totalDuration:;
- (double)heightWidthRatio;
- (void)setHeightWidthRatio:;
- (void)setPlayProgressWithTime:totalDuration:;
- (id)loadAndVolumeView;
- (void)setLoadAndVolumeView:;
- (void)updateProgressWithAwemeID:duration:totalCount:currentIndex:currentProgress:needAnimation:;
- (void)creationStickerCardClicked;
- (void)setHide:animated:;
- (void)p_setupEvent;
- (id)progressHelper;
- (void)playerSeekingBegin;
- (void)playerSeekingEnd;
- (id)bottomContainerElements;
- (void)progressPanSeekBegin;
- (void)progressPanSeekChanged:previewImage:;
- (void)progressPanSeekEnd;
- (void)setProgressHelper:;
- (id)hideVolumeTimer;
- (id)miniSlider;
- (void)p_updateEnterLandscapeIfNeeded;
- (void)p_updatePreviewImageConstraintIfNeeded;
- (id)storyProgressView;
- (void)setStoryProgressView:;
- (void)p_setupStoryProgressView;
- (id)creationStickerCard;
- (void)setHasTrackedCreationStickerShow:;
- (void)dismissStrongSubscribeIfNeeded;
- (void)dismissExtenPanelIfNeeded;
- (void)setHasUpdatePauseIconByPureMode:;
- (void)setPanWillStart:;
- (BOOL)panWillStart;
- (BOOL)p_shouldShowMiniSlider;
- (void)p_updateEnterLandscapeForDescriptionExpand:;
- (id)bottomMaskView1;
- (id)bottomMaskView2;
- (id)landscapeEnterView;
- (id)leftContainerElements;
- (id)rightContainerElements;
- (BOOL)p_shouldAddMiniSlider;
- (BOOL)p_shouldShowLandscapeEnterView;
- (BOOL)p_videoInteractiveViewShowing;
- (BOOL)hasUpdatePauseIconByPureMode;
- (void)p_startHideVolumeTimer;
- (void)p_stopHideVolumeTimer;
- (void)setHideVolumeTimer:;
- (BOOL)p_isAlbumVCType;
- (void)enterLandscapeClicked;
- (void)p_setPrevVolume:withNewVolume:;
- (void)showStrongSubscribeIfNeed;
- (void)setMiniSlider:;
- (void)setLandscapeEnterView:;
- (void)setBottomMaskView1:;
- (void)setBottomMaskView2:;
- (void)setCreationStickerCard:;
- (BOOL)hasTrackedCreationStickerShow;
- (void)setModel:;
- (void)dealloc;
- (id)progressView;
- (void)resume;
- (BOOL)isSeeking;
- (id)view;
- (void)viewDidLoad;
- (void)prepareForDisplay;
- (id)viewController;
- (double)bottomMargin;
- (BOOL)isAppearing;
- (void)setProgressView:;
- (id)model;
- (void)setData:;
- (void)viewWillAppear;
- (void)setContext:;
- (void).cxx_destruct;
- (void)setIsAppearing:;
- (BOOL)gestureRecognizer:shouldReceiveTouch:;
- (void)reset;
- (void)viewDidAppear;
- (id)context;
- (void)pause;
- (void)setViewController:;
- (id)previewImageView;
- (void)setPreviewImageView:;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
- (void)setBottomMargin:;
- (void)didEndDisplaying;
- (double)videoScale;
- (unsigned long long)playerStatus;
- (void)stopLoadingAnimation;
- (void)setPlayerStatus:;
- (void)willDisplay;
- (id)initWithContext:viewController:;
- (id)subscribeButton;
- (void)setSubscribeButton:;
- (void)setVideoScale:;
- (id)bottomContainer;
- (void)setBottomContainer:;
@end
