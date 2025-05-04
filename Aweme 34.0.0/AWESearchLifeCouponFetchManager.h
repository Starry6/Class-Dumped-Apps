@interface AWESearchLifeCouponFetchManager : NSObject
@property (nonatomic) NSMutableDictionary couponDataMapDic;
- (BOOL)enableCouponFetch;
- (BOOL)enableFetchForEnterFrom:;
- (id)couponDataMapDic;
- (void)updateCouponDataIfNeededWithEnterFrom:;
- (id)getCouponStringWithEnterFrom:;
- (void)setCouponDataMapDic:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
