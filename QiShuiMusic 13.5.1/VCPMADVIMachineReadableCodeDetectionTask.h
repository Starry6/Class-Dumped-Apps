@interface VCPMADVIMachineReadableCodeDetectionTask : NSObject
- (void)cancel;
- (int)run;
- (void).cxx_destruct;
- (float)resourceRequirement;
- (BOOL)autoCancellable;
- (id)initWithRequest:imageAsset:andSignpostPayload:;
- (BOOL)canReuseResultsForRequest;
+ (id)dependencies;
+ (id)taskWithRequest:imageAsset:andSignpostPayload:;
+ (BOOL)enableGating;
@end
