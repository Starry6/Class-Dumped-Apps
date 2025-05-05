@interface AFAppContextAggregator : NSObject
- (void)aggregateContextWithRawOutputForAppWithBundleIdentifier:contextProvider:deliveryHandler:completionHandler:;
- (void)aggregateContextForAppWithBundleIdentifier:contextProvider:deliveryHandler:completionHandler:;
- (void)aggregateContextForAppWithBundleIdentifier:contextProvider:completionHandler:;
@end
