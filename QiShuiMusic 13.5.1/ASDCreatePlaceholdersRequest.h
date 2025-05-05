@interface ASDCreatePlaceholdersRequest : ASDEphemeralRequest
- (id)initWithOptions:;
- (void)startWithCompletionBlock:;
+ (long long)requestType;
@end
