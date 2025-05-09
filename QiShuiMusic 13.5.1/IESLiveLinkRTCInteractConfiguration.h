@interface IESLiveLinkRTCInteractConfiguration : NSObject
@property (nonatomic) NSString channelName;
@property (nonatomic) NSString channelKey;
@property (nonatomic) NSString appID;
@property (nonatomic) NSData appKey;
@property (nonatomic) q clientType;
@property (nonatomic) IESLiveLinkRTCSignalUser roomOwner;
@property (nonatomic) IESLiveLinkRTCSignalUser currentUser;
@property (nonatomic) q mode;
@property (nonatomic) q playMode;
@property (nonatomic) BOOL fmNeedRender;
@property (nonatomic) BOOL deferredCompositingLayout;
@property (nonatomic) NSString publishUrl;
@property (nonatomic) NSString serverMixTaskId;
@property (nonatomic) q streamWidth;
@property (nonatomic) q streamHeight;
@property (nonatomic) q streamFps;
@property (nonatomic) q streamBitrate;
@property (nonatomic) q streamAudioCodec;
@property (nonatomic) q streamVideoCodec;
@property (nonatomic) q customizedAudioProfile;
@property (nonatomic) {IESLiveLinkRTCVideoProfile=qqqq} userCustomizedProfile;
@property (nonatomic) BOOL enableInEarMonitoring;
@property (nonatomic) BOOL enableExternVideo;
@property (nonatomic) BOOL retainLastVideoFrame;
@property (nonatomic) BOOL enableExternAudio;
@property (nonatomic) BOOL byteAudioModeEnable;
@property (nonatomic) BOOL rtcAudioCaptureDefaultStart;
@property (nonatomic) BOOL rtcVideoCaptureDefaultStart;
@property (nonatomic) Q externAudioSampleRate;
@property (nonatomic) Q externAudioChannelsPerFrame;
@property (nonatomic) NSString project_key;
@property (nonatomic) BOOL useExternalRender;
@property (nonatomic) BOOL useExternalAudioRender;
@property (nonatomic) q interactMixType;
@property (nonatomic) NSString appChannelType;
@property (nonatomic) NSString aID;
@property (nonatomic) NSString appVersion;
@property (nonatomic) q streamGop;
@property (nonatomic) q streamAudioChannels;
@property (nonatomic) q streamAudioSamplerate;
@property (nonatomic) q streamAudiobitrate;
@property (nonatomic) NSDictionary rtcExtInfo;
@property (nonatomic) BOOL forceGlobalAPIServer;
@property (nonatomic) NSString deviceId;
@property (nonatomic) q envMode;
@property (nonatomic) BOOL isLandscapeVideo;
@property (nonatomic) BOOL audioCaptureAsync;
@property (nonatomic) NSString abTestConfig;
@property (nonatomic) NSDictionary sdkParams;
@property (nonatomic) BOOL sessionNeedRender;
@property (nonatomic) BOOL enableBFrame;
@property (nonatomic) BOOL useOriginalFrame;
@property (nonatomic) BOOL useAudioMixer;
@property (nonatomic) BOOL defaultAudioScenarioIsMedia;
@property (nonatomic) q mixSyncQueueLengthMs;
@property (nonatomic) BOOL enableSingleChorusFixedAVSync;
@property (nonatomic) q singleChorusFrameBufferMaxAllowSize;
@property (nonatomic) q singleChorusAuxMaxAllowDelay;
- (long long)interactMixType;
- (id)serverMixTaskId;
- (void)setAID:;
- (void)setDefaultAudioScenarioIsMedia:;
- (void)setExternAudioChannelsPerFrame:;
- (void)setRtcVideoCaptureDefaultStart:;
- (void)setStreamWidth:;
- (id)aID;
- (void)setProject_key:;
- (void)setRtcAudioCaptureDefaultStart:;
- (id)abTestConfig;
- (id)appChannelType;
- (id)appKey;
- (BOOL)audioCaptureAsync;
- (BOOL)byteAudioModeEnable;
- (id)channelKey;
- (long long)customizedAudioProfile;
- (BOOL)defaultAudioScenarioIsMedia;
- (BOOL)deferredCompositingLayout;
- (id)descOfMode:;
- (BOOL)enableBFrame;
- (BOOL)enableExternAudio;
- (BOOL)enableExternVideo;
- (BOOL)enableInEarMonitoring;
- (BOOL)enableSingleChorusFixedAVSync;
- (unsigned long long)externAudioChannelsPerFrame;
- (unsigned long long)externAudioSampleRate;
- (BOOL)fmNeedRender;
- (BOOL)forceGlobalAPIServer;
- (BOOL)isLandscapeVideo;
- (long long)mixSyncQueueLengthMs;
- (id)project_key;
- (id)publishUrl;
- (BOOL)retainLastVideoFrame;
- (BOOL)rtcAudioCaptureDefaultStart;
- (id)rtcExtInfo;
- (BOOL)rtcVideoCaptureDefaultStart;
- (id)sdkParamDescription;
- (id)sdkParams;
- (BOOL)sessionNeedRender;
- (void)setAbTestConfig:;
- (void)setAppChannelType:;
- (void)setAppKey:;
- (void)setAudioCaptureAsync:;
- (void)setByteAudioModeEnable:;
- (void)setChannelKey:;
- (void)setCustomizedAudioProfile:;
- (void)setDeferredCompositingLayout:;
- (void)setEnableBFrame:;
- (void)setEnableExternAudio:;
- (void)setEnableExternVideo:;
- (void)setEnableInEarMonitoring:;
- (void)setEnableSingleChorusFixedAVSync:;
- (void)setExternAudioSampleRate:;
- (void)setFmNeedRender:;
- (void)setForceGlobalAPIServer:;
- (void)setInteractMixType:;
- (void)setIsLandscapeVideo:;
- (void)setMixSyncQueueLengthMs:;
- (void)setPublishUrl:;
- (void)setRetainLastVideoFrame:;
- (void)setRtcExtInfo:;
- (void)setSdkParams:;
- (void)setServerMixTaskId:;
- (void)setSessionNeedRender:;
- (void)setSingleChorusAuxMaxAllowDelay:;
- (void)setSingleChorusFrameBufferMaxAllowSize:;
- (void)setStreamAudioChannels:;
- (void)setStreamAudioCodec:;
- (void)setStreamAudioSamplerate:;
- (void)setStreamAudiobitrate:;
- (void)setStreamBitrate:;
- (void)setStreamFps:;
- (void)setStreamGop:;
- (void)setStreamHeight:;
- (void)setStreamVideoCodec:;
- (void)setUseAudioMixer:;
- (void)setUseExternalAudioRender:;
- (void)setUseExternalRender:;
- (void)setUseOriginalFrame:;
- (void)setUserCustomizedProfile:;
- (long long)singleChorusAuxMaxAllowDelay;
- (long long)singleChorusFrameBufferMaxAllowSize;
- (long long)streamAudioChannels;
- (long long)streamAudioCodec;
- (long long)streamAudioSamplerate;
- (long long)streamAudiobitrate;
- (long long)streamBitrate;
- (long long)streamFps;
- (long long)streamGop;
- (long long)streamHeight;
- (long long)streamVideoCodec;
- (long long)streamWidth;
- (BOOL)useAudioMixer;
- (BOOL)useExternalAudioRender;
- (BOOL)useExternalRender;
- (BOOL)useOriginalFrame;
- (id)userCustomizedProfile;
- (void)setAppVersion:;
- (long long)clientType;
- (id)appVersion;
- (BOOL)validate;
- (id)deviceId;
- (void)setCurrentUser:;
- (void)setDeviceId:;
- (id)init;
- (void)setAppID:;
- (id)channelName;
- (id)appID;
- (void).cxx_destruct;
- (id)currentUser;
- (id)description;
- (long long)mode;
- (void)setMode:;
- (void)setClientType:;
- (void)setChannelName:;
- (void)setEnvMode:;
- (long long)envMode;
- (void)setPlayMode:;
- (long long)playMode;
- (id)roomOwner;
- (void)setRoomOwner:;
+ (id)getVideoProfileDesc:;
+ (BOOL)isShareVideo:;
@end
