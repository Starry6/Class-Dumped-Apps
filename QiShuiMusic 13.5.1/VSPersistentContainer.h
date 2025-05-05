@interface VSPersistentContainer : NSObject
@property (nonatomic) NSManagedObjectContext viewContext;
@property (nonatomic) NSPersistentContainer persistentContainer;
@property (nonatomic) q modelVersion;
- (void)setPersistentContainer:;
- (long long)modelVersion;
- (id)init;
- (void)migrateContainerIfNecessary;
- (id)insertDeveloperIdentityProviderInContext:;
- (id)persistentContainer;
- (id)viewContext;
- (void).cxx_destruct;
- (id)initWithModelVersion:;
- (void)setViewContext:;
- (id)developerIdentityProviderFetchRequest;
- (void)performBlock:;
+ (id)legacyDirectoryURL;
+ (id)directoryURL;
@end
