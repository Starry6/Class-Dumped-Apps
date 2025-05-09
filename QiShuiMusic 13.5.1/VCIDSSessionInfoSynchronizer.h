@interface VCIDSSessionInfoSynchronizer : NSObject
@property (nonatomic) NSNumber primaryLinkID;
@property (nonatomic) NSNumber duplicationLinkID;
@property (nonatomic) @? peerSubscribedStreamCallback;
@property (nonatomic) @? peerPublishedStreamCallback;
@property (nonatomic) @? errorReponseCallback;
@property (nonatomic) @ reportingAgent;
- (void)dealloc;
- (void)periodicTask:;
- (void)registerPeriodicTask;
- (void)deregisterPeriodicTask;
- (id)reportingAgent;
- (void)resetParticipantGenerationCounter;
- (void)flushRealTimeReportingStats;
- (void)setVCIDSSessionInfoSubscribedStreamIDs:;
- (void)retryVCIDSSessionInfoSubscribedStreamIDs;
- (void)sendVCIDSSessionInfoSubscribedStreamIDs:;
- (void)setVCIDSSessionInfoPublishedStreamIDs:;
- (id)sessionInfoSynchronizerDelegate;
- (void)setErrorResponseCallback:;
- (id)peerSubscribedStreamCallback;
- (void)setPeerSubscribedStreamCallback:;
- (id)peerPublishedStreamCallback;
- (void)setPeerPublishedStreamCallback:;
- (id)errorReponseCallback;
- (void)setErrorReponseCallback:;
- (id)initWithDelegate:connectionManager:reportingAgent:;
- (void)setPrimaryLinkID:;
- (id)primaryLinkID;
- (void)setDuplicationLinkID:;
- (id)duplicationLinkID;
- (void)checkVCIDSSessionInfoNeedUpdate:;
- (void)updateVCIDSSessionInfoResponse:;
- (void)optInStreamIDsForConnection:;
- (void)optInAllStreamsForConnection:;
- (void)optInStreamIDsForNewPrimaryConnection:oldPrimaryConnection:;
- (void)optOutStreamIDsForNonPrimaryConnection:sentOnConnection:;
@end
