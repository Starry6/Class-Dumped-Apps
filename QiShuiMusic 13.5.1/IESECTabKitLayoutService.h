@interface IESECTabKitLayoutService : IESECTabKitService
@property (nonatomic) IESECTabKitBFFUIConfig uiConfig;
@property (nonatomic) IESECServiceProxy<IESECTabKitEventService><IESECTabKitEventSubscriber> eventService;
@property (nonatomic) UIView<IESECSlidingTabbarProtocol> relatedTabBar;
@property (nonatomic) UIView rootView;
@property (nonatomic) UIView containerView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configUI:;
- (id)relatedTabBar;
- (void)setRelatedTabBar:;
- (void)setUiConfig:;
- (void)triggerLayoutAnimated:;
- (id)uiConfig;
- (id)containerView;
- (void)setContainerView:;
- (void)setEventService:;
- (void).cxx_destruct;
- (id)eventService;
- (id)rootView;
- (void)setRootView:;
@end
