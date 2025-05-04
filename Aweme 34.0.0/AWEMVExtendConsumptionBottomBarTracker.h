@interface AWEMVExtendConsumptionBottomBarTracker : NSObject
+ (void)trackForBottomShowWithModel:enterFrom:;
+ (id)videoPlayProgressPercentWithContext:;
+ (id)videoTotalPlayTimeMsIgnoreLoopTimes:;
+ (id)videoTotalPlayTimeMillisecond:context:;
+ (void)trackForBottomClickWithModel:context:;
@end
