@interface IESECWinAuthorGuideInfoViewItem : UIView
@property (nonatomic) double itemWidth;
@property (nonatomic) UIView topContianerView;
@property (nonatomic) UILabel amountLabel;
@property (nonatomic) UILabel unitLabel;
@property (nonatomic) UILabel titleLabel;
- (void)setTopContianerView:;
- (id)topContianerView;
- (void)updateWithGuideInfo:;
- (void)setTitleLabel:;
- (id)initWithFrame:;
- (void)setItemWidth:;
- (double)itemWidth;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
- (id)amountLabel;
- (void)setAmountLabel:;
- (id)unitLabel;
- (void)setUnitLabel:;
@end
