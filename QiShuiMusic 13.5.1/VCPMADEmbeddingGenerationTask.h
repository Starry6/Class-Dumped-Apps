@interface VCPMADEmbeddingGenerationTask : NSObject
- (void)cancel;
- (int)run;
- (void).cxx_destruct;
- (float)resourceRequirement;
- (BOOL)autoCancellable;
- (id)initWithRequest:imageAsset:andSignpostPayload:;
+ (id)dependencies;
+ (id)taskWithRequest:imageAsset:andSignpostPayload:;
@end
