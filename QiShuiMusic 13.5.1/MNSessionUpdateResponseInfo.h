@interface MNSessionUpdateResponseInfo : NSObject
@property (nonatomic) NSArray waypoints;
@property (nonatomic) GEOETATrafficUpdateRequest request;
@property (nonatomic) GEOETATrafficUpdateResponse response;
@property (nonatomic) NSError error;
@property (nonatomic) double responseTime;
- (void)setWaypoints:;
- (void)setError:;
- (id)error;
- (id)request;
- (id)response;
- (void)setResponseTime:;
- (void).cxx_destruct;
- (void)setRequest:;
- (id)waypoints;
- (double)responseTime;
- (void)setResponse:;
@end
