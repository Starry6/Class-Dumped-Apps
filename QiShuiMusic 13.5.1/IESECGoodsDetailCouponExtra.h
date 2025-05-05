@interface IESECGoodsDetailCouponExtra : MTLModel
@property (nonatomic) NSString toastDesc;
@property (nonatomic) IESECGoodsDetailCouponUrgeInfo couponUrgeInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)couponUrgeInfo;
- (void)setCouponUrgeInfo:;
- (void)setToastDesc:;
- (id)toastDesc;
- (void).cxx_destruct;
+ (id)couponUrgeInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
