@interface PKClusteringUtility : NSObject
+ (id)horizontalDistanceBetweenStrokes:lineHeight:;
+ (double)estimatedWordDistanceForStrokes:lineHeight:;
+ (id)kMeansCluster:values:clusterError:maxIterations:;
+ (double)arrayAverage:;
+ (id)constrainRect:;
+ (void)_fetchIntersectedStrokesForGeometricBasedStrokeClusteringBetweenPoint:otherPoint:visibleStrokes:completion:;
+ (id)_geometricBasedStrokeClusteringFromPoint:visibleStrokes:selectionType:inputType:;
+ (id)_clusteredStrokesWithInitialStrokes:selectionType:visibleStrokes:approximateLineHeight:approximateLineCenter:;
@end
