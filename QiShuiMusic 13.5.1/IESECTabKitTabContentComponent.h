@interface IESECTabKitTabContentComponent : NSObject
@property (nonatomic) IESECServiceProxy<IESECTabKitDataService> dataService;
@property (nonatomic) IESECServiceProxy<IESECTabKitLayoutService> layoutService;
@property (nonatomic) IESECServiceProxy<IESECTabKitHybridService> hybridService;
@property (nonatomic) IESECServiceProxy<IESECTabKitMonitorService> monitorService;
@property (nonatomic) IESECServiceProxy<IESECTabKitEventService><IESECTabKitEventSubscriber> eventService;
@property (nonatomic) IESECServiceProxy<IESECTabKitAbilityService> abilityService;
@property (nonatomic) IESECSlidingTabContainerView tabContentView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) IESECTabKitDIContext tabKitCtx;
- (BOOL)enableReloadOpt;
- (void)setDataService:;
- (id)abilityService;
- (void)componentDidLoad;
- (id)dataService;
- (id)hybridService;
- (id)layoutService;
- (id)monitorService;
- (long long)numberOfTabViewElementsInTabContainer:;
- (void)setAbilityService:;
- (void)setHybridService:;
- (void)setLayoutService:;
- (void)setMonitorService:;
- (void)setTabContentView:;
- (void)setTabKitCtx:;
- (void)setupBindings;
- (void)tabContainer:cancelMoveToIndex:withTabElement:;
- (void)tabContainer:didMoveToIndex:withTabElement:;
- (id)tabContainer:tabViewElementForIndex:;
- (void)tabContainer:willMoveToIndex:withTabElement:;
- (id)tabContentView;
- (id)tabKitCtx;
- (void)triggerLayoutAnimated:;
- (void)setEventService:;
- (void)scrollViewDidScroll:;
- (void).cxx_destruct;
- (id)eventService;
- (id)componentView;
+ (unsigned long long)componentType;
@end
