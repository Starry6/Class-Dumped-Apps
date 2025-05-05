@interface IESECGoodsDetailAuctionBidItemView : UIView
@property (nonatomic) UIImageView userAvatar;
@property (nonatomic) UILabel userName;
@property (nonatomic) UIImageView statusImageView;
@property (nonatomic) UILabel recordTimeLabel;
@property (nonatomic) IESECGoodsPriceLabel priceLabel;
- (id)recordTimeLabel;
- (void)configWithAuctionHistory:;
- (void)setRecordTimeLabel:;
- (void)setUserAvatar:;
- (id)userAvatar;
- (id)userName;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void)setUserName:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)statusImageView;
- (void)setStatusImageView:;
- (id)priceLabel;
- (void)setPriceLabel:;
@end
