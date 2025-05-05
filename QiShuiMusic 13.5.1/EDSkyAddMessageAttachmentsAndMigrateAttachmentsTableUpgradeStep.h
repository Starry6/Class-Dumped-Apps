@interface EDSkyAddMessageAttachmentsAndMigrateAttachmentsTableUpgradeStep : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)log;
+ (int)runWithConnection:;
+ (int)runWithConnection:dataProvider:;
+ (BOOL)createNewAttachmentTableWithConnection:;
+ (BOOL)deleteAttachmentsTableWithConnection:;
+ (BOOL)deleteMessageAttachmentsTableWithConnection:;
+ (BOOL)createMessageAttachmentsTableWithConnection:;
+ (BOOL)createNewSearchableAttachmentsTable:;
+ (BOOL)insertIntoMessageAttachmentTableGlobalMessageID:attachmentMetadata:attachmentID:connection:;
+ (BOOL)insertAttachmentIntoAttachmentTableWithAttachmentMetadata:connection:;
@end
