@interface AWEIMMessageTabPopupViewComponent : AWEIMComponentBase
@property (nonatomic) NSArray popupComponents;
@property (nonatomic) <AWEIMMessageTabNaviBubbleInterface> naviGuideService;
@property (nonatomic) BOOL blockedBySplash;
@property (nonatomic) BOOL hasShowingDBPopup;
@property (nonatomic) AWEIMEnterMessageTabAlertEvent event;
@property (nonatomic) BOOL enableDBRepairTopPriority;
@property (nonatomic) BOOL canTrace;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) AWEIMComponentManager componentManager;
- (id)componentContext;
- (id)componentsNameArrayWithContext:;
- (void)setComponentManager:;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (void)hostVC_viewDidAppear;
- (BOOL)isSomePopupViewDisplaying;
- (void)somePopupViewDidShown:;
- (BOOL)canLimitPopupViewWithComponent:;
- (void)setNaviGuideService:;
- (id)naviGuideService;
- (void)setCanTrace:;
- (void)setEnableDBRepairTopPriority:;
- (BOOL)enableDBRepairTopPriority;
- (BOOL)canTrace;
- (void)setPopupComponents:;
- (void)p_didSplashDisappear:;
- (void)setHasShowingDBPopup:;
- (void)p_showPopupViewIfNeeded;
- (id)popupComponents;
- (BOOL)hasShowingDBPopup;
- (void)setBlockedBySplash:;
- (void)p_showPopupViewIfNeededFromContinueIndex:;
- (id)messageTabPopupLimitDict;
- (BOOL)blockedBySplash;
- (void)setEvent:;
- (void).cxx_destruct;
- (id)event;
- (id)componentManager;
@end
