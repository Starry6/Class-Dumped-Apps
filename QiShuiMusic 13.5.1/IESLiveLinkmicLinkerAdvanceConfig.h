@interface IESLiveLinkmicLinkerAdvanceConfig : IESLiveLinkmicLinkerConfig
@property (nonatomic) NSString basePath;
@property (nonatomic) BOOL openInviteTimer;
@property (nonatomic) BOOL openApplyTimer;
@property (nonatomic) IESLiveInterativeTimeOutConfig timeOutConfig;
@property (nonatomic) # modelClass;
@property (nonatomic) <IESLiveInteractiveStreamLayout> streamLayout;
@property (nonatomic) <IESLiveInteractiveLocalLayout> localLayout;
@property (nonatomic) <IESLiveLinkmicCanvasLayoutProvider> layoutProvider;
@property (nonatomic) q clientMode;
@property (nonatomic) IESLiveInteractiveStreamProfile streamProfile;
@property (nonatomic) IESLiveInteractAudioReportConfig audioReportConfig;
@property (nonatomic) BOOL clientMixStream;
@property (nonatomic) BOOL enableCustomMixPriority;
@property (nonatomic) q mixPriority;
@property (nonatomic) BOOL reportRTCInfo;
- (BOOL)openInviteTimer;
- (void)setLocalLayout:;
- (BOOL)clientMixStream;
- (void)setMixPriority:;
- (id)audioReportConfig;
- (BOOL)enableCustomMixPriority;
- (id)localLayout;
- (long long)mixPriority;
- (BOOL)openApplyTimer;
- (BOOL)reportRTCInfo;
- (void)setAudioReportConfig:;
- (void)setClientMixStream:;
- (void)setEnableCustomMixPriority:;
- (void)setOpenApplyTimer:;
- (void)setOpenInviteTimer:;
- (void)setReportRTCInfo:;
- (void)setStreamLayout:;
- (void)setStreamProfile:;
- (id)streamLayout;
- (id)streamProfile;
- (id)timeOutConfig;
- (id)layoutProvider;
- (id)init;
- (void)setLayoutProvider:;
- (Class)modelClass;
- (void)setModelClass:;
- (void).cxx_destruct;
- (id)basePath;
- (void)setClientMode:;
- (long long)clientMode;
- (void)setBasePath:;
@end
