@interface ASDAppQueryExecutor : NSObject
@property (nonatomic) q queryOptions;
- (id)init;
- (void)executeQueryWithPredicate:onPairedDevice:withResultHandler:;
- (long long)queryOptions;
- (void).cxx_destruct;
- (id)initWithServiceBroker:;
- (void)setQueryOptions:;
@end
