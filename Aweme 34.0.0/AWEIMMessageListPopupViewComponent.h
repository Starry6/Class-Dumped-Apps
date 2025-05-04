@interface AWEIMMessageListPopupViewComponent : AWEIMComponentBase
@property (nonatomic) NSArray servicePriority;
@property (nonatomic) AWEIMEnterMessageListAlertEvent event;
@property (nonatomic) BOOL needTryShowWhenViewDidAppear;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setServicePriority:;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (void)hostVC_viewDidAppear;
- (void)didTryShowInteractiveAnimationAfterViewDidAppear;
- (void)setNeedTryShowWhenViewDidAppear:;
- (BOOL)needTryShowWhenViewDidAppear;
- (void)__tryShowPopupViewAtIndex:;
- (id)init;
- (id)servicePriority;
- (void)setEvent:;
- (void).cxx_destruct;
- (id)event;
+ (BOOL)canCreateComponentWithContext:;
@end
