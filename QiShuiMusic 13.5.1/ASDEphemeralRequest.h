@interface ASDEphemeralRequest : ASDRequest
@property (nonatomic) ASDRequestOptions options;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)options;
- (void).cxx_destruct;
- (void)receiveResponse:;
+ (long long)requestType;
+ (BOOL)supportsSecureCoding;
@end
