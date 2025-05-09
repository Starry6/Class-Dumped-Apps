@interface AWEEcomSearchTabBar : UIView
@property (nonatomic) NSMutableArray items;
@property (nonatomic) NSArray tabList;
@property (nonatomic) q selectedIndex;
@property (nonatomic) UIScrollView scrollView;
@property (nonatomic) AWEEcomSearchTabBarConfig config;
@property (nonatomic) <AWEEcomSearchTabBarDelegate> delegate;
@property (nonatomic) BOOL scrollEnabled;
@property (nonatomic) q interactionState;
@property (nonatomic) @? interactiveTransitionBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tabList;
- (void)setTabList:;
- (void)tabButtonClicked:;
- (void)onButtonAccessibilityFocus:;
- (id)initWithFrame:tabList:config:;
- (void)updateScrollViewScrollEnable;
- (id)interactiveTransitionBlock;
- (void)setInteractiveTransitionBlock:;
- (void)setScrollEnabled:;
- (void)setConfig:;
- (long long)interactionState;
- (void)setScrollView:;
- (void)setSelectedIndex:;
- (id)items;
- (id)delegate;
- (void)setItems:;
- (id)config;
- (BOOL)scrollEnabled;
- (id)scrollView;
- (long long)selectedIndex;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setupUI;
- (void)setupSubviews;
@end
