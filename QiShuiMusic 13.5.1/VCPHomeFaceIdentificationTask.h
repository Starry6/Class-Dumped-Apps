@interface VCPHomeFaceIdentificationTask : NSObject
- (BOOL)run:;
- (void)cancel;
- (void)dealloc;
- (int)run;
- (void).cxx_destruct;
- (float)resourceRequirement;
- (BOOL)autoCancellable;
- (id)initWithFaceCrop:andCompletionHandler:;
- (void)configureRequest:withRevision:;
+ (id)taskWithFaceCrop:andCompletionHandler:;
@end
