@interface EDCloudMirroringPersistentStore : NSObject
@property (nonatomic) NSPersistentContainer persistentContainer;
@property (nonatomic) EDTaskScheduler importScheduler;
@property (nonatomic) EDTaskScheduler exportScheduler;
@property (nonatomic) NSManagedObjectContext managedObjectContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)managedObjectContext;
- (id)init;
- (void)setExportScheduler:;
- (id)_schedulerForKind:;
- (void)performBlockAndWait:;
- (void)_requestWithKind:completionBlock:;
- (void)_setupCoreDataStack;
- (id)_wrapCompletion:forRequestKind:;
- (void)requestImportWithCompletionBlock:;
- (id)importScheduler;
- (id)persistentContainer;
- (void)requestExportWithCompletionBlock:;
- (void)setImportScheduler:;
- (id)exportScheduler;
- (void)_executeRequestWithKind:completionBlock:;
- (void).cxx_destruct;
- (void)performBlock:;
+ (id)log;
@end
