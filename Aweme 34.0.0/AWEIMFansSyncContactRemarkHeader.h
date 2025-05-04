@interface AWEIMFansSyncContactRemarkHeader : UITableViewHeaderFooterView
@property (nonatomic) UIView bgView;
@property (nonatomic) @? clickButtonBlock;
@property (nonatomic) UILabel headerLabel;
@property (nonatomic) UIButton headerButton;
- (void)themeDidChangeNoti:;
- (id)clickButtonBlock;
- (void)clickHeaderButton;
- (void)setClickButtonBlock:;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:;
- (id)bgView;
- (void)setBgView:;
- (void)setHeaderLabel:;
- (id)headerLabel;
- (void)setupViews;
- (id)headerButton;
- (void)setHeaderButton:;
+ (id)identifier;
@end
