@interface VCPMADVIDocumentRecognitionTask : NSObject
- (void)cancel;
- (int)run;
- (void).cxx_destruct;
- (void)setPreferredMetalDevice:;
- (float)resourceRequirement;
- (BOOL)autoCancellable;
- (id)initWithRequest:imageAsset:andSignpostPayload:;
- (BOOL)canReuseResultsForRequest;
+ (id)dependencies;
+ (id)taskWithRequest:imageAsset:andSignpostPayload:;
@end
