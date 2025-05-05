@interface VCPVideoStabilizationAssetProcessingTask : NSObject
- (void)cancel;
- (void)dealloc;
- (int)run;
- (int)main;
- (void).cxx_destruct;
- (float)resourceRequirement;
- (BOOL)autoCancellable;
- (id)initWithAssets:andOptions:andCompletionHandler:;
+ (id)taskWithAssets:andOptions:andCompletionHandler:;
+ (BOOL)deserializeStabilizationRecipeInAttributes:;
@end
