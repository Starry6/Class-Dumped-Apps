@interface AWENaviColorPickerHeaderView : UIView
@property (nonatomic) UIStackView contentView;
@property (nonatomic) NSArray tabViews;
@property (nonatomic) Q currentIndex;
@property (nonatomic) @? onSelected;
@property (nonatomic) @? onConfig;
@property (nonatomic) @? onResetColor;
- (id)onSelected;
- (void)setupWithTabs:selectedColor:;
- (void)setOnResetColor:;
- (void)setOnSelected:;
- (id)tabViews;
- (void)updateCurrentColor:;
- (void)updateSelectedColor:;
- (void)didTapTab:;
- (void)setTabViews:;
- (void)updateSelectedTab:;
- (void)updateSelectedIndex:;
- (id)onConfig;
- (void)didTapClose:;
- (id)ancestorOfView:class:;
- (id)onResetColor;
- (void)setOnConfig:;
- (id)contentView;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)layoutSubviews;
- (unsigned long long)currentIndex;
@end
