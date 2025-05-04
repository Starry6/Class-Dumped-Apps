@interface AWECommercialHomeComponent : AWEUserHomeBaseComponent
@property (nonatomic) AWEFeature<AWEEnterpriseProfileTabProtocol> companyHomepageVCFeature;
@property (nonatomic) AWEFeature<AWEEnterpriseProfileTabProtocol> aggregationVCFeature;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tabHelper;
- (long long)currentSelectedIndex;
- (id)tabListViewController;
- (void)onDidSelectTabListIndex:actionType:hasRedDotWhenSwitched:needTrack:;
- (id)companyHomepageVCFeature;
- (id)aggregationVCFeature;
- (id)commonEnterpriseTrackDict;
- (void)p_reloadEnterpriseTheme;
- (void)handleBridgeBroadcast:;
- (id)padService;
- (id)supportTabTypes;
- (id)tabViewControllerForType:;
- (void)onResetUI;
- (void)setAggregationVCFeature:;
- (void)setCompanyHomepageVCFeature:;
- (BOOL)ifGestureRecognizer:shouldReceiveTouch:;
- (id)user;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)onInit;
@end
