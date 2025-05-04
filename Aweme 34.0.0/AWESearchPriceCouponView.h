@interface AWESearchPriceCouponView : UIView
@property (nonatomic) UILabel firstTagLabel;
@property (nonatomic) UIFont titleFont;
@property (nonatomic) UIImageView icon;
@property (nonatomic) AWESearchMerchandiseProductRightStruct coupon;
- (id)coupon;
- (void)setCoupon:;
- (id)firstTagLabel;
- (void)setFirstTagLabel:;
- (id)icon;
- (id)initWithFrame:;
- (void)setTitleFont:;
- (id)titleFont;
- (void)setIcon:;
- (void).cxx_destruct;
- (void)layoutSubviews;
+ (double)widthForCoupon:;
@end
