@interface UIManagedDocument : UIDocument
@property (nonatomic) NSManagedObjectContext managedObjectContext;
@property (nonatomic) NSManagedObjectModel managedObjectModel;
@property (nonatomic) NSDictionary persistentStoreOptions;
@property (nonatomic) NSString modelConfiguration;
- (id)managedObjectContext;
- (id)managedObjectModel;
- (void)dealloc;
- (id)initWithFileURL:;
- (void)setModelConfiguration:;
- (id)modelConfiguration;
- (BOOL)readFromURL:error:;
- (void)revertToContentsOfURL:completionHandler:;
- (BOOL)writeContents:andAttributes:safelyToURL:forSaveOperation:error:;
- (BOOL)writeContents:toURL:forSaveOperation:originalContentsURL:error:;
- (id)contentsForType:error:;
- (BOOL)writeAdditionalContent:toURL:originalContentsURL:error:;
- (BOOL)configurePersistentStoreCoordinatorForURL:ofType:modelConfiguration:storeOptions:error:;
- (id)persistentStoreTypeForFileType:;
- (BOOL)readAdditionalContentFromURL:error:;
- (id)additionalContentForURL:error:;
- (void)_handleRelocatingStoreContentDirectoryFromNonSyncedURL:toSyncedURL:;
- (void)_handleRelocatingStoreContentDirectoryFromSyncedURL:toNonSyncedURL:;
- (id)_readMetadataFromDocumentURL:;
- (BOOL)_writeMetadataToDocumentURL:;
- (id)persistentStoreOptions;
- (void)setPersistentStoreOptions:;
+ (id)persistentStoreName;
+ (id)additionalContentPathComponent;
+ (BOOL)isPersistentStoreSynchronizedViaUbiquitousContentWithOptions:;
@end
