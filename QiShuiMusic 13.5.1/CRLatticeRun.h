@interface CRLatticeRun : NSObject
@property (nonatomic) NSMutableArray mutablePaths;
@property (nonatomic) NSArray paths;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} rect;
@property (nonatomic) NSArray graphEdges;
- (void)setGraph:;
- (id)rect;
- (id)paths;
- (id)initWithRect:;
- (void).cxx_destruct;
- (void)appendPath:;
- (id)mutablePaths;
- (void)setMutablePaths:;
- (id)graphEdges;
@end
