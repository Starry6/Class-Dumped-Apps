@interface VCPMADPersonIdentificationTask : NSObject
- (void)cancel;
- (int)run;
- (void).cxx_destruct;
- (float)resourceRequirement;
- (BOOL)autoCancellable;
- (id)initWithRequest:imageAsset:andSignpostPayload:;
+ (id)dependencies;
+ (id)taskName;
+ (id)taskWithRequest:imageAsset:andSignpostPayload:;
@end
