@interface IESECGoodsActivityAuctionHistoryCell : UICollectionViewCell
@property (nonatomic) UIImageView userAvatar;
@property (nonatomic) UILabel userName;
@property (nonatomic) IESECInsetsLabel statusLabel;
@property (nonatomic) UILabel recordTimeLabel;
@property (nonatomic) UILabel priceLabel;
- (id)recordTimeLabel;
- (void)configWithAuctionHistory:leading:;
- (id)generatePriceText:;
- (void)setRecordTimeLabel:;
- (void)setUserAvatar:;
- (id)userAvatar;
- (id)userName;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void)setUserName:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)statusLabel;
- (void)setStatusLabel:;
- (id)priceLabel;
- (void)setPriceLabel:;
@end
