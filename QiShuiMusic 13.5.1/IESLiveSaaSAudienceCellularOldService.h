@interface IESLiveSaaSAudienceCellularOldService : IESLiveGeneralBaseService
@property (nonatomic) IESLiveSaaSLiveRoomModel room;
@property (nonatomic) <IESLiveSaaSInternalRouter> internalRouter;
@property (nonatomic) <IESLiveSaaSCustomConfig> customConfig;
@property (nonatomic) <IESLiveSaaSGuideShopFactory> shopFactory;
@property (nonatomic) q currentNetStatus;
@property (nonatomic) @ noWifiAlert;
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) BOOL hadCellularAlert;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setShopFactory:;
- (void)setNoWifiAlert:;
- (void)changeToCellularNetwork;
- (void)changeToNetworkUnreachable;
- (void)changeToWifiNetwork;
- (void)checkNetworkForEnterWithCertainBlock:;
- (void)componentWillMount;
- (long long)currentNetStatus;
- (id)customConfig;
- (void)didSetAttachingDIContext;
- (void)getNetworkStatus;
- (BOOL)hadCellularAlert;
- (id)internalRouter;
- (void)monitorAudienceLoadState;
- (id)noWifiAlert;
- (void)onOrientationTransitionBegin:;
- (void)serviceDidLaunch;
- (void)setCurrentNetStatus:;
- (void)setCustomConfig:;
- (void)setHadCellularAlert:;
- (void)setInternalRouter:;
- (id)shopFactory;
- (void)showCellularNetworkAlert;
- (void)showNetworkAlertWithCertainBlock:cancelBlock:;
- (void)trackFreeFlowAlertClickCancelEvent;
- (void)trackFreeFlowAlertClickFreeEvent;
- (void)trackFreeFlowAlertClickOpenEvent;
- (void)trackFreeFlowAlertShowEvent;
- (void)trackNoWifiAlertShowEvent;
- (void)dealloc;
- (void).cxx_destruct;
+ (void)ieslivekit_register_generalServiceAction;
+ (long long)preferredLoadPhase;
+ (id)serviceActionsWithParam:;
+ (unsigned long long)serviceImmediateLoadTypes;
+ (BOOL)serviceShouldActive:;
@end
