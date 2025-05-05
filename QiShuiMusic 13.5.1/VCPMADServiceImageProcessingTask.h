@interface VCPMADServiceImageProcessingTask : VCPMABaseTask
@property (nonatomic) NSString signpostPayload;
- (BOOL)run:;
- (void)cancel;
- (void).cxx_destruct;
- (BOOL)cachesResources;
- (id)signpostPayload;
- (void)setSignpostPayload:;
- (id)initWithRequests:forAsset:cancelBlock:andCompletionHandler:;
+ (id)taskWithRequests:forAsset:cancelBlock:andCompletionHandler:;
@end
