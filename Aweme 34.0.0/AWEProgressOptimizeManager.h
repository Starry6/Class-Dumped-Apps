@interface AWEProgressOptimizeManager : NSObject
@property (nonatomic) q currentState;
@property (nonatomic) q currentBattery;
@property (nonatomic) BOOL isPowering;
@property (nonatomic) BOOL lowPowerResumeActivited;
@property (nonatomic) BOOL hotResumeActivited;
@property (nonatomic) AWEAwemeModel currentAweme;
@property (nonatomic) UIView<AWEFeedProgressSliderProtocol> currentSlider;
@property (nonatomic) UIView currentInteractionView;
@property (nonatomic) AWEMaskWindow currentMaskWindow;
@property (nonatomic) BOOL currentSliderIsShowing;
@property (nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol> currentInteractionViewController;
@property (nonatomic) NSString groupIDForFalseTouch;
@property (nonatomic) NSString authorIDForFalseTouch;
@property (nonatomic) NSString referStringForFalseTouch;
@property (nonatomic) double enterTimeForFalseTouch;
@property (nonatomic) NSString tabIDForFalseTouch;
@property (nonatomic) NSString privioudTabIDForFalseTouch;
@property (nonatomic) NSString musicGroupIDForFalseTouch;
@property (nonatomic) NSString musicAuthorIDForFalseTouch;
@property (nonatomic) NSString musicReferStringForFalseTouch;
@property (nonatomic) double musicEnterTimeForFalseTouch;
@property (nonatomic) NSString descriptionGroupIDForFalseTouch;
@property (nonatomic) NSString descriptionAuthorIDForFalseTouch;
@property (nonatomic) NSString descriptionReferStringForFalseTouch;
@property (nonatomic) double descriptionEnterTimeForFalseTouch;
@property (nonatomic) NSString detailGroupIDForFalseTouch;
@property (nonatomic) NSString detailAuthorIDForFalseTouch;
@property (nonatomic) NSString detailReferStringForFalseTouch;
@property (nonatomic) double detailEnterTimeForFalseTouch;
@property (nonatomic) BOOL enableIMDynamicLibraryLoadOpt;
@property (nonatomic) BOOL tempAreaIsLongPressHotZoneForOthers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)currentAweme;
- (id)aAWEPadModuleAdapter;
- (void)recordDetailCoverClickedWithAweme:referString:commentInputViewExternScene:commentInputViewPosition:;
- (void)trackDetailCoverFalseTouchIfNeedWithAweme:referString:commentInputViewExternScene:commentInputViewPosition:;
- (void)resetDetailCoverFalseTouchIfNeedWithAweme:referString:commentInputViewExternScene:commentInputViewPosition:;
- (void)setCurrentAweme:;
- (void)windowFakeGestureTriggered:;
- (id)aAWEPlayInteractionAdapter;
- (void)enterBottomTabChannelWithTabId:enterModel:;
- (void)leaveBottomTabChannelWithTabId:leaveModel:;
- (void)enterPublishEntrance;
- (void)leavePublishEntrance;
- (BOOL)enableIMDynamicLibraryLoadOpt;
- (void)setEnableIMDynamicLibraryLoadOpt:;
- (void)trackMusicCoverFalseTouchIfNeedWithAweme:referString:;
- (void)resetMusicCoverFalseTouchIfNeedWithAweme:referString:;
- (void)onBatteryStateChange;
- (void)onThermalStateChange:;
- (void)onBatteryLevelChange;
- (BOOL)shouldResumeHot;
- (BOOL)shouldResumeLowPower;
- (void)setIsDisplaying:currentSlider:;
- (BOOL)isInTopVC;
- (void)resetGestureDelegateIfNeed;
- (void)setToWindowsGestureIfNeed:progress:model:interactionView:referString:currentInteractionVC:;
- (void)setTempAreaIsLongPressHotZoneForOthers:;
- (void)setReferStringForFalseTouch:;
- (id)referStringForFalseTouch;
- (void)resetDescriptionFalseTouchIfNeedWithAweme:referString:;
- (void)trackDescriptionFalseTouchIfNeedWithAweme:referString:;
- (void)recordDescriptionClickedWithAweme:referString:;
- (void)recordMusicCoverClickedWithAweme:referString:;
- (void)setupResumeDataIfNeeded;
- (void)setCurrentBattery:;
- (void)setIsPowering:;
- (void)refreshHotResume;
- (void)refreshLowPowerResume;
- (BOOL)isPowering;
- (void)setLowPowerResumeActivited:;
- (long long)currentBattery;
- (void)setHotResumeActivited:;
- (BOOL)hotResumeActivited;
- (BOOL)lowPowerResumeActivited;
- (BOOL)tempAreaIsLongPressHotZoneForOthers;
- (void)setTabIDForFalseTouch:;
- (void)setGroupIDForFalseTouch:;
- (void)setAuthorIDForFalseTouch:;
- (void)setPrivioudTabIDForFalseTouch:;
- (void)setMusicGroupIDForFalseTouch:;
- (void)setMusicAuthorIDForFalseTouch:;
- (void)setMusicReferStringForFalseTouch:;
- (void)setMusicEnterTimeForFalseTouch:;
- (id)musicGroupIDForFalseTouch;
- (id)musicReferStringForFalseTouch;
- (double)musicEnterTimeForFalseTouch;
- (id)musicAuthorIDForFalseTouch;
- (void)p_resetMusicCoverFalseTouch;
- (BOOL)p_enableDetailCoverSceneWithReferString:aweme:commentInputViewExternScene:commentInputViewPosition:;
- (void)setDetailGroupIDForFalseTouch:;
- (void)setDetailAuthorIDForFalseTouch:;
- (void)setDetailReferStringForFalseTouch:;
- (void)setDetailEnterTimeForFalseTouch:;
- (id)detailGroupIDForFalseTouch;
- (id)detailReferStringForFalseTouch;
- (double)detailEnterTimeForFalseTouch;
- (id)detailAuthorIDForFalseTouch;
- (void)p_resetDetailCoverFalseTouch;
- (void)setDescriptionGroupIDForFalseTouch:;
- (void)setDescriptionAuthorIDForFalseTouch:;
- (void)setDescriptionReferStringForFalseTouch:;
- (void)setDescriptionEnterTimeForFalseTouch:;
- (id)descriptionGroupIDForFalseTouch;
- (id)descriptionReferStringForFalseTouch;
- (double)descriptionEnterTimeForFalseTouch;
- (id)descriptionAuthorIDForFalseTouch;
- (void)p_resetDescriptionFalseTouch;
- (void)setEnterTimeForFalseTouch:;
- (id)tabIDForFalseTouch;
- (id)privioudTabIDForFalseTouch;
- (double)enterTimeForFalseTouch;
- (id)groupIDForFalseTouch;
- (id)authorIDForFalseTouch;
- (void)resetProgressFalseTouch;
- (id)currentMaskWindow;
- (void)setCurrentMaskWindow:;
- (void)setCurrentSlider:;
- (void)setCurrentInteractionView:;
- (void)setCurrentInteractionViewController:;
- (void)setCurrentSliderIsShowing:;
- (BOOL)checkIsAvailable;
- (id)currentSlider;
- (id)currentInteractionView;
- (BOOL)currentSliderIsShowing;
- (id)currentInteractionViewController;
- (void)setCurrentState:;
- (id)init;
- (void)dealloc;
- (BOOL)gestureRecognizerShouldBegin:;
- (long long)currentState;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPlayInteractionAdapterClass;
+ (BOOL)progressDragHideBottomBar;
+ (BOOL)enableProgressGestureOnDetailCommentView;
+ (void)registSelfToHPLifeCycleIfNeed;
+ (double)fastSpeedHotAreaPercent;
+ (double)sliderThumbLeftRightOffset;
+ (double)sliderThumbTopOffset;
+ (BOOL)enableProgressAnimation;
+ (BOOL)hideProgressWhileDrag;
+ (BOOL)enableProgressRefactor;
+ (BOOL)enableFixProgress;
+ (BOOL)enableProgressSliderRenderOpt;
+ (BOOL)enableFixClickPorgressBarTrackFalse;
+ (void)setIsProgressSliding:;
+ (BOOL)isShowingPanelsWithViewController:dispatcherManager:;
+ (void)calculateProgressSliderHotZoneWithFrame:awemeModel:isPause:referString:down:up:bottomElement:;
+ (id)progressHozeZoneArea;
+ (id)progressNewHotZone;
+ (BOOL)shouldChangeHotZoneWithBottomBar:;
+ (BOOL)enableProgressHigher;
+ (double)getRealMinColorAlphaWithOriginAlpha:maximumAlpha:;
+ (BOOL)enableProgressLighter;
+ (BOOL)enableProgressDotBigger;
+ (id)getOptimizedProgressIconImageWithAlphaType:;
+ (BOOL)referStringIsReadyForLongPressProgress:;
+ (BOOL)areaEnableLongPressProgressWithProgressFrame:point:referString:enterFrom:;
+ (BOOL)shouldOptimizeBottomBarGesture;
+ (BOOL)enableProgressRangeSlide;
+ (BOOL)enableProgressFalseTouch;
+ (BOOL)areaIsLongPressHotZoneForOthers:model:referString:;
+ (double)getProgressUpdateMinOffset;
+ (BOOL)enableFixProgressGestureRecognizeShouldBegin;
+ (BOOL)shouldPreferLowFrame;
+ (BOOL)isEmoticonPanelShowingOnIMFeedDetailViewWithViewController:;
+ (id)classLowerListForWindowsGesture;
+ (id)getImageWithColor:;
+ (id)progressUIOptDict;
+ (id)progressRefactorTestDict;
+ (long long)hotResumeType;
+ (long long)lowPowerResumeTarget;
+ (id)progressFalseTouchEnableTabDict;
+ (BOOL)isProgressSliding;
+ (id)classPriorityListForWindowsGesture;
+ (id)sharedInstance;
@end
