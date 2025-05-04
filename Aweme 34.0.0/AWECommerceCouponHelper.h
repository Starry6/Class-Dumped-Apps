@interface AWECommerceCouponHelper : NSObject
+ (BOOL)shouldFetchCouponWithModel:;
+ (void)fetchCouponIfNeededWithModel:completionBlock:;
+ (id)couponKeyString:;
@end
