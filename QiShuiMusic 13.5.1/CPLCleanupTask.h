@interface CPLCleanupTask : CPLEngineSyncTask
- (id)taskIdentifier;
- (void)launch;
- (void)taskDidFinishWithError:;
- (void)_cleanupSharingFlags;
- (void)_doOneIteration;
@end
