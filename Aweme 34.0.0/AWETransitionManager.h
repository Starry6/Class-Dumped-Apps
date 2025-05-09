@interface AWETransitionManager : NSObject
@property (nonatomic) NSMutableArray registeredPatterns;
@property (nonatomic) UIViewController fromViewController;
@property (nonatomic) UIViewController toViewController;
@property (nonatomic) @ fromContextProvider;
@property (nonatomic) @ toContextProvider;
@property (nonatomic) NSString nextContextProviderClassName;
@property (nonatomic) Q transitionType;
@property (nonatomic) AWETransitionContext precalculatedContext;
@property (nonatomic) AWETransitionContext currentContext;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) q lastPanGestureState;
@property (nonatomic) @? delayEndPercentageDriveBlock;
@property (nonatomic) UIViewController currentFromViewController;
@property (nonatomic) UIViewController currentToViewController;
@property (nonatomic) @ currentFromContextProvider;
@property (nonatomic) @ currentToContextProvider;
@property (nonatomic) BOOL animating;
@property (nonatomic) BOOL enablePopTransitionFix;
@property (nonatomic) BOOL enableCancelPanFix;
@property (nonatomic) BOOL enableTransitionPatternsMatchOpt;
@property (nonatomic) BOOL enableClearSessionFix;
@property (nonatomic) BOOL enableFinishPanCompletionFix;
@property (nonatomic) BOOL enableAccessNavWhenDeallocFix;
@property (nonatomic) UIViewController lastestNavigationControllerCaller;
@property (nonatomic) <UIViewControllerAnimatedTransitioning> currentAnimationController;
@property (nonatomic) <UIViewControllerInteractiveTransitioning> currentInteractionController;
@property (nonatomic) <UIViewControllerContextTransitioning> currentTransitioningContext;
@property (nonatomic) @? gestureShouldBeginBlock;
@property (nonatomic) @? transitionDidBeginBlock;
@property (nonatomic) @? transitionDidEndBlock;
@property (nonatomic) @? transitionRestoreBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)notifyFromContextProvider:;
- (void)notifyNextTransitionProviderClassName:;
- (void)notifyToContextProvider:;
- (id)currentAnimationController;
- (void)tryToCancelPinchTransitionWithFromProtocol:;
- (double)scaleThresholdForPatternType:;
- (void)notifyTransitionFromViewController:toViewController:withTransitionType:;
- (id)toContextProvider;
- (void)registerWithFromProtocol:toProtocol:contextProvider:typeMask:interactionMask:;
- (unsigned long long)directionForPan:;
- (id)fromContextProvider;
- (void)setFromViewController:;
- (id)currentFromViewController;
- (id)currentTransitioningContext;
- (void)notifyExternalTransitionAnimatingDidEnd;
- (void)setFromContextProvider:;
- (void)setToContextProvider:;
- (void)setEnableCancelPanFix:;
- (id)currentToViewController;
- (void)setGestureShouldBeginBlock:;
- (void)setTransitionDidBeginBlock:;
- (void)setTransitionDidEndBlock:;
- (id)currentToContextProvider;
- (id)currentFromContextProvider;
- (void)notifyExternalTransitionAnimatingDidStart;
- (void)setRegisteredPatterns:;
- (id)registeredPatterns;
- (id)gestureShouldBeginBlock;
- (void)setEnableTransitionPatternsMatchOpt:;
- (void)setEnableClearSessionFix:;
- (void)setEnableFinishPanCompletionFix:;
- (void)setEnableAccessNavWhenDeallocFix:;
- (void)setCurrentTransitioningContext:;
- (void)setToViewController:;
- (id)possiblePatternsForContext:;
- (BOOL)panGestureRecognizerShouldBegin:;
- (BOOL)pinchGestureRecognizerShouldBegin:;
- (void)setPrecalculatedContext:;
- (BOOL)enableTransitionPatternsMatchOpt;
- (id)nextContextProviderClassName;
- (id)candidatePatternsWithRegisteredPatterns:context:;
- (void)notifyAnimation:;
- (id)transitionDidBeginBlock;
- (id)transitionDidEndBlock;
- (id)precalculatedContext;
- (double)progressForDirection:startLocation:currentLocation:;
- (id)vectorForDirection:;
- (BOOL)enablePopTransitionFix;
- (long long)lastPanGestureState;
- (void)handleEndPercentageDrive:shouldComplete:;
- (BOOL)shouldDelayEndPercentageDrive;
- (void)setDelayEndPercentageDriveBlock:;
- (void)finishPanAnimation;
- (void)cancelPanAnimation;
- (void)setLastPanGestureState:;
- (BOOL)enableFinishPanCompletionFix;
- (BOOL)enableCancelPanFix;
- (void)setCurrentAnimationController:;
- (void)setCurrentInteractionController:;
- (void)setNextContextProviderClassName:;
- (id)delayEndPercentageDriveBlock;
- (double)progressForPatternType:currentScale:;
- (void)finishPinchAnimation;
- (void)cancelPinchAnimation;
- (unsigned long long)zoomTypeForPinch:;
- (void)cancelOrFinishPinchAnimation:;
- (double)scrollDistanceForDirection:startLocation:currentLocation:;
- (void)setEnablePopTransitionFix:;
- (BOOL)enableClearSessionFix;
- (BOOL)enableAccessNavWhenDeallocFix;
- (id)lastestNavigationControllerCaller;
- (void)setLastestNavigationControllerCaller:;
- (id)transitionRestoreBlock;
- (void)setTransitionRestoreBlock:;
- (void)setTransitionType:;
- (unsigned long long)transitionType;
- (id)init;
- (id)currentContext;
- (void)dealloc;
- (id)fromViewController;
- (BOOL)gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:;
- (BOOL)gestureRecognizerShouldBegin:;
- (BOOL)isAnimating;
- (void)setCurrentContext:;
- (void).cxx_destruct;
- (id)toViewController;
- (void)setIsAnimating:;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (BOOL)animating;
- (id)currentInteractionController;
- (void)clearSession;
- (void)handlePinchGesture:;
- (void)handlePanGesture:;
+ (void)runOnceForLazyRegister;
+ (id)sharedInstance;
@end
