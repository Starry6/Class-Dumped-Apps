@interface VKCameraRegionRestriction : NSObject
@property (nonatomic) BOOL empty;
@property (nonatomic) GEOMapRegion mapRegion;
- (BOOL)isEmpty;
- (id)mapRegion;
- (BOOL)containsCoordinate:;
- (id)initWithCoder:;
- (id)clampedCoordinate:;
- (id)initWithMapRegion:;
- (id)clampedPositionForOrigin:delta:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)radianSingleRect:westOfDatelineRect:eastOfDatelineRect:;
- (id)clampedPosition:;
- (id)clampedPosition:usingSingleRestriction:westOfDatelineRestriction:eastOfDatelineRestriction:wrapRange:;
- (id).cxx_construct;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
@end
