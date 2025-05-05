@interface BDHMXPerformanceAggregationUtility : NSObject
+ (void)collectWebPerformanceInfoIfNeeded:perfAggregation:navigationId:;
+ (void)assemblePerformanceInfo:perfAggregation:navigationId:isLynx:;
+ (void)collectLynxPerformanceInfoIfNeeded:perfAggregation:navigationId:;
+ (void)collectRequestInfoIfNeeded:perfAggregation:navigationId:event:;
+ (void)collectResourceInfoIfNeeded:perfAggregation:navigationId:event:isLynx:;
+ (id)extractDataTypeFromURLString:;
+ (BOOL)isRequestJSB:;
+ (BOOL)isSubResource:isLynx:;
+ (id)simplifyResourceDic:mainRes:isLynx:;
@end
