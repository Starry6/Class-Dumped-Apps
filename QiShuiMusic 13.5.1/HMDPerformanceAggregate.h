@interface HMDPerformanceAggregate : NSObject
@property (nonatomic) NSMutableDictionary indexKeys;
@property (nonatomic) NSMutableDictionary indexKeys;
@property (nonatomic) NSMutableDictionary tracksDictionary;
- (void)aggregateExtraDictWithNeedAggregateDict:targetCacheDict:aggregateKey:depth:;
- (id)aggregateWithSessionID:aggregateKeys:needAggregateDictionary:normalDictionary:listDictionary:currentecordIndex:;
- (id)findMaxValueAggregateWithSessionID:aggregateKeys:needAggregateDictionary:normalDictionary:listDictionary:currentecordIndex:findMaxValueDictionary:;
- (id)getAggregateRecords;
- (id)indexKeys;
- (id)indexKeys;
- (void)setIndexKeys:;
- (void)setIndexKeys:;
- (void)setTracksDictionary:;
- (id)tracksDictionary;
- (id)init;
- (void).cxx_destruct;
@end
