@interface VNMomentProcessor : NSObject
@property (nonatomic) VNMPContext context;
- (id)context;
- (void).cxx_destruct;
- (void)setContext:;
- (id)initWithOptions:error:;
- (id)computeClusteringOfImageDescriptors:intoKGroups:error:;
- (id)computeNaturalClusteringOfImageDescriptors:error:;
- (id)computeClusteringTreeForImageDescriptors:error:;
- (id)computeClusteringTreeForImageDescriptors:assumeDescriptorsAreSorted:error:;
- (id)convertClusterNodesListToDescriptorsList:;
- (id)performClustersPostprocessing:error:;
- (id)computeClusteringForClusteringTree:intoKGroups:error:;
- (id)computeClusteringForClusteringTree:usingThreshold:error:;
- (id)computeNaturalClusteringForClusteringTree:error:;
- (id)getKey:fromDictionary:withDefault:;
+ (id)sortImageDescriptorsChronologically:;
@end
