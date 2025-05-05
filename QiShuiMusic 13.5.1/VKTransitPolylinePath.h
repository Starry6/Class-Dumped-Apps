@interface VKTransitPolylinePath : VKPolylinePath
@property (nonatomic) double vertexEqualityTolerance;
- (id)description;
- (id)initWithOverlay:section:points:pointCount:reversePoints:transform:routeStartIndex:routeEndIndex:lineID:tileZ:vertexPrecision:;
- (id)initWithOverlay:section:points:pointCount:reversePoints:transform:routeStartIndex:routeEndIndex:lineID:;
- (double)vertexEqualityTolerance;
@end
