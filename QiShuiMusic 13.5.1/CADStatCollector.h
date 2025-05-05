@interface CADStatCollector : NSObject
@property (nonatomic) BOOL wantsStores;
@property (nonatomic) BOOL wantsCalendars;
@property (nonatomic) BOOL wantsOccurrences;
@property (nonatomic) BOOL wantsEvents;
- (BOOL)enabled;
- (id)eventName;
- (id)eventDictionaries;
- (void)prepareWithContext:;
- (BOOL)wantsCalendars;
- (void)processCalendars:inStore:;
- (BOOL)wantsStores;
- (BOOL)wantsOccurrences;
- (BOOL)wantsEvents;
- (id)desiredOccurrenceRange;
- (void)processStores:;
- (void)processBirthdayCalendarEvents:;
- (void)processOccurrences:;
- (void)processEvents:;
- (void)processSignificantEventWithPredictedLocation:onSharedCalendar:;
+ (BOOL)enabled;
+ (id)eventName;
@end
