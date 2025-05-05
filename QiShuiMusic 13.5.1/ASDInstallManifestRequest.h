@interface ASDInstallManifestRequest : ASDEphemeralRequest
@property (nonatomic) ASDInstallManifestRequestOptions options;
- (id)initWithOptions:;
- (void)startWithCompletionBlock:;
+ (long long)requestType;
@end
