@interface AWEDouPlusRechargeEmptyView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel detailLabel;
@property (nonatomic) UIButton retryBtn;
@property (nonatomic) <AWEDouPlusRechargeEmptyViewDelegate> delegate;
- (id)retryBtn;
- (void)retryBtnClicked;
- (void)setRetryBtn:;
- (id)delegate;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setDelegate:;
- (void)setupUI;
- (id)detailLabel;
- (void)setDetailLabel:;
@end
