@interface AWEGrouponForwardTabCouponInfoModel : MTLModel
@property (nonatomic) q amount;
@property (nonatomic) NSString couponDesc;
@property (nonatomic) NSString title;
@property (nonatomic) NSString transCouponData;
@property (nonatomic) q barAmount;
@property (nonatomic) q couponType;
@property (nonatomic) NSString couponId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCouponId:;
- (id)couponId;
- (long long)couponType;
- (void)setCouponType:;
- (id)couponDesc;
- (void)setCouponDesc:;
- (id)transCouponData;
- (long long)barAmount;
- (void)setTransCouponData:;
- (void)setBarAmount:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (long long)amount;
- (void)setAmount:;
+ (BOOL)automaticallyDefaultMapping;
@end
