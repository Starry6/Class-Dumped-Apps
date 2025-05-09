@interface FBSApplicationDataStore : NSObject
@property (nonatomic) NSString bundleID;
- (id)init;
- (void)setObject:forKey:;
- (void)dealloc;
- (void)setArchivedObject:forKey:;
- (id)initWithBundleIdentifier:;
- (void)removeAllObjects;
- (id)safeObjectForKey:ofType:;
- (id)objectForKey:;
- (void).cxx_destruct;
- (void)removeObjectForKey:;
- (id)bundleID;
- (id)_initWithBundleId:client:;
- (void)objectForKey:withResult:;
- (void)safeObjectForKey:ofType:withResult:;
- (id)archivedObjectForKey:;
- (void)archivedObjectForKey:withResult:;
- (id)safeArchivedObjectForKey:ofType:;
- (void)safeArchivedObjectForKey:ofType:withResult:;
- (id)_makeSafe:forType:;
+ (BOOL)isServerProcess;
+ (void)synchronizeWithCompletion:;
+ (void)_setClassClient:;
+ (void)_doWithClassClient:;
+ (void)synchronize;
+ (void)setPrefetchedKeys:;
+ (id)applicationsWithAvailableStores;
+ (id)storeForApplication:;
@end
