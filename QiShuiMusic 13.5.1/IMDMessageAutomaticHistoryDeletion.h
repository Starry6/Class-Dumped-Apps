@interface IMDMessageAutomaticHistoryDeletion : NSObject
+ (void)cleanUpOrphanAttachments;
+ (void)deleteMessagesAndAttachmentsAfterDays:;
+ (void)deleteRecoverableMessagesEligibleForPermanentRemoval;
+ (void)cleanDatabase;
+ (void)deleteSpolightArchivedFiles;
+ (void)deleteDirectoryAtPath:;
+ (BOOL)isFileAtDirPath:olderThanDays:;
+ (BOOL)isFileHeaderDateAtPath:olderThanDays:;
+ (BOOL)isDirCreationDateAtPath:olderThanDays:;
+ (BOOL)isOlderThanDays:fromDate:;
+ (id)_getPathAttributesForPath:;
+ (id)_getDirSubDirURLsForDirPath:error:;
+ (id)_getiChatFileMetadataForPath:;
+ (id)_getFilePathNotDSStore:;
@end
