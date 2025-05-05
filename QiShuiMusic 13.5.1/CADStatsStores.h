@interface CADStatsStores : CADStatCollector
- (void).cxx_destruct;
- (id)eventDictionaries;
- (void)prepareWithContext:;
- (BOOL)wantsStores;
- (void)processStores:;
+ (id)eventName;
@end
