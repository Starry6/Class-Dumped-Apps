@interface MNNavigationServiceDirectionsRequestTicket : NSObject
@property (nonatomic) GEODirectionsRequest directionsRequest;
@property (nonatomic) GEODirectionsResponse directionsResponse;
@property (nonatomic) MNTraceRecordingData traceRecordingData;
- (void)cancel;
- (id)directionsResponse;
- (void).cxx_destruct;
- (id)directionsRequest;
- (id)traceRecordingData;
- (id)initWithProxy:request:;
- (void)submitWithHandler:;
@end
