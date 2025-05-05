@interface VCPHomeResidentMaintenanceTask : NSObject
@property (nonatomic) @? cancelBlock;
- (BOOL)isCanceled;
- (void)cancel;
- (void)dealloc;
- (void)setCancelBlock:;
- (int)run;
- (id)cancelBlock;
- (void).cxx_destruct;
- (float)resourceRequirement;
- (BOOL)autoCancellable;
- (id)initWithOptions:andCompletionHandler:;
+ (id)taskWithOptions:andCompletionHandler:;
@end
