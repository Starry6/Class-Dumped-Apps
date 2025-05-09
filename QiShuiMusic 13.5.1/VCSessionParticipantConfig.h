@interface VCSessionParticipantConfig : NSObject
@property (nonatomic) NSData participantData;
@property (nonatomic) NSString uuid;
@property (nonatomic) Q idsParticipantID;
@property (nonatomic) BOOL audioEnabled;
@property (nonatomic) BOOL videoEnabled;
@property (nonatomic) BOOL screenEnabled;
@property (nonatomic) BOOL frequencyMeteringEnabled;
@property (nonatomic) BOOL audioMuted;
@property (nonatomic) float volume;
@property (nonatomic) float audioPosition;
@property (nonatomic) BOOL audioPaused;
@property (nonatomic) BOOL videoPaused;
@property (nonatomic) C videoQuality;
@property (nonatomic) I visibilityIndex;
@property (nonatomic) I prominenceIndex;
@property (nonatomic) NSData positionalInfo;
@property (nonatomic) ^v spatialMetadata;
@property (nonatomic) ^{__CFDictionary=} spatialMetadataEntryMap;
@property (nonatomic) NSInteger processId;
@property (nonatomic) VCSessionMediaNegotiator mediaNegotiator;
@property (nonatomic) VCSecurityKeyManager securityKeyManager;
@property (nonatomic) NSString sessionUUID;
@property (nonatomic) NSString idsDestination;
@property (nonatomic) I transportSessionID;
@property (nonatomic) BOOL isGKVoiceChat;
@property (nonatomic) BOOL isLowLatencyAudio;
@property (nonatomic) q sessionMode;
@property (nonatomic) BOOL isOneToOneModeEnabled;
@property (nonatomic) NSObject<OS_nw_activity> nwActivity;
@property (nonatomic) VCNetworkFeedbackController networkFeedbackController;
@property (nonatomic) NSDictionary mediaStates;
@property (nonatomic) VCAudioCaptionsCoordinator captionsCoordinator;
@property (nonatomic) BOOL isServerRTxEnabled;
- (float)volume;
- (void)dealloc;
- (int)processId;
- (void)setVolume:;
- (id)uuid;
- (id)sessionUUID;
- (void)setUuid:;
- (void)setProcessId:;
- (void)setVideoQuality:;
- (void)setSessionUUID:;
- (id)description;
- (unsigned char)videoQuality;
- (id)nwActivity;
- (void)setAudioEnabled:;
- (void)setVideoEnabled:;
- (BOOL)videoEnabled;
- (BOOL)audioEnabled;
- (id)idsDestination;
- (id)participantData;
- (void)setScreenEnabled:;
- (void)setAudioPaused:;
- (BOOL)screenEnabled;
- (BOOL)audioPaused;
- (BOOL)isOneToOneModeEnabled;
- (void)setVideoPaused:;
- (BOOL)videoPaused;
- (void)setNwActivity:;
- (void)setIdsDestination:;
- (long long)sessionMode;
- (void)setAudioMuted:;
- (BOOL)audioMuted;
- (BOOL)isGKVoiceChat;
- (void)setIsGKVoiceChat:;
- (void)cleanupNwActivity;
- (id)captionsCoordinator;
- (void)setCaptionsCoordinator:;
- (void)setSessionMode:;
- (id)spatialMetadata;
- (void)setSpatialMetadata:;
- (unsigned int)visibilityIndex;
- (unsigned int)prominenceIndex;
- (void)setVisibilityIndex:;
- (void)setProminenceIndex:;
- (id)positionalInfo;
- (BOOL)isServerRTxEnabled;
- (void)setIsServerRTxEnabled:;
- (id)securityKeyManager;
- (void)setSecurityKeyManager:;
- (unsigned long long)idsParticipantID;
- (void)setIdsParticipantID:;
- (id)networkFeedbackController;
- (void)setNetworkFeedbackController:;
- (void)setIsOneToOneModeEnabled:;
- (unsigned int)transportSessionID;
- (void)setTransportSessionID:;
- (id)spatialMetadataEntryMap;
- (void)setSpatialMetadataEntryMap:;
- (void)setParticipantData:;
- (BOOL)frequencyMeteringEnabled;
- (void)setFrequencyMeteringEnabled:;
- (float)audioPosition;
- (void)setAudioPosition:;
- (void)setPositionalInfo:;
- (id)mediaStates;
- (void)setMediaStates:;
- (id)mediaNegotiator;
- (void)setMediaNegotiator:;
- (BOOL)isLowLatencyAudio;
- (void)setIsLowLatencyAudio:;
@end
