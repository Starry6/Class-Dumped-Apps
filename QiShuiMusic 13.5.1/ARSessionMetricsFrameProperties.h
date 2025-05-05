@interface ARSessionMetricsFrameProperties : NSObject
@property (nonatomic) ARCamera camera;
@property (nonatomic) ARWorldTrackingState worldTrackingState;
@property (nonatomic) NSArray anchors;
@property (nonatomic) ARGeoTrackingStatus geoTrackingStatus;
@property (nonatomic) CLLocation location;
@property (nonatomic) ARVLStateData vlState;
- (id)camera;
- (id)location;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)geoTrackingStatus;
- (id)worldTrackingState;
- (id)anchors;
- (id)vlState;
@end
