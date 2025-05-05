@interface AVCaptureDataOutputDelegateCallbackHelper : NSObject
@property (nonatomic) @ activeDelegate;
@property (nonatomic) NSObject<OS_dispatch_queue> activeCallbackQueue;
@property (nonatomic) @ clientDelegate;
@property (nonatomic) NSObject<OS_dispatch_queue> clientCallbackQueue;
@property (nonatomic) @ delegateOverride;
@property (nonatomic) NSObject<OS_dispatch_queue> delegateOverrideCallbackQueue;
- (id)clientDelegate;
- (id)activeDelegate;
- (void)dealloc;
- (id)initWithQueueName:canSetClientDelegateCallbackQueueWhenRunningInsideMediaserverd:;
- (id)activeCallbackQueue;
- (id)clientCallbackQueue;
- (id)delegateOverride;
- (void)releaseRemoteQueueReceiver;
- (void)updateRemoteQueueReceiver:handler:;
- (BOOL)_validateCallbackQueue:exceptionReason:;
- (void)updateLocalQueue:handler:;
- (id)_activeDelegate;
- (BOOL)setClientDelegate:clientCallbackQueue:exceptionReason:;
- (BOOL)setDelegateOverride:delegateOverrideCallbackQueue:exceptionReason:;
- (id)delegateOverrideCallbackQueue;
- (id)_activeCallbackQueue;
@end
