@interface IESECFeedSameGoodsHeaderView : UICollectionReusableView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) UIButton tipsIcon;
@property (nonatomic) IESECAlertView alert;
@property (nonatomic) BOOL shouldHideTips;
- (void)setShouldHideTips:;
- (void)setTipsIcon:;
- (BOOL)shouldHideTips;
- (void)tipsButtonClick:;
- (id)tipsIcon;
- (id)alert;
- (void)setTitleLabel:;
- (void)setAlert:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
- (id)contentLabel;
- (void)setContentLabel:;
@end
