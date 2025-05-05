@interface CULiveActionPeerSession : NSObject
@property (nonatomic) RPCompanionLinkDevice destinationDevice;
@property (nonatomic) BOOL speakDisable;
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) @? invalidationHandler;
- (id)dispatchQueue;
- (void)setDispatchQueue:;
- (void)performRequest:completion:;
- (void)activateWithCompletion:;
- (void).cxx_destruct;
- (id)invalidationHandler;
- (void)setInvalidationHandler:;
- (void)invalidate;
- (void)setupWithRequest:completion:;
- (id)destinationDevice;
- (void)setDestinationDevice:;
- (BOOL)speakDisable;
- (void)setSpeakDisable:;
@end
