@interface VCAudioClientManager : NSObject
- (id)init;
- (void)dealloc;
- (void)registerBlocksForService;
- (id)getAudioClientWithProcessId:create:;
- (id)handleRegisterMutedTalkerNotificationForAudioClient:error:;
- (id)handleUnregisterMutedTalkerNotificationForAudioClient:error:;
- (void)handleMutedTalkerNotification:;
- (void)registerForMutedTalkerNotfications;
- (void)unregisterFromMutedTalkerNotfications;
- (id)handleNewClientWithXPCArguments:error:;
- (id)handleDisconnectWithXPCArguments:;
- (void)unregisterBlocksForService;
- (void)secureMicrophoneEngagedNotification;
+ (id)sharedInstance;
@end
