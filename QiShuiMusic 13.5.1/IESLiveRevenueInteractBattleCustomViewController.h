@interface IESLiveRevenueInteractBattleCustomViewController : IESLiveRevenueInteractPopupViewController
@property (nonatomic) <IESLiveHybridContainerFactoryAdapter> webviewFactory;
@property (nonatomic) UIView<IESHYContainerProtocol> hybridView;
- (void)setupHybirdView;
- (void)dismissVc;
- (id)hybridView;
- (void)setHybridView:;
- (void)setWebviewFactory:;
- (id)webviewFactory;
- (void).cxx_destruct;
- (void)viewDidLoad;
@end
