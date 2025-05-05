@interface MNTraceRecordingData : NSObject
@property (nonatomic) MNLocation initialUserLocation;
@property (nonatomic) NSArray waypoints;
@property (nonatomic) GEODirectionsRequest initialDirectionsRequest;
@property (nonatomic) GEODirectionsResponse initialDirectionsResponse;
@property (nonatomic) NSError initialDirectionsRequestError;
@property (nonatomic) double initialDirectionsRequestTimestamp;
@property (nonatomic) double initialDirectionsResponseTimestamp;
- (void)setWaypoints:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)waypoints;
- (id)initialUserLocation;
- (void)setInitialUserLocation:;
- (id)initialDirectionsRequest;
- (void)setInitialDirectionsRequest:;
- (id)initialDirectionsResponse;
- (void)setInitialDirectionsResponse:;
- (id)initialDirectionsRequestError;
- (void)setInitialDirectionsRequestError:;
- (double)initialDirectionsRequestTimestamp;
- (void)setInitialDirectionsRequestTimestamp:;
- (double)initialDirectionsResponseTimestamp;
- (void)setInitialDirectionsResponseTimestamp:;
+ (BOOL)supportsSecureCoding;
@end
