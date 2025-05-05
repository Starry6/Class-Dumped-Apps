@interface SSVDirectUploadQueue : NSObject
@property (nonatomic) NSArray uploadKinds;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithUploadKinds:;
- (void)addUploadObserver:;
- (void)cancelAllUploadsWithCompletionBlock:;
- (void)cancelUploads:completionBlock:;
- (void)getUploadsWithCompletionBlock:;
- (void)pauseAllUploadsWithCompletionBlock:;
- (void)pauseUploads:completionBlock:;
- (void)removeUploadObserver:;
- (void)resumeAllUploadsWithCompletionBlock:;
- (void)resumeUploads:completionBlock:;
- (id)uploadKinds;
- (void)_establishInboundConnection;
- (void)_handleAddUploadsMessage:;
- (void)_handleChangeUploadsMessage:;
- (void)_handleInboundMessage:connection:;
- (void)_handleRemoveUploadsMessage:;
- (id)_outboundConnection;
- (void)_sendObserversUploadsDidChange;
- (void)_sendSimpleMessage:completionBlock:;
@end
