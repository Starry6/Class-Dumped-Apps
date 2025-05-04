@interface AWEShowMonetizeGetCouponInfo : NSObject
@property (nonatomic) Q scene;
@property (nonatomic) q curSceneNextCanApplyTimestampt;
@property (nonatomic) NSMutableArray couponResponses;
@property (nonatomic) NSTimer leaveTimingGetCouponInfoTimer;
- (long long)curSceneNextCanApplyTimestampt;
- (void)setCurSceneNextCanApplyTimestampt:;
- (id)couponResponses;
- (void)setCouponResponses:;
- (id)leaveTimingGetCouponInfoTimer;
- (void)setLeaveTimingGetCouponInfoTimer:;
- (void)setScene:;
- (id)init;
- (unsigned long long)scene;
- (void).cxx_destruct;
@end
