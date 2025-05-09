@interface AWESearchCouponView : UIView
@property (nonatomic) UILabel firstTagLabel;
@property (nonatomic) CAShapeLayer dashedSeparatorLine;
@property (nonatomic) UILabel secondTagLabel;
@property (nonatomic) UIFont titleFont;
@property (nonatomic) AWESearchMerchandiseProductRightStruct coupon;
@property (nonatomic) UIColor borderColor;
@property (nonatomic) UIColor textColor;
@property (nonatomic) double fontSize;
- (id)coupon;
- (void)setCoupon:;
- (id)firstTagLabel;
- (id)dashedSeparatorLine;
- (id)secondTagLabel;
- (void)setFirstTagLabel:;
- (void)setDashedSeparatorLine:;
- (void)setSecondTagLabel:;
- (void)setBorderColor:;
- (double)fontSize;
- (id)borderColor;
- (id)initWithFrame:;
- (void)setTitleFont:;
- (void)setTextColor:;
- (void)setFontSize:;
- (id)titleFont;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)textColor;
+ (double)widthForCoupon:;
@end
