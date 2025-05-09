@interface AWETeenLandscapePlayInteractionViewController : UIViewController
@property (nonatomic) AWETeenPlayInteractionContext context;
@property (nonatomic) AWEElementContainer bottomContainer;
@property (nonatomic) AWETeenLandscapePlayInteractionView interactionView;
@property (nonatomic) q vcType;
@property (nonatomic) BOOL initSeekEnded;
@property (nonatomic) double progress;
@property (nonatomic) BOOL didShowPanel;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) double lastClickTimestamp;
@property (nonatomic) UITapGestureRecognizer tapGesture;
@property (nonatomic) BOOL useEyeProtectController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <AWETeenPlayInteractionViewControllerDelegate> cellDisplayDelegate;
@property (nonatomic) <AWETeenDisplayViewControllerProtocol> videoDelegate;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) NSString albumEnterFrom;
@property (nonatomic) AWETeenExtraParamModel extraParam;
@property (nonatomic) AWETeenFeedPageContext feedPageContext;
- (id)feedPageContext;
- (void)setFeedPageContext:;
- (long long)vcType;
- (BOOL)isLandScape;
- (void)playLoadingAnimation;
- (void)setVcType:;
- (id)extraParam;
- (void)setExtraParam:;
- (double)lastClickTimestamp;
- (void)setLastClickTimestamp:;
- (BOOL)p_isVideoReady;
- (void)playerWillLoopPlaying;
- (void)trackChangeSpeedMode:;
- (void)setPlayProgressWithTime:totalDuration:model:;
- (void)updatePlayProgressWithTime:totalDuration:model:;
- (void)p_setupBind;
- (id)albumEnterFrom;
- (BOOL)didShowPanel;
- (double)currentSliderProgress;
- (void)setAlbumEnterFrom:;
- (void)willPresentPanel:;
- (void)willDismissPanel:;
- (void)didDismissPanel:;
- (BOOL)shouldShowEyeProtection:;
- (void)didUpdateSubscribeStatus:secUserID:;
- (void)p_onAwemeDiggNotification:;
- (void)setDidShowPanel:;
- (void)seekToTimeCompletion:;
- (void)playBackActionDidChange:;
- (void)initSeekEnd;
- (void)updateProgressSliderWithPlayableDuration:totalDuration:model:;
- (void)updateUIAccordingtoModel:;
- (void)setHide:animated:;
- (id)initWithVCType:;
- (void)setCellDisplayDelegate:;
- (void)interactionViewImmersiveStatusChanged:;
- (id)cellDisplayDelegate;
- (void)setHiddenInteractionView:completion:;
- (id)videoCanvasImage;
- (double)videoCanvasHeight;
- (id)currentFeedPageContext;
- (void)setInitSeekEnded:;
- (BOOL)initSeekEnded;
- (void)p_onScreenSingleClicked;
- (void)p_onScreenDoubleClicked:;
- (void)interactionViewSelectAlbumButtonClicked;
- (void)interactionViewPlaybackRateButtonClicked;
- (void)interactionViewExitLandscapeClicked;
- (void)interactionViewNextEpisodeButtonClicked;
- (void)interactionViewScreenCastButtonClicked;
- (void)interactionViewPlayButtonClicked;
- (void)progressValueChanged:currentDuration:totalDuration:;
- (void)landscapeUpdatePlaybackRate:;
- (BOOL)useEyeProtectController;
- (void)p_onScreenClicked:;
- (void)seekWithProgress:seekType:;
- (void)setUseEyeProtectController:;
- (void)setModel:;
- (void)viewWillDisappear:;
- (id)interactionView;
- (BOOL)isShowing;
- (void)dealloc;
- (void)pause:;
- (void)viewDidLoad;
- (double)progress;
- (void)setInteractionView:;
- (void)viewDidDisappear:;
- (id)model;
- (void)setContext:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)reset;
- (id)context;
- (void)setProgress:;
- (id)tapGesture;
- (void)setTapGesture:;
- (id)currentModel;
- (void)setBottomMargin:;
- (void)stopLoadingAnimation;
- (id)bottomContainer;
- (void)setBottomContainer:;
- (void)setIsShowing:;
- (void)setVideoDelegate:;
- (id)videoDelegate;
@end
