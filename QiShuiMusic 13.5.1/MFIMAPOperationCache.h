@interface MFIMAPOperationCache : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)account;
- (void)dealloc;
- (BOOL)connection:shouldHandleUntaggedResponse:forCommand:;
- (void)deleteMailbox:;
- (void)saveChanges;
- (BOOL)hasPendingOfflineOperations;
- (void)createMailbox:;
- (id)initWithIMAPAccount:;
- (void)_queueDeferredOperation:;
- (unsigned int)firstUidForCopyingMessages:fromMailbox:toMailbox:;
- (unsigned int)uidForAppendingMessageData:withFlags:andInternalDate:toMailbox:;
- (void)expungeTemporaryUid:;
- (BOOL)hasOperationsForMailbox:;
- (void)_performCreateOperation:withContext:;
- (void)_performDeleteOperation:withContext:;
- (void)_performStoreOperation:withContext:;
- (void)_performAppendOperation:withContext:;
- (void)_performCopyOperation:withContext:;
- (void)performDeferredOperationsWithConnection:;
- (id)deferredOperations;
+ (void)setShouldFlattenCacheOperations:;
@end
