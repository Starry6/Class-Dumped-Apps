@interface VCSecurityKeyManager : NSObject
@property (nonatomic) ^{opaqueRTCReporting=} reportingAgent;
- (void)dealloc;
- (void)start;
- (void)stop;
- (id)delegate;
- (id)logPrefix;
- (id)initWithDelegate:;
- (id)reportingAgent;
- (void)setReportingAgent:;
- (long long)getNotUsedTimeout;
- (void)releaseTimers;
- (BOOL)startTimers;
- (void)stopTimers;
- (BOOL)addSecurityKeyMaterial:;
- (id)getSendKeyMaterialWithIndex:;
- (id)getRecvKeyMaterialWithIndex:;
- (id)getLatestSendKeyMaterial;
- (id)getLatestRecvKeyMaterial;
- (void)pruneSendKeyMaterialWithDelay:;
- (void)pruneRecvKeyMaterialWithDelay:;
- (double)pruneAllExpiredKeys;
- (double)firstExpirationTime;
- (void)schedulePruneTimer:;
- (void)handlePruneTimerEventAndReschedule;
- (void)scheduleEncryptionRollTimerWithDelay:;
- (BOOL)associateMKI:withClientID:;
- (id)copyMKMWithPrefix:;
@end
