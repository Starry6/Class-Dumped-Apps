@interface CalAttachmentFileCleanupContext : NSObject
- (id)initWithStore:;
- (void)cleanup;
- (void).cxx_destruct;
- (id)description;
- (id)initWithExternalID:storeUUID:database:;
- (void)addAttachmentToDelete:;
- (void)markStoreAsDeleted;
@end
