@interface IESECTabKitLynxTopTabComponent : IESECTabKitLynxCardComponent
@property (nonatomic) IESECServiceProxy<IESECTabKitDataService> dataService;
@property (nonatomic) IESECServiceProxy<IESECTabKitLayoutService> layoutService;
@property (nonatomic) IESECServiceProxy<IESECTabKitEventService><IESECTabKitEventSubscriber> eventService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) IESECTabKitDIContext tabKitCtx;
- (void)setDataService:;
- (void)componentDidLoad;
- (id)dataService;
- (void)didSetTabKitCtx:;
- (void)fallbackToNAComponent:;
- (void)iesectabkit_didMoveToTabItem:moveType:;
- (void)iesectabkit_didUpdateScreenState:;
- (void)initLynxCardModel;
- (id)layoutService;
- (void)lynxCard:sizeDidChanged:;
- (void)setLayoutService:;
- (void)setupBindgs;
- (id)init;
- (void)setEventService:;
- (void).cxx_destruct;
- (id)eventService;
- (void)setupViews;
+ (BOOL)componentShouldLoadWithContext:;
+ (unsigned long long)componentType;
@end
