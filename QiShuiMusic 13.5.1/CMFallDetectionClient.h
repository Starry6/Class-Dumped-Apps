@interface CMFallDetectionClient : NSObject
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) NSObject<OS_dispatch_queue> connectionQueue;
@property (nonatomic) <CMFallDetectionClientXPC> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_setupConnection;
- (void)setConnectionQueue:;
- (id)init;
- (void)dealloc;
- (id)connectionQueue;
- (void)setDelegate:;
- (void)reconnect;
- (id)delegate;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (void)invalidate;
- (void)didHideFallDetectionPrompt;
- (void)didStartBackgroundSession;
- (void)appDidRequestFallDetectionPrompt;
- (void)appDidFinishProcessingEventWithDuration:;
- (void)_invalidateInternal;
@end
