@interface PLOPTICSClusterDescriptor : NSObject
@property (nonatomic) NSNumber startIndex;
@property (nonatomic) NSNumber endIndex;
@property (nonatomic) {_NSRange=QQ} indexRange;
@property (nonatomic) NSNumber clusterSize;
@property (nonatomic) NSNumber rootLevel;
@property (nonatomic) NSNumber minCoreDistanceIndex;
@property (nonatomic) NSNumber minCoreDistance;
- (id)startIndex;
- (void).cxx_destruct;
- (id)endIndex;
- (id)initWithParameters:rootLevel:minCoreDistanceIndex:minCoreDistance:;
- (id)indexRange;
- (id)clusterSize;
- (id)rootLevel;
- (id)minCoreDistanceIndex;
- (id)minCoreDistance;
+ (id)clusterDescriptor:rootLevel:minCoreDistanceIndex:minCoreDistance:;
@end
