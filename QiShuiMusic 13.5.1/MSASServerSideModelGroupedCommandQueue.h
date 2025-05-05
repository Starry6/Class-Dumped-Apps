@interface MSASServerSideModelGroupedCommandQueue : MSASGroupedQueue
@property (nonatomic) MSASEnqueuedCommand lastEnqueuedCommand;
- (BOOL)hasEnqueuedItems;
- (void)flushQueue;
- (void)workQueueFlushQueue;
- (void)MSASModel:didFindDeletedAssetCollection:inAlbum:info:;
- (void)setLastEnqueuedCommand:;
- (void)MSASModel:didFindNewComment:forAssetCollection:inAlbum:info:;
- (void)MSASModel:didFindNewAlbum:info:;
- (id)lastEnqueuedCommand;
- (void)MSASModel:didFindDeletedAlbum:info:;
- (void).cxx_destruct;
- (void)MSASModel:didFindDeletedInvitation:info:;
- (void)MSASModel:didFindDeletedAccessControl:inAlbum:info:;
- (void)MSASModel:didFindNewAccessControl:inAlbum:info:;
- (void)MSASModel:didFindNewAssetCollection:inAlbum:info:;
- (void)MSASModel:didFindNewInvitation:info:;
- (void)workQueueEnqueueCommand:variantParam:invariantParam:;
- (void)MSASModel:didDeleteComment:forAssetCollection:inAlbum:info:;
+ (id)calloutBlockForCommand:;
@end
