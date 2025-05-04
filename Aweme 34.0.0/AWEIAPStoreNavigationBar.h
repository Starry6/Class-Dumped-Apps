@interface AWEIAPStoreNavigationBar : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) AWEButton backBtn;
@property (nonatomic) UIView bottomLineView;
- (id)bottomLineView;
- (void)setBottomLineView:;
- (id)backBtn;
- (void)setBackBtn:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
@end
