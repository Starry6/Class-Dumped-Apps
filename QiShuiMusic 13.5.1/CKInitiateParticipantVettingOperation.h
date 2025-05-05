@interface CKInitiateParticipantVettingOperation : CKOperation
@property (nonatomic) CKShareMetadata shareMetadata;
@property (nonatomic) NSString participantID;
@property (nonatomic) NSString address;
@property (nonatomic) <CKInitiateParticipantVettingOperationCallbacks> clientOperationCallbackProxy;
@property (nonatomic) CKInitiateParticipantVettingOperationInfo operationInfo;
@property (nonatomic) @? participantVettingInitiatedBlock;
@property (nonatomic) @? participantVettingInitiationCompletionBlock;
- (void)_finishOnCallbackQueueWithError:;
- (void)setAddress:;
- (void)performCKOperation;
- (void)fillFromOperationInfo:;
- (void).cxx_destruct;
- (void)fillOutOperationInfo:;
- (id)address;
- (BOOL)CKOperationShouldRun:;
- (id)participantID;
- (id)shareMetadata;
- (void)setParticipantID:;
- (void)handleParticipantVettingProgressWithError:;
- (id)initWithShareMetadata:participantID:address:;
- (void)setParticipantVettingInitiatedBlock:;
- (id)participantVettingInitiatedBlock;
- (void)setParticipantVettingInitiationCompletionBlock:;
- (id)participantVettingInitiationCompletionBlock;
- (void)retryTimes:container:participantVettingInitiatedBlock:participantVettingInitiationCompletionBlock:;
- (void)setShareMetadata:;
+ (void)applyDaemonCallbackInterfaceTweaks:;
@end
