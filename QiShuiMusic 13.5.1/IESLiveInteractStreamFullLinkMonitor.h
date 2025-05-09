@interface IESLiveInteractStreamFullLinkMonitor : NSObject
@property (nonatomic) NSDictionary baseDictionary;
@property (nonatomic) <IESLiveFullLinkMonitor> fullLinkMonitor;
@property (nonatomic) <IESLiveRealStreamingProviderAdapter> streamProvider;
@property (nonatomic) IESLiveInteractStreamConfig interactConfig;
@property (nonatomic) NSDictionary extraMonitorDict;
@property (nonatomic) double interactStartJoinChannelTimeInterval;
@property (nonatomic) double interactJoinChannelSuccessTimeInterval;
@property (nonatomic) double interactFirstVideoFrameTimeInterval;
@property (nonatomic) double interactFirstFrameRenderTimeInterval;
@property (nonatomic) double interactFirstAudioFrameTimeInterval;
@property (nonatomic) double interactDidLeaveChannelTimeInterval;
- (id)fullLinkMonitor;
- (void)monitorApiCall:;
- (void)appendExtraInfoWith:;
- (id)baseDictionary;
- (id)extraMonitorDict;
- (id)interactConfig;
- (double)interactDidLeaveChannelTimeInterval;
- (double)interactFirstAudioFrameTimeInterval;
- (double)interactFirstFrameRenderTimeInterval;
- (double)interactFirstVideoFrameTimeInterval;
- (double)interactJoinChannelSuccessTimeInterval;
- (double)interactStartJoinChannelTimeInterval;
- (void)monitorInformationReport:;
- (void)monitorKeyApiCall:;
- (void)monitorRTMLinkMessage:;
- (void)monitorSDKCallBack:;
- (void)reportRTCData:logType:;
- (void)setBaseDictionary:;
- (void)setExtraMonitorDict:;
- (void)setFullLinkMonitor:;
- (void)setInteractConfig:;
- (void)setInteractDidLeaveChannelTimeInterval:;
- (void)setInteractFirstAudioFrameTimeInterval:;
- (void)setInteractFirstFrameRenderTimeInterval:;
- (void)setInteractFirstVideoFrameTimeInterval:;
- (void)setInteractJoinChannelSuccessTimeInterval:;
- (void)setInteractStartJoinChannelTimeInterval:;
- (unsigned long long)transferPlayMode:;
- (void)updateInteractConfig:;
- (id)streamProvider;
- (void)setStreamProvider:;
- (void).cxx_destruct;
@end
