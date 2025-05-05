@interface GEOMapFeatureLine : NSObject
@property (nonatomic) ^{?=dd} coordinates;
@property (nonatomic) ^{?=ddd} coordinates3d;
@property (nonatomic) Q coordinateCount;
@property (nonatomic) double length;
- (id)init;
- (void)dealloc;
- (double)length;
- (id)copyWithZone:;
- (id)coordinates;
- (id)_containingTile;
- (id)_tilePointsForSection:outCount:;
- (id)_elevationsForSection:outCount:;
- (unsigned long long)coordinateCount;
- (id)coordinates3d;
- (double)closestDistance2DFromCoordinate:;
- (id)coordinatesDescription;
- (id)_formattedProtobufEnum:;
@end
