@interface AWEPayTransferAccountsStatusInfoView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel descLabel;
@property (nonatomic) UIImageView arrow;
@property (nonatomic) UIImageView icon;
@property (nonatomic) NSString infoId;
@property (nonatomic) BOOL showBtn;
@property (nonatomic) @? clickBlock;
- (void)p_setupUI;
- (void)setClickBlock:;
- (id)clickBlock;
- (id)descLabel;
- (void)setDescLabel:;
- (void)didClick:;
- (id)infoId;
- (void)setInfoId:;
- (void)setShowBtn:;
- (BOOL)showBtn;
- (id)initWithTitle:desc:;
- (id)initWithTitle:desc:icon:infoId:clickBlock:;
- (id)icon;
- (void)setTitleLabel:;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)arrow;
- (void)setArrow:;
@end
