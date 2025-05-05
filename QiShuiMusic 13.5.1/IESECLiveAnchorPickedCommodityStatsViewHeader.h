@interface IESECLiveAnchorPickedCommodityStatsViewHeader : UITableViewHeaderFooterView
@property (nonatomic) UIView bkgView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UILabel amountLabel;
@property (nonatomic) UILabel orderLabel;
@property (nonatomic) UILabel buyerLabel;
- (id)bkgView;
- (id)buyerLabel;
- (id)orderLabel;
- (void)setBkgView:;
- (void)setBuyerLabel:;
- (void)setOrderLabel:;
- (id)initWithReuseIdentifier:;
- (void).cxx_destruct;
- (id)nameLabel;
- (void)setNameLabel:;
- (void)setupUI;
- (id)amountLabel;
- (void)setAmountLabel:;
+ (id)identity;
+ (double)headerHeight;
@end
