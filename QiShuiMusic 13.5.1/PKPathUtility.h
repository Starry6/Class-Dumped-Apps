@interface PKPathUtility : NSObject
+ (id)unorderedSimplifiedPointsFromPoints:factor:;
+ (void)smoothedHullForPoints:completion:;
+ (id)bezierPathFromPoints:;
+ (id)smoothedHullForPoints:alpha:granularity:minAngleFactor:maxLengthThreshold:edgeRemovalConstant:;
+ (void)convexHull:forPoints:;
+ (id)centripetalCatmullRomPointsFromConvexHull:alpha:granularity:;
+ (double)averageDistanceForEdge:withPoints:;
+ (id)pointWithMinAngleForEdge:fromPoints:minAngle:;
+ (id)longestEdgeInHull:atIndex:visitedEdges:;
+ (void)openConvexHullToConcave:points:minAngleFactor:maxLengthThreshold:edgeRemovalConstant:;
+ (BOOL)newEdgeWithPoint:betweenEdge:intersectsOtherEdgesInHull:;
+ (BOOL)edge:intersectsEdge:;
+ (BOOL)vector:containsPoint:;
+ (BOOL)edgeSet:containsEdge:;
@end
