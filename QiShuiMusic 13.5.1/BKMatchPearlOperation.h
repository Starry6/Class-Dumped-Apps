@interface BKMatchPearlOperation : BKMatchOperation
@property (nonatomic) <BKMatchPearlOperationDelegate> delegate;
@property (nonatomic) BOOL longTimeout;
@property (nonatomic) BOOL shouldAutoRetry;
@property (nonatomic) BOOL preAugmentationCheck;
@property (nonatomic) BKIdentity preAugmentationCheckIdentity;
@property (nonatomic) BOOL fullFaceOnly;
- (id)optionsDictionaryWithError:;
- (void)statusMessage:details:client:;
- (void).cxx_destruct;
- (void)statusMessage:client:;
- (void)setLongTimeout:;
- (BOOL)startNewMatchAttemptWithError:;
- (void)setShouldAutoRetry:;
- (BOOL)enableAutoRetry:error:;
- (BOOL)shouldAutoRetry;
- (id)matchResultInfoWithServerIdentity:details:;
- (BOOL)pauseFaceDetectTimer:error:;
- (BOOL)longTimeout;
- (BOOL)preAugmentationCheck;
- (void)setPreAugmentationCheck:;
- (id)preAugmentationCheckIdentity;
- (void)setPreAugmentationCheckIdentity:;
- (BOOL)fullFaceOnly;
- (void)setFullFaceOnly:;
@end
