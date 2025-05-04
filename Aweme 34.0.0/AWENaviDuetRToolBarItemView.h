@interface AWENaviDuetRToolBarItemView : UIView
@property (nonatomic) UIButton barItemButton;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) ^v itemID;
@property (nonatomic) @? barItemActionBlock;
@property (nonatomic) AWENaviDuetRToolBarItemViewConfig config;
- (void)p_setupUI;
- (void)setBarItemActionBlock:;
- (id)barItemButton;
- (id)barItemActionBlock;
- (void)p_didClickItem;
- (void)setBarItemButton:;
- (id)accessibilityLabel;
- (id)itemID;
- (void)setItemID:;
- (id)initWithConfig:;
- (id)config;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (BOOL)isAccessibilityElement;
@end
