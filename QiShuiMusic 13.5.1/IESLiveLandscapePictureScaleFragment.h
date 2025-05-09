@interface IESLiveLandscapePictureScaleFragment : IESLiveRoomComponent
@property (nonatomic) IESLandscapePictureScaleStore store;
@property (nonatomic) UIPinchGestureRecognizer pinchGesture;
@property (nonatomic) UIPanGestureRecognizer panGesture;
@property (nonatomic) UIButton resetButton;
@property (nonatomic) <IESLiveLandscapePictureScaleAction> notifier;
@property (nonatomic) BOOL isComponentsHide;
@property (nonatomic) IESLivePictureScaleGuideView guideView;
@property (nonatomic) double enlargeStart;
@property (nonatomic) float enlargeRatio;
@property (nonatomic) float previousEnlargeRatio;
@property (nonatomic) float movex;
@property (nonatomic) float movey;
@property (nonatomic) BOOL hasEnlarge;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)portraitViewsTransformToHidden:;
- (void)componentCreate;
- (void)bindStore;
- (void)componentBindService;
- (void)componentMount;
- (void)componentOrientationTransitionBegin:;
- (void)componentUnmount;
- (id)curEnlargeRatioNum;
- (double)currentPictureScale;
- (void)didChangePictureSetting;
- (float)enlargeRatio;
- (double)enlargeStart;
- (BOOL)hasEnlarge;
- (void)hideAllComponent;
- (BOOL)isComponentsHide;
- (BOOL)isScreenHeightLessThan812;
- (void)landscapeViewsTransformToHidden:;
- (id)moveXDistance;
- (id)moveYDistance;
- (float)movex;
- (float)movey;
- (void)onPan:;
- (float)previousEnlargeRatio;
- (id)previousEnlargeRatioNum;
- (void)resetButtonClick:;
- (void)resetRecordedIfNeed:;
- (void)scaleStatusChange;
- (void)setEnlargeRatio:;
- (void)setEnlargeStart:;
- (void)setHasEnlarge:;
- (void)setIsComponentsHide:;
- (void)setMovex:;
- (void)setMovey:;
- (void)setPreviousEnlargeRatio:;
- (BOOL)shouldActivatePanGesture;
- (BOOL)shouldActivatePinchGesture;
- (BOOL)shouldShowResetButton;
- (BOOL)shouldShowViceViewInLandscapeGameRoom;
- (void)showAllComponent;
- (void)showScaleGesGuide;
- (void)updatePictureScale:;
- (void)vsTrackEvent:extraParams:;
- (void)willHideAllComponent;
- (id)pinchGesture;
- (void)setStore:;
- (void)setPinchGesture:;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (id)notifier;
- (void)setNotifier:;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:;
- (id)store;
- (id)panGesture;
- (void)setPanGesture:;
- (void)setupUI;
- (id)resetButton;
- (void)setResetButton:;
- (void)setupGestures;
- (void)onPinch:;
- (void)setGuideView:;
- (id)guideView;
+ (BOOL)isMixed;
+ (BOOL)componentShouldActive:;
@end
