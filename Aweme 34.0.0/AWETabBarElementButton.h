@interface AWETabBarElementButton : UIButton
@property (nonatomic) AWETabBarElementButtonViewModel viewModel;
@property (nonatomic) UIImageView elementIcon;
@property (nonatomic) UILabel elementLabel;
@property (nonatomic) BOOL isFold;
- (void)p_setupUI;
- (void)clickButton;
- (void)changeFoldState:;
- (void)refreshViewModel:;
- (BOOL)isFold;
- (void)setIsFold:;
- (void)p_refreshUI;
- (void)p_refreshLayout;
- (id)elementIcon;
- (id)elementLabel;
- (void)setElementIcon:;
- (void)setElementLabel:;
- (id)initWithViewModel:;
- (id)viewModel;
- (void)setViewModel:;
- (void).cxx_destruct;
@end
