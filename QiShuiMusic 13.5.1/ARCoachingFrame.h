@interface ARCoachingFrame : NSObject
@property (nonatomic) ARCamera camera;
@property (nonatomic) double timestamp;
@property (nonatomic) ARGeoTrackingStatus geoTrackingStatus;
@property (nonatomic) NSArray anchors;
@property (nonatomic) q interfaceOrientation;
- (id)camera;
- (long long)interfaceOrientation;
- (void)setCamera:;
- (void)setInterfaceOrientation:;
- (id)initWithFrame:;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (double)timestamp;
- (id)geoTrackingStatus;
- (id)anchors;
- (void)setAnchors:;
- (void)setGeoTrackingStatus:;
@end
