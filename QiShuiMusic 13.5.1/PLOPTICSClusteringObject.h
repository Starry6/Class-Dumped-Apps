@interface PLOPTICSClusteringObject : NSObject
@property (nonatomic) @ object;
@property (nonatomic) Q index;
@property (nonatomic) Q order;
@property (nonatomic) NSMutableArray neighbors;
@property (nonatomic) double coreDistance;
@property (nonatomic) double reachabilityDistance;
@property (nonatomic) BOOL processed;
- (unsigned long long)order;
- (unsigned long long)index;
- (void)setIndex:;
- (void).cxx_destruct;
- (id)object;
- (void)setOrder:;
- (BOOL)processed;
- (void)setProcessed:;
- (id)initWithObject:index:epsilon:;
- (void)registerNeighbors:deleteExisting:;
- (void)sortNeighborsByDistance;
- (id)neighborAtIndex:;
- (void)updateCoreDistanceForNeighbor:;
- (id)neighbors;
- (double)coreDistance;
- (void)setCoreDistance:;
- (double)reachabilityDistance;
- (void)setReachabilityDistance:;
+ (id)clusterObjectWithObject:index:epsilon:;
@end
