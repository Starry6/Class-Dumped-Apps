@interface AWEECOMIMCouponCardModel : AWEECOMIMBaseCardModel
@property (nonatomic) AWEECOMIMCouponModel couponItemModel;
- (void)updateModelWithData:encrypted:;
- (void)setCouponItemModel:;
- (id)couponItemModel;
- (void).cxx_destruct;
+ (Class)cardViewClass;
@end
