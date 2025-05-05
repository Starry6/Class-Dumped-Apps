@interface VCPMADVIRectangleDetectionTask : NSObject
- (void)cancel;
- (int)run;
- (void).cxx_destruct;
- (void)setPreferredMetalDevice:;
- (float)resourceRequirement;
- (BOOL)autoCancellable;
- (id)initWithRequest:imageAsset:andSignpostPayload:;
+ (id)dependencies;
+ (id)taskWithRequest:imageAsset:andSignpostPayload:;
@end
