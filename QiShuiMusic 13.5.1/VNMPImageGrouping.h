@interface VNMPImageGrouping : NSObject
+ (long long)computeHierarchicalClusteringOfImageDescriptors:results:context:;
+ (float)getDistanceForClusterNode:splitDistanceType:;
+ (id)computeClusteringIntoKGroups:orUsingDistanceThreshold:forHierarchicalTree:context:;
+ (id)computeClusteringIntoKGroups:forHierarchicalTree:context:;
+ (id)computeClusteringUsingDistanceThreshold:forHierarchicalTree:context:;
+ (id)computeNaturalClusteringForHierarchicalTree:context:;
+ (float)computeTimestampAdjustedDistanceForBaseDistance:andTimestampDiff:;
+ (float)computeTotalDistanceForDescriptorDistance:timestampDiff:useTimestampAdjustment:;
@end
