@interface BDLCoreLocationUtil : NSObject
+ (long long)locationSourceTypeWithLocation:;
+ (id)changeCoordinate:location:;
+ (id)coordinateSystemForCoordinate2D:;
+ (id)safeCoordinate2D:;
+ (id)safeLocation:;
@end
