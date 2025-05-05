@interface MTDemographicEventHandler : MTEventHandler
- (id)eventType;
- (id)eventVersion:;
- (BOOL)mtIncludeBaseFields;
- (id)ageDataForUserId:updateInterval:;
- (void)clearUserDefaultsForTopic:;
- (id)totalYearsSinceDate:calendar:;
@end
