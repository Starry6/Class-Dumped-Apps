@interface IESLiveChargeViewConsumeDSComponent : UIView
@property (nonatomic) <IESLiveWebViewService> webViewService;
@property (nonatomic) UIView<IESHYContainerProtocol> hybridContainer;
@property (nonatomic) double width;
@property (nonatomic) IESLiveChargeViewModel viewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)pageInitialData;
- (id)hybridContainer;
- (void)loadHybridContainerWithFrame:;
- (void)setHybridContainer:;
- (void)setWebViewService:;
- (void)updateViewModel:;
- (id)webViewService;
- (void)reload;
- (id)viewModel;
- (id)initWithWidth:;
- (void)setWidth:;
- (double)width;
- (void).cxx_destruct;
- (void)setViewModel:;
- (id)pageURL;
- (void)setupUI;
- (double)viewHeight;
@end
