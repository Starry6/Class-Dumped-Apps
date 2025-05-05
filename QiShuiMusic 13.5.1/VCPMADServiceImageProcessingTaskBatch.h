@interface VCPMADServiceImageProcessingTaskBatch : VCPMABaseTask
@property (nonatomic) NSString signpostPayload;
- (BOOL)run:;
- (void).cxx_destruct;
- (BOOL)cachesResources;
- (id)initWithCloudIdentifierRequests:photoLibrary:clientBundleID:clientTeamID:cancelBlock:andCompletionHandler:;
- (id)assetWithIdentifier:isCloudIdentifier:error:;
- (id)signpostPayload;
- (void)setSignpostPayload:;
+ (id)taskWithCloudIdentifierRequests:photoLibrary:clientBundleID:clientTeamID:cancelBlock:andCompletionHandler:;
@end
