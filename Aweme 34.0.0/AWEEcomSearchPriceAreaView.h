@interface AWEEcomSearchPriceAreaView : UIView
@property (nonatomic) UILabel priceLabel;
@property (nonatomic) UIImageView leftIconView;
@property (nonatomic) UIImageView backgroundImageView;
- (id)leftIconView;
- (void)setLeftIconView:;
- (void)configWithMerchandise:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)backgroundImageView;
- (void)setBackgroundImageView:;
- (id)priceLabel;
- (void)setPriceLabel:;
+ (double)priceAreaHeight;
@end
