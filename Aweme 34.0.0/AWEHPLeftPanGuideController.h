@interface AWEHPLeftPanGuideController : AWEBaseController
@property (nonatomic) UIViewController<AWEAwemeConcernLeftPanGuideProtocol> concernFeedLeftPanGuideController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) {CGSize=dd} preferredContentSize;
- (void)hpSlidingViewController:willTransitionToViewController:;
- (void)hpDidStartTransitionWithContext:;
- (void)hpDidChangePercentDrivenTransitionWithContext:;
- (void)hpDidCancelPercentDrivenTransitionWithContext:;
- (void)hpDidPopDoneTransitionWithContext:;
- (double)interactionRightContainerHeight;
- (double)nextInteractionRightContainerHeight;
- (void)__initConcernLeftPanVC;
- (id)concernFeedLeftPanGuideController;
- (void)setConcernFeedLeftPanGuideController:;
- (void)__responseToPercentDrivenLeftPan:context:;
- (BOOL)isLocatedInConcernFeed;
- (BOOL)isDisplayingSkyLightViewInConcernFeed;
- (BOOL)canLeftPanGuideShow;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewWillDisappear;
@end
