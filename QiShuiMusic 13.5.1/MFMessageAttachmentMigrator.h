@interface MFMessageAttachmentMigrator : NSObject
@property (nonatomic) MFMailMessageLibrary library;
@property (nonatomic) <EFScheduler> backgroundMigrationScheduler;
@property (nonatomic) NSObject<OS_dispatch_queue> contentProtectionQueue;
@property (nonatomic) NSConditionLock migrationState;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)migrationState;
- (void)setLibrary:;
- (id)initWithLibrary:;
- (void)contentProtectionStateChanged:previousState:;
- (id)library;
- (void).cxx_destruct;
- (id)contentProtectionQueue;
- (BOOL)_checkContentProtectionState;
- (void)startMigratingAttachments;
- (void)migrateAttachmentsForMessageIfNecessary:;
- (BOOL)_messageHasAttachmentsToMigrate:;
- (BOOL)_migrateAttachmentsForMessage:connection:;
- (void)_setMigratingAttachmentsOnThread:;
- (BOOL)_isMigratingAttachmentsOnThread;
- (id)backgroundMigrationScheduler;
- (void)setBackgroundMigrationScheduler:;
+ (id)log;
+ (BOOL)migrateMaildropFileForMessage:mailDropMetadata:;
@end
