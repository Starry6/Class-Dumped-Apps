@interface PKStrokePoint : NSObject
@property (nonatomic) {CGPoint=dd} location;
@property (nonatomic) double timeOffset;
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) double opacity;
@property (nonatomic) double azimuth;
@property (nonatomic) double force;
@property (nonatomic) double altitude;
- (double)altitude;
- (double)force;
- (double)azimuth;
- (double)opacity;
- (double)timeOffset;
- (unsigned long long)hash;
- (id)location;
- (void).cxx_destruct;
- (id)description;
- (id).cxx_construct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)size;
- (id)initWithLocation:timeOffset:size:opacity:force:azimuth:altitude:;
- (id)_strokeDataPointsPrivate;
- (id)initWithSlice:index:;
- (id)_compressedPoint;
+ (id)_sharedConstantData;
@end
