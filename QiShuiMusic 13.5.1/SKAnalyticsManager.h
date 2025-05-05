@interface SKAnalyticsManager : NSObject
+ (void)sendEvent:;
+ (void)sendEventLazyWithName:buildEvent:;
@end
