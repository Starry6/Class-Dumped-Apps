@interface AWEAlertPanelTransitionController : AWEPanelBaseTransitionController
@property (nonatomic) double presentationTransitionOffset;
@property (nonatomic) double dismissalTransitionOffset;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setPresentationTransitionOffset:;
- (void)setDismissalTransitionOffset:;
- (double)presentationTransitionOffset;
- (id)initialFrameForPresentedViewController:transitionContext:;
- (double)dismissalTransitionOffset;
- (id)finalFrameForPresentedViewController:transitionContext:;
- (id)init;
+ (Class)presentationControllerClass;
@end
