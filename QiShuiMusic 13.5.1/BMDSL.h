@interface BMDSL : BMDSLBaseCodable
@property (nonatomic) NSSet rootStreamIdentifiers;
@property (nonatomic) NSSet streamPublishers;
@property (nonatomic) NSArray upstreams;
- (id)rootStreamIdentifiers;
- (id)streamPublishers;
- (id)asTableWithTransform:schema:;
- (id)trackDerivatesInDBAtURL:derivedTableName:;
- (id)upstreams;
- (id)bpsPublisher;
- (void)allowEvaluation;
- (id)combinedState;
- (id)collect;
- (id)subscribeOn:;
- (id)mapWithTransform:;
- (id)mergeWithOther:;
- (id)filterWithKeyPath:value:;
- (id)filterWithKeyPath:comparison:value:;
- (id)filterWithKeyPath:comparison:negation:value:;
- (id)windowByKeyedPath:assigner:;
- (id)mapWithTransform:keyPaths:;
- (id)mapWithSelector:;
- (id)insertState:as:;
- (id)as:;
- (id)orderedMergeWithOther:key:selector:;
- (id)subscribeOn:with:;
@end
