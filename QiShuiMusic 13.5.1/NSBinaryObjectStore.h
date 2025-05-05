@interface NSBinaryObjectStore : NSMappedObjectStore
- (void)saveDocumentToPath:;
- (id)initWithPersistentStoreCoordinator:configurationName:URL:options:;
- (id)type;
+ (BOOL)setMetadata:forPersistentStoreWithURL:error:;
+ (id)metadataForPersistentStoreWithURL:error:;
+ (BOOL)setMetadata:forPersistentStoreWithURL:options:error:;
+ (id)metadataForPersistentStoreWithURL:options:error:;
@end
