@interface CADStatsCalendars : CADStatCollector
- (void).cxx_destruct;
- (id)eventDictionaries;
- (void)prepareWithContext:;
- (BOOL)wantsCalendars;
- (void)processCalendars:inStore:;
- (BOOL)calendarUsesAuthentication:;
+ (id)eventName;
@end
