@interface GEOPathMatcherInternalInfo : NSObject
@property (nonatomic) {GEOPolylineCoordinateRange={PolylineCoordinate=If}{PolylineCoordinate=If}} range;
@property (nonatomic) NSString base64Path;
@property (nonatomic) NSArray matchedSegments;
- (void)setRange:;
- (id)range;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)base64Path;
- (void)setBase64Path:;
- (id)matchedSegments;
- (void)setMatchedSegments:;
@end
