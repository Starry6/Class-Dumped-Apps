@interface IESECShopStateService : IESECShopService
@property (nonatomic) IESECServiceProxy<IESECShopDataService> dataService;
@property (nonatomic) IESECServiceProxy<IESECShopEventService> eventService;
@property (nonatomic) IESECServiceProxy<IESECShopLayoutService> layoutService;
@property (nonatomic) IESECServiceProxy<IESECShopForwardCoService> forwardCoService;
@property (nonatomic) Q modal;
@property (nonatomic) Q screenState;
@property (nonatomic) Q themeType;
@property (nonatomic) Q headerType;
@property (nonatomic) IESECShopTabModel preTabModel;
@property (nonatomic) IESECShopTabModel currentTabModel;
@property (nonatomic) IESECShopTabModel currentBottomTabModel;
@property (nonatomic) BOOL headerSwitching;
@property (nonatomic) BOOL shouldShowHeaderLiveFusion;
@property (nonatomic) BOOL shouldShowHeaderLive;
@property (nonatomic) BOOL shouldShowHeaderVideo;
@property (nonatomic) @? headerSwitchAction;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)currentTabModel;
- (BOOL)headerSwitching;
- (void)resetHeaderType;
- (void)setDataService:;
- (void)setPreTabModel:;
- (void)configRouterParams:;
- (id)currentBottomTabModel;
- (id)dataService;
- (id)forwardCoService;
- (id)headerSwitchAction;
- (id)layoutService;
- (id)preTabModel;
- (void)setCurrentBottomTabModel:;
- (void)setCurrentTabModel:;
- (void)setForwardCoService:;
- (void)setHeaderSwitchAction:;
- (void)setLayoutService:;
- (void)setupInitalHeaderType;
- (BOOL)shouldShowHeaderLive;
- (BOOL)shouldShowHeaderLiveFusion;
- (BOOL)shouldShowHeaderVideo;
- (void)switchHeaderType:;
- (BOOL)switchThemeType:;
- (unsigned long long)headerType;
- (void)setEventService:;
- (unsigned long long)themeType;
- (void).cxx_destruct;
- (id)eventService;
- (unsigned long long)modal;
- (void)setModal:;
- (unsigned long long)screenState;
- (void)setScreenState:;
@end
