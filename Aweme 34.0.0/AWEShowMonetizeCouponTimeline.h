@interface AWEShowMonetizeCouponTimeline : NSObject
@property (nonatomic) NSTimer couponInfoTimelineTimer;
@property (nonatomic) AWECodeGenApplyCouponInfoModel runningTimelineCouponInfo;
@property (nonatomic) <AWEShowMonetizeCouponTimelineHandler> handler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)tryStopCouponInfoTimelineWithScene:contentID:;
- (void)tryStartCouponInfoTimelineWithScene:contentID:;
- (id)couponInfoTimelineTimer;
- (void)setCouponInfoTimelineTimer:;
- (void)tryStartCouponInfoTimelineWithIndex:couponInfos:contentID:;
- (id)runningTimelineCouponInfo;
- (void)setRunningTimelineCouponInfo:;
- (id)getTimelineTextForCountdown:;
- (void)setHandler:;
- (void)dealloc;
- (id)handler;
- (void).cxx_destruct;
@end
