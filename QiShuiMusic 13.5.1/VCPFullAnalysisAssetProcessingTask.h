@interface VCPFullAnalysisAssetProcessingTask : NSObject
- (void)cancel;
- (void)dealloc;
- (int)run;
- (int)main;
- (void).cxx_destruct;
- (float)resourceRequirement;
- (BOOL)autoCancellable;
- (id)initWithAssets:analysisTypes:options:progressHandler:andCompletionHandler:;
- (id)requestAnalysis:forAsset:andDatabase:error:;
- (id)analyzeOndemand:forAnalysisTypes:withExistingAnalysis:error:;
+ (id)taskWithAsset:andAnalysisTypes:andOptions:andProgressHandler:andCompletionHandler:;
@end
