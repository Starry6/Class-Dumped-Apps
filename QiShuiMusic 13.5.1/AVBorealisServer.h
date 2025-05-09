@interface AVBorealisServer : NSObject
@property (nonatomic) NSXPCListener serverListener;
@property (nonatomic) NSMutableArray clientConnections;
@property (nonatomic) NSObject<OS_dispatch_queue> notificationQueue;
@property (nonatomic) ^v mobileAssistantDylib;
@property (nonatomic) ^? afSiriActivationBuiltInMicVoiceFuncPtr;
@property (nonatomic) ^v voiceTriggerDylib;
@property (nonatomic) # clsVTStateManager;
@property (nonatomic) VTStateManager vtStateManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)initializeWithReply:;
- (void)voiceTriggerPastDataFramesAvailable:;
- (void)setMobileAssistantDylib:;
- (Class)clsVTStateManager;
- (id)clientConnections;
- (id)mobileAssistantDylib;
- (void)setAggressiveECMode:reply:;
- (void)speakerStateMutedReply:;
- (BOOL)heySiriEnabled;
- (id)notificationQueue;
- (void)getInputChannelInfoCompletion:;
- (void)siriClientsRecordingReply:;
- (void)setServerListener:;
- (void)setAfSiriActivationBuiltInMicVoiceFuncPtr:;
- (void)enableSpeakerStateListening:reply:;
- (void)speakerStateActiveReply:;
- (void)enableBargeInMode:reply:;
- (void)setNotificationQueue:;
- (void)setVoiceTriggerDylib:;
- (id)vtStateManager;
- (void)setVtStateManager:;
- (void)siriClientRecordStateChanged:;
- (void)listeningEnabledReply:;
- (void)enableVoiceTriggerListening:reply:;
- (id)afSiriActivationBuiltInMicVoiceFuncPtr;
- (void)updateVoiceTriggerConfiguration:reply:;
- (BOOL)listener:shouldAcceptNewConnection:;
- (BOOL)hardwareSupportsVoiceTrigger;
- (void)setListeningProperty:reply:;
- (void)sendSpeakerMuteStateChangedNotification:;
- (void).cxx_destruct;
- (id)serverListener;
- (void)setClsVTStateManager:;
- (void)sendSpeakerActiveStateChangedNotification:;
- (void)sendVoiceTriggerOccuredNotification:;
- (void)speechDetectionVADCreated;
- (id)voiceTriggerDylib;
- (void)setClientConnections:;
@end
