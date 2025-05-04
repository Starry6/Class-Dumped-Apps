@interface AWEPlayInteractionGoodsCardElement : AWEPlayInteractionLeftElement
@property (nonatomic) UIView<AWEFeedGoodsElementProtocol> goodsCardView;
@property (nonatomic) NSObject<AWEECGoodsCardDataControllerProtocol> goodsCardDataController;
@property (nonatomic) UIViewController<AWEECPopoverContainerProtocol> popoverContainerVC;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)viewController_willDisplay;
- (void)viewController_viewDidAppear;
- (id)goodsCardDataController;
- (void)setAppear:;
- (void)showGoodsPanel;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (id)goodsCardView;
- (void)setGoodsCardView:;
- (void)trackProductEntranceClick;
- (void)setGoodsCardDataController:;
- (void)setPopoverContainerVC:;
- (id)popoverContainerVC;
- (void)trackProductEntranceShow;
- (void)viewDidLoad;
- (void).cxx_destruct;
+ (id)activateInfoWithContext:;
+ (BOOL)shouldActiveWithModel:context:;
@end
