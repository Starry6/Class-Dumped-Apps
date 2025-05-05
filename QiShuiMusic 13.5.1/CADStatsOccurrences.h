@interface CADStatsOccurrences : CADStatCollector
- (void).cxx_destruct;
- (id)eventDictionaries;
- (void)prepareWithContext:;
- (BOOL)wantsOccurrences;
- (id)desiredOccurrenceRange;
- (void)processOccurrences:;
+ (id)eventName;
@end
