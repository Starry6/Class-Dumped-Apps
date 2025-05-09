@interface VCMediaStreamConfig : NSObject
@property (nonatomic) q direction;
@property (nonatomic) VCNetworkAddress localAddress;
@property (nonatomic) NSString cName;
@property (nonatomic) VCNetworkAddress remoteAddress;
@property (nonatomic) I remoteSSRC;
@property (nonatomic) I localSSRC;
@property (nonatomic) Q recommendedMTU;
@property (nonatomic) ^{tagVCJBTargetEstimatorSynchronizer=} jbTargetEstimatorSynchronizer;
@property (nonatomic) NSData sendMediaKey;
@property (nonatomic) NSData receiveMediaKey;
@property (nonatomic) NSDictionary txPayloadMap;
@property (nonatomic) NSDictionary rxPayloadMap;
@property (nonatomic) q SRTPCipherSuite;
@property (nonatomic) BOOL rtpTimeOutEnabled;
@property (nonatomic) double rtpTimeOutInterval;
@property (nonatomic) I rtpTimestampRate;
@property (nonatomic) BOOL decryptionTimeOutEnabled;
@property (nonatomic) double decryptionTimeOutInterval;
@property (nonatomic) double decryptionMKMRecoveryInterval;
@property (nonatomic) I cellularUniqueTag;
@property (nonatomic) q SRTCPCipherSuite;
@property (nonatomic) BOOL rtcpEnabled;
@property (nonatomic) BOOL rtcpXREnabled;
@property (nonatomic) BOOL rtcpTimeOutEnabled;
@property (nonatomic) double rtcpTimeOutInterval;
@property (nonatomic) double rtcpSendInterval;
@property (nonatomic) BOOL rtcpReceiveCallbackEnabled;
@property (nonatomic) S rtcpRemotePort;
@property (nonatomic) q primaryTxCodecType;
@property (nonatomic) BOOL rateAdaptationEnabled;
@property (nonatomic) ^{tagVCSecurityKeyHolder=} securityKeyHolder;
@property (nonatomic) NSInteger sframeCipherSuite;
@property (nonatomic) VCMediaStreamMultiwayConfig multiwayConfig;
@property (nonatomic) NSInteger captureSource;
@property (nonatomic) VCNetworkFeedbackController networkFeedbackController;
@property (nonatomic) BOOL isServerPacketRetransmissionEnabled;
@property (nonatomic) I nackGeneratorStorebagConfigVersion;
@property (nonatomic) BOOL isExtraDelayForPacketRetransmissionsEnabled;
@property (nonatomic) VCMediaStreamRateControlConfig rateControlConfig;
@property (nonatomic) q streamInputID;
@property (nonatomic) Q networkClockID;
@property (nonatomic) NSInteger jitterBufferMode;
@property (nonatomic) Q fixedJitterBufferSize;
- (long long)direction;
- (id)remoteAddress;
- (id)localAddress;
- (id)init;
- (void)setDirection:;
- (void)dealloc;
- (void)setLocalAddress:;
- (void)setRemoteAddress:;
- (id)description;
- (void)setRtpTimeOutEnabled:;
- (void)setSRTCPCipherSuite:;
- (void)setRtcpXREnabled:;
- (void)setRtcpSendInterval:;
- (void)setRtcpRemotePort:;
- (void)setSRTPCipherSuite:;
- (void)setRtcpTimeOutEnabled:;
- (double)rtcpTimeOutInterval;
- (void)setRtpTimeOutInterval:;
- (void)setRtcpEnabled:;
- (double)rtpTimeOutInterval;
- (void)setRtcpTimeOutInterval:;
- (BOOL)isRTPTimeOutEnabled;
- (void)setRemoteSSRC:;
- (void)setRateAdaptationEnabled:;
- (double)rtcpSendInterval;
- (unsigned short)rtcpRemotePort;
- (unsigned int)remoteSSRC;
- (long long)SRTPCipherSuite;
- (long long)SRTCPCipherSuite;
- (BOOL)isRateAdaptationEnabled;
- (BOOL)isRTCPEnabled;
- (BOOL)isRTCPTimeOutEnabled;
- (id)initWithClientDictionary:;
- (unsigned int)rtpTimestampRate;
- (void)setRtpTimestampRate:;
- (int)captureSource;
- (void)setCaptureSource:;
- (id)jbTargetEstimatorSynchronizer;
- (void)setJbTargetEstimatorSynchronizer:;
- (id)networkFeedbackController;
- (void)setNetworkFeedbackController:;
- (unsigned int)cellularUniqueTag;
- (void)setCellularUniqueTag:;
- (long long)streamInputID;
- (unsigned int)localSSRC;
- (unsigned long long)recommendedMTU;
- (void)setRecommendedMTU:;
- (void)setDecryptionTimeOutEnabled:;
- (void)setDecryptionTimeOutInterval:;
- (BOOL)isRTCPXREnabled;
- (double)decryptionMKMRecoveryInterval;
- (void)setDecryptionMKMRecoveryInterval:;
- (void)setSecurityKeyHolder:;
- (void)addRxPayloadType:;
- (void)addRxPayloadType:networkPayload:;
- (void)addTxPayloadType:;
- (void)addTxPayloadType:networkPayload:;
- (long long)primaryTxCodecType;
- (void)setupMediaStreamConfig;
- (void)applyMediaStreamClientDictionary:;
- (int)jitterBufferModeFromAVCJitterBufferMode:;
- (id)cName;
- (void)setCName:;
- (void)setLocalSSRC:;
- (BOOL)isDecryptionTimeOutEnabled;
- (double)decryptionTimeOutInterval;
- (id)sendMediaKey;
- (void)setSendMediaKey:;
- (id)receiveMediaKey;
- (void)setReceiveMediaKey:;
- (id)securityKeyHolder;
- (int)sframeCipherSuite;
- (void)setSframeCipherSuite:;
- (id)rxPayloadMap;
- (id)txPayloadMap;
- (id)multiwayConfig;
- (void)setMultiwayConfig:;
- (BOOL)isRTCPReceiveCallbackEnabled;
- (void)setRtcpReceiveCallbackEnabled:;
- (id)rateControlConfig;
- (void)setRateControlConfig:;
- (void)setStreamInputID:;
- (unsigned long long)networkClockID;
- (void)setNetworkClockID:;
- (int)jitterBufferMode;
- (void)setJitterBufferMode:;
- (unsigned long long)fixedJitterBufferSize;
- (void)setFixedJitterBufferSize:;
- (BOOL)isServerPacketRetransmissionEnabled;
- (void)setIsServerPacketRetransmissionEnabled:;
- (unsigned int)nackGeneratorStorebagConfigVersion;
- (void)setNackGeneratorStorebagConfigVersion:;
- (BOOL)isExtraDelayForPacketRetransmissionsEnabled;
- (void)setIsExtraDelayForPacketRetransmissionsEnabled:;
@end
