@interface IESECMultiCouponButtonElement : MTLModel
@property (nonatomic) double space;
@property (nonatomic) q leadingSpace;
@property (nonatomic) NSArray couponButtonElementList;
@property (nonatomic) q couponType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)couponButtonElementList;
- (long long)couponType;
- (void)setCouponButtonElementList:;
- (void)setCouponType:;
- (void).cxx_destruct;
- (double)space;
- (long long)leadingSpace;
- (void)setLeadingSpace:;
- (void)setSpace:;
+ (id)couponButtonElementListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
