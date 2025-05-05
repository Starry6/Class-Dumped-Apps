@interface MNTraceETAUpdateRow : NSObject
@property (nonatomic) double position;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) double requestTimestamp;
@property (nonatomic) double responseTimestamp;
@property (nonatomic) GEOETATrafficUpdateRequest request;
@property (nonatomic) GEOETATrafficUpdateResponse response;
@property (nonatomic) NSError error;
- (double)position;
- (void)setError:;
- (id)error;
- (id)request;
- (id)response;
- (void).cxx_destruct;
- (void)setRequest:;
- (void)setResponse:;
- (double)requestTimestamp;
- (void)setRequestTimestamp:;
- (double)responseTimestamp;
- (void)setResponseTimestamp:;
@end
