@interface ASDJobSchedulerRequest : ASDEphemeralRequest
- (id)initWithOptions:;
- (void)findNextJobsWithCompletionBlock:;
+ (long long)requestType;
@end
