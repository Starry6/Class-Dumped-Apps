@interface AWEASSMusicNavView : UIView
@property (nonatomic) UIView headerView;
@property (nonatomic) UIView contentView;
@property (nonatomic) BOOL shouldShowContentView;
@property (nonatomic) UIView barView;
@property (nonatomic) BOOL leftButtonIsBack;
@property (nonatomic) UIButton leftCancelButton;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) BOOL shouldShowBarView;
- (id)leftCancelButton;
- (void)setLeftCancelButton:;
- (double)recommendHeight;
- (void)setShouldShowBarView:;
- (void)setLeftButtonIsBack:;
- (void)showContentView:;
- (BOOL)leftButtonIsBack;
- (BOOL)shouldShowBarView;
- (BOOL)shouldShowContentView;
- (void)setShouldShowContentView:;
- (id)initWithFrame:;
- (id)contentView;
- (id)headerView;
- (void)setTitleLabel:;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)titleLabel;
- (void)setHeaderView:;
- (id)barView;
- (void)setBarView:;
@end
