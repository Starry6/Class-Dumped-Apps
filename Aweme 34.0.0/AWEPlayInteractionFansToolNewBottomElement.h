@interface AWEPlayInteractionFansToolNewBottomElement : AWEPlayInteractionNewBottomElement
@property (nonatomic) AWEPlayInteractionFansToolUtilityBottomView utilityView;
- (unsigned long long)elementVisibleType;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (BOOL)shouldAppearWithData:;
- (void)trackFansToolBarShowEvent;
- (void)trackFansToolBarClickEvent;
- (void)setUtilityView:;
- (void)viewDidLoad;
- (id)identifier;
- (void).cxx_destruct;
- (id)utilityView;
- (void)willDisplay;
- (void)tapHandler:;
@end
