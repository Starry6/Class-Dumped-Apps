@interface AnalyticsWorkspaceRetrievalCallback : NSObject
@property (nonatomic) @? workspaceCallback;
@property (nonatomic) NSObject<OS_dispatch_queue> callbackQueue;
- (void)setCallbackQueue:;
- (id)workspaceCallback;
- (id)callbackQueue;
- (void).cxx_destruct;
- (void)setWorkspaceCallback:;
@end
