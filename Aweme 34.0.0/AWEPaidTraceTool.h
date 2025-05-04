@interface AWEPaidTraceTool : NSObject
+ (void)traceWithEventName:parameters:awemeModel:;
+ (void)traceWithEventName:indexDictionary:otherParameters:;
+ (BOOL)useAnotherDataSourceForEvent:;
@end
