@interface CRLatticeResults : NSObject
@property (nonatomic) NSMutableArray mutableResults;
@property (nonatomic) NSArray results;
- (id)init;
- (void)setMutableResults:;
- (id)mutableResults;
- (id)results;
- (void).cxx_destruct;
- (void)addResult:;
@end
