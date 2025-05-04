@interface AWENaviClassTabContainerView : UIView
@property (nonatomic) UIStackView contentView;
@property (nonatomic) NSArray tabViews;
@property (nonatomic) @? onSelected;
@property (nonatomic) NSArray classTabs;
- (id)onSelected;
- (void)setOnSelected:;
- (id)tabViews;
- (void)didTapTab:;
- (void)setTabViews:;
- (void)updateSelectedTab:;
- (id)classTabs;
- (void)updateSelectedIndex:;
- (void)setupWithTabs:selectIndex:;
- (void)updateSelectedHighTab:;
- (id)selectedHighTab;
- (id)contentView;
- (long long)selectedIndex;
- (void).cxx_destruct;
- (void)setContentView:;
@end
