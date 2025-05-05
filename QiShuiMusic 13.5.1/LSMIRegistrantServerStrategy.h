@interface LSMIRegistrantServerStrategy : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)preUnregistrationContextForBundleIdentifier:;
- (id)notificationJournallerForBundleIdentifier:registeringPlaceholder:;
- (void)runSyncBlockInWriteContext:;
- (void)beginModificationOperation;
- (void)endModificationOperation;
- (void)flushModificationState;
@end
