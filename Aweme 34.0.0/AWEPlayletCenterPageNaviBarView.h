@interface AWEPlayletCenterPageNaviBarView : UIView
@property (nonatomic) UIButton backButton;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton searchButton;
@property (nonatomic) @? backBtnTapAction;
@property (nonatomic) @? searchBtnTapAction;
- (void)backButtonDidClick;
- (void)searchButtonDidClick;
- (id)backBtnTapAction;
- (id)searchBtnTapAction;
- (void)setBackBtnTapAction:;
- (void)setSearchBtnTapAction:;
- (id)backButton;
- (id)init;
- (id)searchButton;
- (void)setBackButton:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setSearchButton:;
- (void)setupUI;
@end
