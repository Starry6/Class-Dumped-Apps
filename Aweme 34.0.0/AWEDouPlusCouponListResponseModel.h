@interface AWEDouPlusCouponListResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray couponList;
@property (nonatomic) BOOL hasMore;
- (id)couponList;
- (void)setCouponList:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
+ (id)couponListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
