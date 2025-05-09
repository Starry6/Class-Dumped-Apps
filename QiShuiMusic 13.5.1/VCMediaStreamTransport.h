@interface VCMediaStreamTransport : NSObject
@property (nonatomic) VCMediaStreamConfig streamConfig;
@property (nonatomic) ^{tagHANDLE=i} rtpHandle;
@property (nonatomic) S idsStreamId;
@property (nonatomic) double lastReceivedRTCPPacketTime;
@property (nonatomic) BOOL rtcpSendEnabled;
@property (nonatomic) BOOL encryptionInfoReceived;
@property (nonatomic) q streamDirection;
@property (nonatomic) double rtpTimeoutInterval;
@property (nonatomic) BOOL rtpTimeoutEnabled;
@property (nonatomic) double decryptionMKMRecoveryInterval;
@property (nonatomic) double decryptionTimeoutInterval;
@property (nonatomic) BOOL decryptionTimeoutEnabled;
@property (nonatomic) double rtcpTimeoutInterval;
@property (nonatomic) double rtcpSendInterval;
@property (nonatomic) BOOL rtcpTimeoutEnabled;
@property (nonatomic) BOOL rtcpEnabled;
@property (nonatomic) BOOL rtcpXREnabled;
@property (nonatomic) AVCBasebandCongestionDetector basebandCongestionDetector;
@property (nonatomic) ^{tagVCCryptor=} receiverSframeCryptor;
@property (nonatomic) ^{tagVCCryptor=} transmitterSframeCryptor;
- (void)dealloc;
- (void)reset;
- (void)setRtcpSendInterval:;
- (void)setRtcpEnabled:;
- (int)onStart;
- (double)rtcpSendInterval;
- (BOOL)isRTCPEnabled;
- (id)basebandCongestionDetector;
- (void)setBasebandCongestionDetector:;
- (double)lastReceivedRTCPPacketTime;
- (void)setStreamDirection:;
- (void)onStop;
- (id)rtpHandle;
- (unsigned int)getRTCPReportNTPTimeMiddle32ForReportId:;
- (unsigned int)getExtendedSequenceNumberForSequenceNumber:;
- (void)handleEncryptionInfoChange:;
- (BOOL)encryptionInfoReceived;
- (long long)streamDirection;
- (BOOL)setupRTPWithNWConnection:error:;
- (BOOL)setupRTPWithIPInfo:error:;
- (void)sendControlPacketWithParameters:;
- (BOOL)isRTPTimeoutEnabled;
- (BOOL)isRTCPTimeoutEnabled;
- (BOOL)isDecryptionTimeoutEnabled;
- (BOOL)isRTCPSendEnabled;
- (id)initWithHandle:localSSRC:;
- (BOOL)isSameSRTPConfig:;
- (void)updateLastGeneratedKeyMaterial;
- (BOOL)configureWithStreamConfig:setupInfo:reducedSizeRTCPPackets:hopByHopEncryptRTCPPackets:statisticsCollector:basebandCongestionDetector:error:;
- (BOOL)isSendingMedia:;
- (id)createSframeCryptorWithStreamConfig:ssrc:error:;
- (BOOL)setupSframeCryptorsWithError:;
- (void)resetPayloadMapping;
- (int)getCryptoSet:withMediaKey:;
- (int)setupSRTP;
- (BOOL)setupRTPWithSockets:error:;
- (int)setupRTPWithTransportStreams;
- (BOOL)setupRTPForIDS:;
- (BOOL)setupRTPWithTransportSetupInfo:error:;
- (void)registerRTPPayloadMappings;
- (id)rxNetworkPayloads;
- (BOOL)isRTCPXREnabled;
- (void)setRtpTimeoutEnabled:;
- (void)setRtpTimeoutInterval:;
- (double)rtpTimeoutInterval;
- (void)setRtcpTimeoutEnabled:;
- (void)setRtcpTimeoutInterval:;
- (double)rtcpTimeoutInterval;
- (void)setDecryptionTimeoutEnabled:;
- (void)setDecryptionTimeoutInterval:;
- (double)decryptionTimeoutInterval;
- (double)decryptionMKMRecoveryInterval;
- (void)setDecryptionMKMRecoveryInterval:;
- (BOOL)sendIntervalDidElapse:remainingTime:;
- (BOOL)setThrottlingInterval:;
- (unsigned short)idsStreamId;
- (BOOL)generateReceptionReport:reportCount:;
- (BOOL)generateRTCPXRSummaryReport:reportCount:;
- (BOOL)generateRTCPXRVoIPMetricsReport:reportCount:;
- (id)streamConfig;
- (id)receiverSframeCryptor;
- (id)transmitterSframeCryptor;
+ (BOOL)isSameSRTPKey:newKey:;
+ (int)getSRTPMediaKeyLength:;
+ (int)SRTPCipherSuiteForVCMediaStreamCipherSuite:;
@end
