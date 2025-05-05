@interface IESLiveRevenueInteractTitleIconViewController : IESLiveRevenueInteractPopupViewController
@property (nonatomic) <IESLiveHybridContainerFactoryAdapter> webviewFactory;
@property (nonatomic) UIView<IESHYContainerProtocol> hybridView;
@property (nonatomic) NSString schemaURL;
- (void)setupHybridView;
- (void)dismissVc;
- (id)hybridView;
- (id)initWithDIContext:schemaURL:;
- (id)schemaURL;
- (void)setHybridView:;
- (void)setSchemaURL:;
- (void)setWebviewFactory:;
- (id)webviewFactory;
- (void).cxx_destruct;
- (void)viewDidLoad;
@end
