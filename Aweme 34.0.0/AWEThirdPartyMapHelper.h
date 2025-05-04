@interface AWEThirdPartyMapHelper : NSObject
+ (id)GCJCoordinateFromWGSCoordinate:;
+ (void)showThirdPartyMapActionSheetInViewController:withCoordinate:coordinateType:locationTitle:address:transportType:;
+ (id)BD09CoordinateFromGCJCoordinate:;
@end
