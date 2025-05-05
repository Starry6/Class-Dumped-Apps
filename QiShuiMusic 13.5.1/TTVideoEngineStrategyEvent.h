@interface TTVideoEngineStrategyEvent : NSObject
- (id)addDictIfAbsent:ForKey:;
- (id)convertCounterDict:;
- (void)event:event:value:info:;
- (id)getLogData:;
- (id)getLogData:forKey:;
- (id)getLogDataAndPopCache:;
- (id)popLogData:forTraceId:;
- (void)removeLogData:;
- (id)init;
- (void).cxx_destruct;
@end
