@interface AWEPlayInteractionNearbyFollowGuideElement : AWEPlayInteractionBaseActionButtonElement
@property (nonatomic) AWEPlayInteractionNearbyFollowGuideView followView;
@property (nonatomic) AWEPlayInteractionNearbyFollowGuideViewModel viewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)initializeElement;
- (void)viewController_willDisplay;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (void)dynamicWidthRemakeLayout;
- (void)viewDidDisposed;
- (void)hideView;
- (id)followView;
- (void)setFollowView:;
- (BOOL)shouldActivateButtonWithData:;
- (void)switchToFollowedStatus;
- (void)switchToUnfollowedStatus;
- (BOOL)shouldShowNearbyFollowGuide;
- (id)viewModel;
- (void)viewDidLoad;
- (void)setViewModel:;
- (void).cxx_destruct;
+ (BOOL)shouldActiveWithModel:context:;
@end
