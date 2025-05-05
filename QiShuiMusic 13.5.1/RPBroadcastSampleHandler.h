@interface RPBroadcastSampleHandler : RPBroadcastHandler
@property (nonatomic) <RPBroadcastDaemonProtocol> daemonProxy;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)daemonProxy;
- (id)group;
- (void).cxx_destruct;
- (void)beginRequestWithExtensionContext:;
- (id)audioQueue;
- (id)videoQueue;
- (void)processPayload:completion:;
- (void)updateServiceInfo:;
- (void)updateBroadcastURL:;
- (void)finishBroadcastWithError:;
- (void)extensionContext:setEndpoint:;
- (void)broadcastStartedWithSetupInfo:;
- (void)broadcastFinished;
- (void)broadcastResumed;
- (void)broadcastPaused;
- (void)processSampleBuffer:withType:;
- (void)broadcastAnnotatedWithApplicationInfo:;
- (void)_processPayload:;
- (void)_processPayloadWithVideoSample:;
- (void)_processPayloadWithAudioSample:type:;
- (void)_setupListenerWithEndpoint:;
- (void)setDaemonProxy:;
@end
