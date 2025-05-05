@interface CVNLPPerformance : NSObject
@property (nonatomic) BOOL computePerf;
@property (nonatomic) NSMutableDictionary results;
- (id)initWithOptions:;
- (id)results;
- (void).cxx_destruct;
- (void)run:block:;
- (BOOL)computePerf;
@end
