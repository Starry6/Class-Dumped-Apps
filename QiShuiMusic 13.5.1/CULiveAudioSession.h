@interface CULiveAudioSession : NSObject
@property (nonatomic) NSArray destinationIDs;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) @? invalidationHandler;
- (id)init;
- (void)_run;
- (void)_invalidated;
- (id)dispatchQueue;
- (void)setDispatchQueue:;
- (void)activateWithCompletion:;
- (void)_invalidate;
- (void).cxx_destruct;
- (id)invalidationHandler;
- (void)setInvalidationHandler:;
- (void)invalidate;
- (void)_reportError:where:;
- (void)_runCLinkActivateStart;
- (void)_runCLinkActivateCompleted;
- (void)_runCLinkPeersActivateStart;
- (id)destinationIDs;
- (void)setDestinationIDs:;
- (void)voiceControllerDidStartRecording:successfully:error:;
- (void)voiceControllerDidStopRecording:forReason:;
- (void)voiceControllerDidDetectStartpoint:;
- (void)voiceControllerDidDetectEndpoint:ofType:atTime:;
- (void)voiceControllerEncoderErrorDidOccur:error:;
- (void)voiceControllerMediaServicesWereReset:;
- (void)voiceControllerRecordBufferAvailable:buffer:;
- (BOOL)_voiceControllerSetup;
- (void)_voiceControllerTearDown;
- (BOOL)_voiceControllerStart;
@end
