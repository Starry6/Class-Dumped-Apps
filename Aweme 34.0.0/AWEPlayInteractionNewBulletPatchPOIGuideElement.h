@interface AWEPlayInteractionNewBulletPatchPOIGuideElement : AWEPlayInteractionNewBottomElement
@property (nonatomic) AWEFeedBulletPatchPoiGuideAnchorView bulletPatchPOIGuideView;
@property (nonatomic) AWEPlayInteractionBulletPatchPOIElementViewModel viewModel;
- (void)initializeElement;
- (void)viewController_willDisplay;
- (unsigned long long)elementVisibleType;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (id)aAWEFeedModuleServiceDOUYINSSAdapter;
- (BOOL)shouldAppearWithData:;
- (void)updatePatchPoiGuideAnchorView:fromInitialize:;
- (id)bulletPatchPOIGuideView;
- (void)setBulletPatchPOIGuideView:;
- (BOOL)shouldShowBulletPatchPoiGuideAnchorView:;
- (BOOL)shouldShowBulletScreen:;
- (void)userDidTapPatchPoiGuide;
- (void)userDidTapClosePatchPoiGuide;
- (id)viewModel;
- (void)viewDidLoad;
- (id)identifier;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)reset;
+ (Class)aAWEFeedModuleServiceDOUYINSSAdapterClass;
@end
