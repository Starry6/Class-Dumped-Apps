@interface IMDPersistentAttachmentController : NSObject
- (void)saveAttachmentsForTransfer:chatGUID:storeAtExternalLocation:completion:;
- (void)saveAttachmentsForTransfer:completion:;
- (void)moveAttachmentsForTransfer:completion:;
- (id)_saveAttachmentForTransfer:highQuality:copyWithinAttachmentStore:;
- (BOOL)_shouldDeleteOriginalPath:copyWithinAttachmentStore:destPath:storeAtExternalPath:;
- (id)_saveAttachmentForTransfer:highQuality:copyWithinAttachmentStore:chatGUID:storeAtExternalPath:;
- (BOOL)_canDeleteAttachmentPath:;
- (void)_removeLegacyAttachmentPathsInAttachmentStoreWithOriginalPath:withFileManager:;
- (id)_migrateSiblingAssetsInAttachmentStoreWithOriginalPath:destinationPath:withFileManager:;
- (BOOL)isSafeToDeleteAttachmentPath:;
- (BOOL)deleteAttachmentsForTransfer:;
- (BOOL)_deleteAttachmentForTransfer:highQuality:;
- (id)_persistentPathForTransfer:filename:highQuality:chatGUID:storeAtExternalPath:;
- (BOOL)cleanseOrphanedFileTransfers;
+ (id)sharedInstance;
@end
