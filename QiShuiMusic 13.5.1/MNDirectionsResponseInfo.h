@interface MNDirectionsResponseInfo : NSObject
@property (nonatomic) NSArray routeInfos;
@property (nonatomic) GEODirectionsRequest request;
@property (nonatomic) GEODirectionsResponse response;
@property (nonatomic) NSError error;
@property (nonatomic) GEODirectionsError directionsError;
@property (nonatomic) MNTraceRecordingData traceRecordingData;
- (void)setError:;
- (id)error;
- (id)initWithCoder:;
- (id)request;
- (void)encodeWithCoder:;
- (id)response;
- (void).cxx_destruct;
- (void)setRequest:;
- (void)setResponse:;
- (id)directionsError;
- (void)setDirectionsError:;
- (void)setTraceRecordingData:;
- (id)traceRecordingData;
- (id)routeInfos;
- (void)setRouteInfos:;
+ (BOOL)supportsSecureCoding;
@end
