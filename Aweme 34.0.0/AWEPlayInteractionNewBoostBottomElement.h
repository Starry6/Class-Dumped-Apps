@interface AWEPlayInteractionNewBoostBottomElement : AWEPlayInteractionNewBottomElement
@property (nonatomic) AWEPlayInteractionNearbyUtilityBottomView utilityView;
- (void)viewController_willDisplay;
- (unsigned long long)elementVisibleType;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (BOOL)shouldAppearWithData:;
- (void)trackBoostBarShowEvent;
- (void)trackBoostBarClickEvent;
- (void)setUtilityView:;
- (void)viewDidLoad;
- (id)identifier;
- (void).cxx_destruct;
- (id)utilityView;
- (void)tapHandler:;
@end
