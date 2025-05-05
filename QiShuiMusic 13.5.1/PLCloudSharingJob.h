@interface PLCloudSharingJob : PLDaemonJob
@property (nonatomic) PLPhotoLibrary transientPhotoLibrary;
@property (nonatomic) BOOL shouldPrioritize;
- (id)initFromXPCObject:libraryServicesManager:;
- (id)initWithAssetsdClient:;
- (void)runDaemonSide;
- (void).cxx_destruct;
- (BOOL)shouldPrioritize;
- (BOOL)shouldArchiveXPCToDisk;
- (void)archiveXPCToDisk:;
- (id)transientPhotoLibrary;
- (void)runAndWaitForMessageToBeSent;
- (void)setShouldPrioritize:;
+ (id)lowPriorityOperationQueue;
+ (id)highPriorityOperationQueue;
+ (id)recoveredEventsWithPathManager:;
+ (void)deleteAllRecoveryEventsWithPathManager:;
@end
