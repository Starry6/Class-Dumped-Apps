@interface ASDPurgeAppsRequest : ASDEphemeralRequest
@property (nonatomic) ASDPurgeAppsRequestOptions options;
- (id)initWithOptions:;
- (void)startWithCompletionBlock:;
+ (long long)requestType;
@end
