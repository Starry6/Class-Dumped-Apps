@interface IESLiveRevenueInteractBattleDesignatedGiftViewController : IESLiveRevenueInteractPopupViewController
@property (nonatomic) <IESLiveHybridContainerFactoryAdapter> webviewFactory;
@property (nonatomic) UIView<IESHYContainerProtocol> hybridView;
@property (nonatomic) BOOL isDoubleInteract;
- (void)setupHybirdView;
- (id)hybridView;
- (id)initWithDIContext:isDoubleInteract:;
- (BOOL)isDoubleInteract;
- (void)setHybridView:;
- (void)setIsDoubleInteract:;
- (void)setWebviewFactory:;
- (id)webviewFactory;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dismissVC;
@end
