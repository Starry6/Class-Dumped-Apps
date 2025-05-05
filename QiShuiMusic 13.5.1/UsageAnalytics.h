@interface UsageAnalytics : ObjectAnalytics
- (id)init;
- (id)initWithWorkspace:withCache:;
- (id)usageMarkersWithTag:andMetadata:fromDate:untilDate:;
- (id)allUsageMarkersWithTag:andMetadata:;
- (id)lastHappenedWithTag:andMetadata:;
- (id)usageMarkersWithTag:fromDate:untilDate:;
- (id)allUsageMarkersWithTag:;
- (id)lastHappenedWithTag:;
@end
