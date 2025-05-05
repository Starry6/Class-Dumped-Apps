@interface CNContactImageStore : NSObject
@property (nonatomic) CNContactMetadataPersistentStoreManager storeManager;
- (id)init;
- (void).cxx_destruct;
- (id)performFetchRequest:error:;
- (BOOL)performSaveRequest:error:;
- (id)initWithContactMetadataStoreManager:;
- (BOOL)updateOrInsertNewContactImages:forContactIdentifier:inContext:error:;
- (BOOL)updateExistingImages:withContactImage:;
- (void)ensureImageQuotasForImages:inContext:;
- (void)insertContactImage:withContactIdentifier:inContext:;
- (id)managedObjectsToContactImages:;
- (id)storeManager;
- (void)setStoreManager:;
+ (long long)maximumContactImagesPerContact;
@end
