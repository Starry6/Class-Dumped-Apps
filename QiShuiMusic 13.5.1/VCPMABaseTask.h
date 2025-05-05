@interface VCPMABaseTask : NSObject
@property (nonatomic) @? completionHandler;
@property (nonatomic) @? cancelBlock;
- (BOOL)isCanceled;
- (BOOL)run:;
- (id)init;
- (void)cancel;
- (void)dealloc;
- (void)setCancelBlock:;
- (int)run;
- (id)cancelBlock;
- (void).cxx_destruct;
- (id)initWithCompletionHandler:;
- (id)completionHandler;
- (float)resourceRequirement;
- (BOOL)autoCancellable;
@end
