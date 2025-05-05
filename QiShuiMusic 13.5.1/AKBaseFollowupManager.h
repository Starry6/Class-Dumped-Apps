@interface AKBaseFollowupManager : NSObject
- (void).cxx_destruct;
- (void)teardownFollowUpWithContext:completion:;
- (id)initWithFollowUpFactory:provider:;
- (BOOL)synchronizeFollowUpsWithServerPayload:altDSID:error:;
- (id)_alignedInsertionCandidates:withExistingItems:;
@end
