@interface VCMediaNegotiator : VCMediaNegotiatorBase
@property (nonatomic) q negotiationMode;
@property (nonatomic) BOOL isCaller;
@property (nonatomic) BOOL usePreNegotiation;
@property (nonatomic) VCMediaNegotiatorResultsCaptions negotiatedCaptionsSettings;
@property (nonatomic) BOOL isCellular16x9Capable;
- (void)dealloc;
- (id)negotiationData;
- (BOOL)processRemoteNegotiationData:;
- (unsigned int)remoteMaxBandwidthForOperatingMode:connectionType:;
- (id)negotiateVideoMaxResolutionWithEncodeRules:decodeRules:isEncoder:;
- (id)initWithLocalSettings:;
- (BOOL)isCaller;
- (id)initWithMode:localSettings:;
- (BOOL)isCellular16x9EncodeCapable;
- (id)newResponseBlob;
- (BOOL)processResponseBlob:;
- (BOOL)addBandwidthSettingsForMediaBlob:operatingMode:connectionType:maxBitrate:;
- (BOOL)setupBandwidthSettingsForMediaBlob:;
- (void)saveRemoteBandwidthSettingsWithMediaBlob:;
- (void)negotiateAudioAllowRecording:;
- (void)negotiateAudioUseSBR:;
- (BOOL)negotiateAudioPrimaryPayload:;
- (BOOL)negotiateAudioDTXPayload:;
- (BOOL)negotiateAudioREDPayload:;
- (void)negotiateAudioSecondaryPayloads:;
- (BOOL)negotiateAudioSettings:;
- (BOOL)setupAudioWithNegotiatedSettings:;
- (id)selectVideoFeatureString:selectedPayload:;
- (BOOL)selectBestVideoRuleForTransport:payload:encodingType:localVideoRuleCollection:remoteVideoSettings:negotiatedVideoSettings:isScreen:;
- (void)negotiateRTCPFB:;
- (void)negotiateTilesPerFrame:negotiatedSettings:;
- (BOOL)processPixelFormats:videoResults:;
- (BOOL)negotiateHDRMode:videoResults:;
- (BOOL)processParameterSets:videoResults:;
- (BOOL)negotiateVideoSettings:;
- (BOOL)setupVideoWithNegotiatedSettings:;
- (id)getPreferredScreenPayloadList;
- (BOOL)negotiateScreenSettings:;
- (BOOL)setupScreenWithNegotiatedSettings:;
- (BOOL)selectBestScreenRule:preferredPayloadOrder:;
- (void)setupFaceTimeSettingsForMediaBlob:isResponse:;
- (BOOL)negotiateFaceTimeSettings:;
- (void)setupMomentsForMediaBlob:;
- (BOOL)negotiateMomentsWithMomentsSettings:;
- (void)setupMultiwayAudioStreamsForMediaBlob:;
- (BOOL)negotiateMultiwayAudioStreams:;
- (void)setupMultiwayVideoStreamsForMediaBlob:;
- (BOOL)isVideoStreamSupported:;
- (BOOL)negotiateMultiwayVideoStreams:;
- (id)newStreamGroupCodecConfigForPayload:;
- (id)newStreamConfigFromMultiwayAudioStream:;
- (id)newStreamConfigFromMultiwayVideoStream:;
- (int)mediaBlobLanguageWithLocale:;
- (id)localeWithMediaBlobLanguage:;
- (void)setupCaptionsForMediaBlob:;
- (BOOL)negotiateCaptionsWithCaptionsSettings:;
- (BOOL)usePreNegotiation;
- (id)negotiatedCaptionsSettings;
- (long long)negotiationMode;
- (BOOL)isCellular16x9Capable;
+ (id)newCompressedBlob:;
+ (id)newDecompressedBlob:;
+ (BOOL)initializeLocalConfiguration:negotiationData:deviceRole:preferredAudioPayload:;
+ (id)streamGroupIDsWithMediaBlob:;
+ (id)negotiationBlobFromData:;
+ (id)localConfigurationWithData:deviceRole:preferredAudioPayload:;
+ (id)negotiatedFeaturesStringWithLocalFeaturesString:remoteFeaturesString:;
+ (BOOL)validateMultiwayVideoStreamConfigurations:;
+ (BOOL)validateMultiwayAudioStreamConfigurations:;
+ (BOOL)validateLocalConfiguration:;
+ (void)dumpBlob:prefix:force:;
+ (unsigned int)mappedRemoteQualityIndexForQualityIndex:;
@end
