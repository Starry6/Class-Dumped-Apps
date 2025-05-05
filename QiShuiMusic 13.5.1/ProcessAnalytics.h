@interface ProcessAnalytics : ObjectAnalytics
- (id)init;
- (id)initWithWorkspace:withCache:;
- (id)processesWithName:nameKind:;
- (id)processesWithNameInSet:nameKind:;
- (id)processesFromDate:untilDate:;
@end
