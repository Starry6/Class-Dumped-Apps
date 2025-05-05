@interface VKDrivingPolylinePath : VKPolylinePath
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setTrafficSpeed:;
- (id)initWithOverlay:section:routeStartIndex:routeEndIndex:matchedPathSegments:;
- (id)gradientTrafficAtIndex:;
- (float)laneHalfWidthAtIndex:;
- (void)assignTo:withSegment:;
- (void)assignPoints:count:;
- (void)assignPoints:laneHalfWidths:gradientTraffics:polylineCoordinates:count:;
- (void)splitGradientTrafficSegmentationAndAddTo:with:shouldSnap:;
- (void)splitTrafficSegmentationAndAddTo:with:shouldSnap:isGradientTraffic:;
+ (void)updateDistances:forPath:snap:;
@end
