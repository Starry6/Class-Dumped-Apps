@interface ASDIAPInfoUpdateRequest : ASDEphemeralRequest
- (id)init;
- (void)startWithCompletionBlock:;
+ (long long)requestType;
@end
