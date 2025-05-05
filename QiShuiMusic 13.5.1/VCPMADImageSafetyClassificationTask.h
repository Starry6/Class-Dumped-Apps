@interface VCPMADImageSafetyClassificationTask : NSObject
- (void)cancel;
- (int)run;
- (void).cxx_destruct;
- (id).cxx_construct;
- (float)resourceRequirement;
- (BOOL)autoCancellable;
- (id)initWithRequest:imageAsset:andSignpostPayload:;
- (void)logMemoryWithMessage:;
+ (id)dependencies;
+ (id)taskWithRequest:imageAsset:andSignpostPayload:;
@end
