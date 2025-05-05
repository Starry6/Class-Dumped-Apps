@interface ASDRestoreDemotedApplicationsRequest : ASDEphemeralRequest
@property (nonatomic) ASDRestoreDemotedApplicationsRequestOptions options;
- (id)initWithOptions:;
- (void)startWithCompletionBlock:;
+ (long long)requestType;
@end
