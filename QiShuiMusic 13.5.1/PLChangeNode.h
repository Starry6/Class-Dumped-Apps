@interface PLChangeNode : NSObject
- (void)dealloc;
- (void)publishChangesForDidSaveObjectIDsNotification:;
- (void)disconnectManagedObjectContext:;
- (void)distributeRemoteContextDidSaveEvent:delayedSaveActionsDetail:transaction:;
- (id)initWithLibraryURL:changeMerger:changePublisher:libraryServicesManager:;
- (void).cxx_destruct;
- (BOOL)_isInvalidRemoteChangeEvent:reply:;
- (void)publishRemoteChangeEvent:delayedSaveActionsDetail:reply:;
- (void)invalidate;
- (void)connectManagedObjectContext:;
@end
