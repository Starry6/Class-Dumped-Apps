@interface CULiveAudioPeerSession : NSObject
@property (nonatomic) RPCompanionLinkDevice destinationDevice;
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) @? invalidationHandler;
- (id)dispatchQueue;
- (void)setDispatchQueue:;
- (void)activateWithCompletion:;
- (void).cxx_destruct;
- (id)invalidationHandler;
- (void)setInvalidationHandler:;
- (void)invalidate;
- (id)destinationDevice;
- (void)setDestinationDevice:;
- (void)_activateCompleted:;
- (void)sendAudioDataEvent:;
@end
