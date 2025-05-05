@interface IESECWinTabCell : UICollectionViewCell
@property (nonatomic) UIView bottomSplitLine;
@property (nonatomic) IESECSlidingTabbarView tabBarView;
@property (nonatomic) UIView backView;
@property (nonatomic) @? selectTabBlock;
@property (nonatomic) @? indexChanged;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bottomSplitLine;
- (void)bindObject:;
- (long long)indexOfSelectTab:;
- (void)p_addObserver;
- (id)selectTabBlock;
- (void)setBottomSplitLine:;
- (void)setSelectTabBlock:;
- (void)setTabBarView:;
- (void)setupTabBarContent;
- (id)tabBarView;
- (void)tabbarTappedAtIndex:;
- (void)updateTabbarWithTabs:;
- (id)backView;
- (void)setBackView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupViews;
- (void)setSelectedIndex:animated:;
@end
