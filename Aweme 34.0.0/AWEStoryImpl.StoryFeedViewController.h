@interface AWEStoryImpl.StoryFeedViewController : AWEStoryKit.StoryKitViewController
@property (nonatomic) <AWEStoryFeedViewControllerDelegate> delegate;
@property (nonatomic) UIViewController destinationViewController;
- (BOOL)currentVCIsActive;
- (BOOL)transition_gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (unsigned long long)zoomTransitionAllowedTriggerDirection;
- (BOOL)zoomTransitionWantsRemoveSpringAnimation;
- (long long)zoomTransitionItemOffset;
- (BOOL)zoomTransitionShouldAnimateWithTransform;
- (BOOL)transition_shouldStartInteractiveTranstionToVC:;
- (void)customLayoutCollectionView:;
- (id)layoutForCollectionView;
- (id)sectionControllerClassArray;
- (id)currentDisplayingAweme;
- (void)setDestinationViewController:;
- (id)retrieveCollectionView;
- (void)registerTrackerService:;
- (id)delegate;
- (void)viewDidLoad;
- (id)initWithNibName:bundle:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)initWithCoder:;
- (id)destinationViewController;
- (void)setupCollectionView:;
@end
