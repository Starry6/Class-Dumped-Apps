@interface VCPMADVIVisualSearchTask : NSObject
- (void)cancel;
- (int)run;
- (void).cxx_destruct;
- (void)setPreferredMetalDevice:;
- (float)resourceRequirement;
- (BOOL)autoCancellable;
- (id)initWithRequest:imageAsset:andSignpostPayload:;
- (id)createQueryContextWithError:;
- (void)storeResults:;
+ (id)dependencies;
+ (id)taskWithRequest:imageAsset:andSignpostPayload:;
@end
