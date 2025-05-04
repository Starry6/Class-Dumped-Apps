@interface AWEGoodsFavoriteTableViewCell : UITableViewCell
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) UILabel goodsTitleLabel;
@property (nonatomic) UILabel descriptionLabel;
@property (nonatomic) IESECGoodsPriceLabel priceLabel;
@property (nonatomic) UILabel typeLabel;
@property (nonatomic) UILabel invalidLabel;
@property (nonatomic) UILabel oringinalPriceLabel;
- (id)coverImageView;
- (void)setCoverImageView:;
- (id)goodsTitleLabel;
- (void)setGoodsTitleLabel:;
- (id)invalidLabel;
- (id)oringinalPriceLabel;
- (void)setInvalidLabel:;
- (void)setOringinalPriceLabel:;
- (void)setDescriptionLabel:;
- (void)setHighlighted:animated:;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (id)descriptionLabel;
- (void)setTypeLabel:;
- (id)typeLabel;
- (void)updateWithModel:;
- (id)priceLabel;
- (void)setPriceLabel:;
+ (id)convertFenToYuan:;
+ (id)makeAttributedStringWithGoodsPrice:;
@end
