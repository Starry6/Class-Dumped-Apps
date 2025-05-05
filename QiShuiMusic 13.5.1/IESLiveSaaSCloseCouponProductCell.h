@interface IESLiveSaaSCloseCouponProductCell : UITableViewCell
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel priceLabel;
- (void)updateWithProductInfo:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)imageView;
- (id)titleLabel;
- (void)setImageView:;
- (void)setupUI;
- (id)priceLabel;
- (void)setPriceLabel:;
@end
