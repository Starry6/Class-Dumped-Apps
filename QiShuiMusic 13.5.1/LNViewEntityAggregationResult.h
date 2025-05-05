@interface LNViewEntityAggregationResult : NSObject
@property (nonatomic) NSDictionary entities;
@property (nonatomic) NSError error;
- (id)init;
- (id)error;
- (id)entities;
- (void).cxx_destruct;
- (void)addResults:error:forBundle:;
@end
