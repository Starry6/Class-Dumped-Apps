@interface AMapNearbyUploadInfo : NSObject
@property (nonatomic) NSString userID;
@property (nonatomic) q coordinateType;
@property (nonatomic) {CLLocationCoordinate2D=dd} coordinate;
- (long long)coordinateType;
- (void)setCoordinateType:;
- (id)userID;
- (id)init;
- (void).cxx_destruct;
- (id)coordinate;
- (void)setCoordinate:;
- (void)setUserID:;
- (id)copyWithZone:;
@end
