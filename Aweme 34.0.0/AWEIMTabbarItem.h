@interface AWEIMTabbarItem : UIView
@property (nonatomic) UIButton itemButton;
@property (nonatomic) q tabIndex;
@property (nonatomic) @? tabTappedBlock;
- (void)__setupUI;
- (void)configWithTitle:;
- (id)tabTappedBlock;
- (void)__itemButtonClicked:;
- (void)changeSelectStatus:;
- (void)setTabTappedBlock:;
- (id)init;
- (long long)tabIndex;
- (void).cxx_destruct;
- (id)itemButton;
- (void)setItemButton:;
- (void)setTabIndex:;
@end
