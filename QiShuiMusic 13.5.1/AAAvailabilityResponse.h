@interface AAAvailabilityResponse : AAResponse
@property (nonatomic) NSString status;
@property (nonatomic) NSString eta;
@property (nonatomic) NSString feature;
- (id)feature;
- (id)initWithHTTPResponse:data:;
- (void).cxx_destruct;
- (id)status;
- (id)eta;
@end
