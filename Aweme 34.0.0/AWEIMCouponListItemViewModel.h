@interface AWEIMCouponListItemViewModel : NSObject
@property (nonatomic) AWEIMFansGroupCouponModel couponModel;
@property (nonatomic) NSString price;
@property (nonatomic) q style;
@property (nonatomic) NSString text;
@property (nonatomic) NSString recommendIconName;
- (void)setCouponModel:;
- (id)couponModel;
- (id)discountWithDecimalPointIfNecessary:;
- (id)creditsWithDecimalPointIfNecessary:;
- (id)recommendIconName;
- (void)setRecommendIconName:;
- (id)price;
- (void)setText:;
- (id)text;
- (long long)style;
- (void).cxx_destruct;
- (void)setStyle:;
@end
