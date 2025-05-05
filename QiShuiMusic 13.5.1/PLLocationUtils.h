@interface PLLocationUtils : NSObject
+ (BOOL)canUseCoordinate:;
+ (BOOL)horizontalAccuracyIsCoarse:;
+ (id)predicateForMomentWithLocation;
+ (id)defaultLocationCoordinate2D;
+ (BOOL)locationIsCoarse:;
+ (id)predicateForAssetWithLocation;
+ (id)cartesianCoordinateFromLatitude:longitude:;
@end
