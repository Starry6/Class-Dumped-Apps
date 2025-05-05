@interface IESECStoreFloatLynxContainerController : IESECRelationController
@property (nonatomic) IESECRelationFloatLynxContainerController lynxController;
@property (nonatomic) IESECServiceProxy<IESECShopDataService> dataService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDataService:;
- (void)controllerDidLoad;
- (id)dataService;
- (void)didAddMarketSDKLynxContainer:;
- (void)didFinishLoadFloatLynxContainer:;
- (id)lynxController;
- (void)p_subscribeXBridgeEvent;
- (void)p_unSubscribeXBridgeEvent;
- (void)setLynxController:;
- (void)setupBinding;
- (void)setupBindingV2;
- (void)switchToTab:shopID:params:passThroughAPI:;
- (void)updateActivityDynamicModel:;
- (void)viewDidDisappear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)viewDidLoad;
+ (BOOL)controllerShouldLoadWithPageContextV2:;
@end
