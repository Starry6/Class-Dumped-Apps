@interface MTFlexibleEventHandler : MTEventHandler
- (id)knownFields;
- (id)metricsDataWithEventType:eventData:;
- (id)eventTime:;
- (BOOL)mtIncludeBaseFields;
@end
