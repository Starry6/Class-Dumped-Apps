@interface ASDExternalManifestRequest : ASDEphemeralRequest
@property (nonatomic) ASDExternalManifestRequestOptions options;
- (id)initWithOptions:;
- (void)startWithCompletionBlock:;
+ (long long)requestType;
@end
