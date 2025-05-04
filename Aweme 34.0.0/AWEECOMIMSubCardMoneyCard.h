@interface AWEECOMIMSubCardMoneyCard : UIView
@property (nonatomic) UIControl containerView;
@property (nonatomic) UIImageView iconImg;
@property (nonatomic) UILabel unitLabel;
@property (nonatomic) UILabel moneyLabel;
@property (nonatomic) UILabel descLabel;
@property (nonatomic) NSString cardUrl;
@property (nonatomic) BOOL invalid;
- (id)descLabel;
- (void)setDescLabel:;
- (id)iconImg;
- (void)setIconImg:;
- (id)moneyLabel;
- (void)setMoneyLabel:;
- (id)cardUrl;
- (void)setCardUrl:;
- (void)setInvalid:;
- (id)initWithFrame:;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)updateWithData:;
- (BOOL)invalid;
- (void)setupUI;
- (void)setUnitLabel:;
- (id)unitLabel;
+ (double)designHeight;
@end
