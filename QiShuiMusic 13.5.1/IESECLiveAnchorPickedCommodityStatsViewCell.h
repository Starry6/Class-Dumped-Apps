@interface IESECLiveAnchorPickedCommodityStatsViewCell : UITableViewCell
@property (nonatomic) IESECLiveGoodsModel goodsModel;
@property (nonatomic) UIImageView thumbnail;
@property (nonatomic) UIView thumbnailMask;
@property (nonatomic) UILabel amountLabel;
@property (nonatomic) UILabel orderLabel;
@property (nonatomic) UILabel buyerLabel;
- (id)buyerLabel;
- (id)goodsModel;
- (id)orderLabel;
- (void)setBuyerLabel:;
- (void)setGoodsModel:;
- (void)setOrderLabel:;
- (void)setThumbnailMask:;
- (id)thumbnailMask;
- (void)updateLabel:text:;
- (id)valueText:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setThumbnail:;
- (id)thumbnail;
- (void).cxx_destruct;
- (void)setupUI;
- (id)amountLabel;
- (void)setAmountLabel:;
+ (id)identity;
+ (double)cellHeight;
@end
