@interface AWECardCouponListResponseModel : AWEBaseApiModel
@property (nonatomic) BOOL hasRedeemed;
@property (nonatomic) NSString redeemedURL;
@property (nonatomic) NSArray couponList;
@property (nonatomic) q total;
@property (nonatomic) BOOL hasMore;
- (id)couponList;
- (void)setCouponList:;
- (id)redeemedURL;
- (void)setRedeemedURL:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (long long)total;
- (void)setTotal:;
- (void)setHasRedeemed:;
- (BOOL)hasRedeemed;
+ (id)couponListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
