@interface GEOComposedRouteLengthMarker : NSObject
@property (nonatomic) Q pathIndex;
@property (nonatomic) Q pointIndex;
@property (nonatomic) double length;
- (void)setPathIndex:;
- (long long)compare:;
- (id)description;
- (double)length;
- (unsigned long long)pathIndex;
- (void)setLength:;
- (unsigned long long)pointIndex;
- (void)setPointIndex:;
@end
