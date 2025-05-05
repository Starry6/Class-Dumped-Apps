@interface IDSFTGL : IDSGlobalLink
- (void)disconnectWithCompletionHandler:;
- (void)startWithOptions:;
- (BOOL)_setupNewQRLinkIfNecessary:;
- (BOOL)_postProcessAllocbindResponse:candidatePair:candidatePairToken:;
- (void)setHasPendingAllocation:;
- (void)sendSKEData:;
- (void)setDefaultUnderlyingLink:;
- (void)_resetRetryCountForCandidatePair:;
- (BOOL)_postProcessQUICAllocbindResponse:candidatePair:;
@end
