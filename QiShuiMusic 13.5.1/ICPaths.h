@interface ICPaths : NSObject
+ (id)URLForGroupContainerWithIdentifier:;
+ (id)applicationDocumentsURL;
+ (id)oldManagedObjectModelURL;
+ (id)applicationDataContainerURL;
+ (void)setIsReadOnlyPersistentStore:;
+ (id)attributesForGroupContainerDirectory;
+ (id)importDocumentsURL;
+ (void)resetApplicationDocumentsURL;
+ (id)persistentStoreURL;
+ (id)managedObjectModelURL;
+ (void)setApplicationDocumentsURL:;
+ (id)defaultPreviewImageDirectoryURL;
+ (BOOL)isReadOnlyPersistentStore;
@end
