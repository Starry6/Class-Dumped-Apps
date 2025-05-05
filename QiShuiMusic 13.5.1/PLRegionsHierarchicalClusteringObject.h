@interface PLRegionsHierarchicalClusteringObject : NSObject
@property (nonatomic) <PLRegionsClusteringItem> object;
@property (nonatomic) Q index;
- (unsigned long long)index;
- (void)setIndex:;
- (void).cxx_destruct;
- (id)object;
+ (id)clusterObjectWithObject:index:;
@end
