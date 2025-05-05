@interface ASDPurgeableAppRequest : ASDEphemeralRequest
@property (nonatomic) ASDPurgeableAppRequestOptions options;
- (id)initWithOptions:;
- (void)startWithCompletionBlock:;
+ (long long)requestType;
@end
