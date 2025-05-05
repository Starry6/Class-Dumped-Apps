@interface PLDelayedFiledSystemDeletions : NSObject
- (void)dealloc;
- (id)debugDescription;
- (void).cxx_destruct;
- (void)addFilesystemDeletionInfo:;
- (void)appendToXPCMessage:managedObjectContext:;
- (void)deleteAllRemainingFilesAndThumbnailsWithPhotoLibrary:completionHandler:;
- (id)initWithFilesystemDeletionInfos:;
+ (id)filesystemDeletionQueue;
+ (void)waitForAllDelayedDeletionsToFinish;
+ (void)appendDescriptionForEvent:toComponents:;
+ (id)deletionsFromChangeHubEvent:;
@end
