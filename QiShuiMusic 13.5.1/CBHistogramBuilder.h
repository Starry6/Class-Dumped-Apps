@interface CBHistogramBuilder : NSObject
@property (nonatomic) NSMutableArray bins;
@property (nonatomic) NSArray edges;
- (void)dealloc;
- (id)bins;
- (id)initWithEdges:;
- (void)enumerateBinsUsingBlock:;
- (void)pushNumberWeighted:withWeight:;
- (void)reset;
- (void)pushNumber:;
- (id)edges;
@end
