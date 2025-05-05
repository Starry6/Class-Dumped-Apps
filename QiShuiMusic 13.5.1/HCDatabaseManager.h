@interface HCDatabaseManager : NSObject
@property (nonatomic) NSManagedObjectContext managedObjectContext;
- (void)setManagedObjectContext:;
- (void)logMessage:;
- (id)managedObjectContext;
- (id)init;
- (id)containerIdentifier;
- (void)dealloc;
- (void)setupDatabase;
- (id)databaseFilePath;
- (id)cloudKitContainer;
- (void).cxx_destruct;
- (id)apsConnectionMachServiceName;
- (id)managedObjectModelName;
- (void)storesWillChange:;
- (void)contentDidUpdate:;
- (BOOL)saveIfPossible;
@end
