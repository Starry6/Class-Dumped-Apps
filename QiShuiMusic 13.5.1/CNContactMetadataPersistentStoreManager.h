@interface CNContactMetadataPersistentStoreManager : NSObject
@property (nonatomic) NSURL storeLocation;
@property (nonatomic) NSPersistentContainer container;
- (id)persistentStoreCoordinator;
- (id)init;
- (id)container;
- (id)storeDescription;
- (void).cxx_destruct;
- (id)createManagedObjectContext;
- (id)initWithStoreLocation:;
- (BOOL)performWorkWithManagedObjectContext:error:;
- (BOOL)setupIfNeeded:;
- (BOOL)createStoreDirectoryIfNeeded:;
- (id)storeLocation;
+ (id)createPersistentContainer;
+ (id)os_log;
+ (id)createModel;
+ (id)currentManagedObjectModel;
+ (id)defaultStoreLocation;
@end
