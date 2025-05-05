@interface CADStatsEvents : CADStatCollector
- (void).cxx_destruct;
- (id)eventDictionaries;
- (void)prepareWithContext:;
- (BOOL)wantsEvents;
- (void)processEvents:;
+ (id)eventName;
@end
