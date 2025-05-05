@interface IESIMAlertPanelTransitionController : IESIMPanelBaseTransitionController
@property (nonatomic) double presentationTransitionOffset;
@property (nonatomic) double dismissalTransitionOffset;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)dismissalTransitionOffset;
- (id)finalFrameForPresentedViewController:transitionContext:;
- (id)initialFrameForPresentedViewController:transitionContext:;
- (double)presentationTransitionOffset;
- (void)setDismissalTransitionOffset:;
- (void)setPresentationTransitionOffset:;
- (id)init;
+ (Class)presentationControllerClass;
@end
