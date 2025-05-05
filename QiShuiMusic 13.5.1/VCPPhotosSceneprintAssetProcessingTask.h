@interface VCPPhotosSceneprintAssetProcessingTask : NSObject
- (BOOL)run:;
- (void)cancel;
- (void)dealloc;
- (int)run;
- (void).cxx_destruct;
- (float)resourceRequirement;
- (BOOL)autoCancellable;
- (id)initWithAssets:options:andCompletionHandler:;
+ (id)taskWithAssets:options:andCompletionHandler:;
+ (unsigned long long)_panoVNRequestMethod;
@end
