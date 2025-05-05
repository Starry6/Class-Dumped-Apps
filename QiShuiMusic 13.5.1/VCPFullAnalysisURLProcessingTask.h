@interface VCPFullAnalysisURLProcessingTask : NSObject
- (void)cancel;
- (int)run;
- (void).cxx_destruct;
- (float)resourceRequirement;
- (BOOL)autoCancellable;
- (id)initWithURLAsset:withOptions:analysisTypes:progressHandler:completionHandler:;
+ (id)taskForURLAsset:withOptions:analysisTypes:progressHandler:completionHandler:;
@end
