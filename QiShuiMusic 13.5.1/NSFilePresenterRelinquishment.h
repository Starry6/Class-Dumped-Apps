@interface NSFilePresenterRelinquishment : NSObject
- (void)dealloc;
- (void)performRemoteDeletePrerelinquishmentIfNecessaryUsingBlock:withReply:;
- (void)performRelinquishmentToAccessClaimIfNecessary:usingBlock:withReply:;
- (void)setReacquirer:;
- (void)removeBlockingAccessClaimID:thenContinue:;
- (void)removeBlockingAccessClaimID:;
- (void)removeAllBlockingAccessClaimIDs;
- (BOOL)_locked_addRelinquishReply:;
- (void)_locked_addPrerelinquishReply:;
- (void)didRelinquish;
@end
