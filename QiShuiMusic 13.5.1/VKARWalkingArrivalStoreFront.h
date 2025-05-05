@interface VKARWalkingArrivalStoreFront : NSObject
@property (nonatomic) {OrientedBox<double face;
@property (nonatomic) {Coordinate3D<geo::Degrees bottomCenterCoordinate;
@property (nonatomic) {Mercator3<double>=[3d]} bottomCenterPoint;
@property (nonatomic) {Matrix<double normal;
@property (nonatomic) {Unit<geo::MeterUnitDescription faceWidthInMeters;
@property (nonatomic) {Unit<geo::MeterUnitDescription faceHeightInMeters;
@property (nonatomic) {Unit<geo::MeterUnitDescription appliedUndulation;
- (id)normal;
- (void).cxx_destruct;
- (id)description;
- (id).cxx_construct;
- (BOOL)isEqual:;
- (id)face;
- (id)initWithOrientedRect:;
- (id)initWithGEOOrientedBox:undulationProvider:;
- (id)initWithYaw:pitch:roll:x:y:z:w:h:undulationProvider:;
- (id)initWithOrientedRect:undulationProvider:;
- (id)faceWidthInMeters;
- (id)faceHeightInMeters;
- (id)bottomCenterPoint;
- (id)bottomCenterCoordinate;
- (id)appliedUndulation;
@end
