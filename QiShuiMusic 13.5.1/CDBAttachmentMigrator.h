@interface CDBAttachmentMigrator : NSObject
+ (void)migrateWithLegacyCalendarDataContainer:calendarDataContainerProvider:database:;
+ (void)_moveAttachmentsFromLegacyAttachmentContainer:calendarDataContainerProvider:database:;
+ (void)_moveAttachmentsForStore:fromLegacyAttachmentContainer:calendarDataContainerProvider:database:;
+ (void)_updateLocalRelativeURLForAttachmentsWithInfo:database:;
+ (void)_setLocalRelativePathForAttachmentUUID:localRelativePath:database:;
+ (void)_setFileSizeForAttachmentsWithInfo:database:;
+ (void)_setFileSizeForAttachmentUUID:attachmentURL:database:;
+ (BOOL)_moveAttachmentsWithInfo:error:;
+ (BOOL)_moveAttachmentWithInfo:error:;
+ (id)_infoForAttachmentsInLegacyAttachmentContainerForStore:newAttachmentContainerForStore:newCalendarDataContainer:database:;
+ (id)_attachmentInfoForLegacyAttachmentURL:newAttachmentContainerForStore:newCalendarDataContainer:database:attachmentUUID:;
+ (BOOL)_createNewContainerIfNeeded:error:;
+ (void)migrateDataClassProtectionForAttachmentsInLegacyCalendarDataContainer:;
@end
