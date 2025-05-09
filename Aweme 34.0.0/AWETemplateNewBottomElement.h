@interface AWETemplateNewBottomElement : AWEPlayInteractionNewBottomElement
@property (nonatomic) AWEProviderManager providerManager;
@property (nonatomic) UIView targetView;
@property (nonatomic) NSNumber defaultPriority;
@property (nonatomic) AWETemplateBarContext barContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)viewController_willDisplay;
- (void)viewController_didEndDisplaying;
- (void)viewController_didEndDisplayingBeforeReset;
- (void)viewController_viewDidAppear;
- (void)viewController_viewDidDisappear;
- (unsigned long long)elementVisibleType;
- (void)handleElementWhenPriorityAvoid:;
- (void)viewDidChangeBreakPoint;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (void)setBarContext:;
- (id)barContext;
- (void)configWithParamDict:;
- (BOOL)shouldAppearWithData:;
- (id)aAWEFeedBottomBarDOUYINHTSAdapter;
- (void)setUpStandardClassifyView;
- (void)updateContext:interactionContext:;
- (void)viewDidLoad;
- (id)targetView;
- (id)priority;
- (id)providerManager;
- (id)identifier;
- (void)setProviderManager:;
- (void)setTargetView:;
- (void)setData:;
- (void).cxx_destruct;
- (id)videoDuration;
- (double)currentPlaybackTime;
- (void)reset;
- (id)defaultPriority;
- (void)setDefaultPriority:;
+ (Class)aAWEFeedBottomBarDOUYINHTSAdapterClass;
@end
