@interface IESLiveLayoutBaseContainer : NSObject
@property (nonatomic) UIView view;
@property (nonatomic) NSString containerType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) IESLiveLayoutContainerItem item;
@property (nonatomic) IESLiveStackView view;
@property (nonatomic) IESLiveLayoutRulesController rule;
@property (nonatomic) NSMutableArray subContainers;
@property (nonatomic) BOOL useProxyStackView;
@property (nonatomic) {CGSize=dd} maxContentSize;
@property (nonatomic) BOOL scrollable;
@property (nonatomic) NSString viewType;
@property (nonatomic) NSString containerType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addContainer:insets:size:;
- (void)addCustomContainer:;
- (void)addPluginview:;
- (void)addSubview:viewType:;
- (void)addSubview:viewType:insets:;
- (void)addSubview:viewType:insets:size:;
- (void)addSubview:viewType:size:;
- (void)containerOrientationChanged:;
- (void)didAutoRoateToOrientation:;
- (void)didMoveToParentContainer:;
- (id)itemForView:viewType:size:insets:;
- (id)ruleForType:;
- (void)setScrollable:;
- (void)setSubContainers:;
- (void)setUseProxyStackView:;
- (id)subContainers;
- (void)switchToNormalMode;
- (void)switchToSideMode;
- (BOOL)useProxyStackView;
- (id)viewContainersMapping;
- (id)viewForType:;
- (void)willMoveToParentContainer:;
- (id)rule;
- (id)item;
- (id)init;
- (id)viewType;
- (id)view;
- (void)setItem:;
- (void).cxx_destruct;
- (void)loadView;
- (void)setRule:;
- (void)setView:;
- (void)viewDidLoad;
- (id)containerType;
- (void)setContainerType:;
- (void)addContainer:;
- (void)removeContainer:;
- (void)setMaxContentSize:;
- (id)maxContentSize;
- (id)itemForType:;
- (BOOL)isScrollable;
- (void)setViewType:;
- (BOOL)containsType:;
- (void)removeType:;
@end
