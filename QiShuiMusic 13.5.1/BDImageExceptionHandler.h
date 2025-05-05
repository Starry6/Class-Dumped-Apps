@interface BDImageExceptionHandler : NSObject
@property (nonatomic) NSPointerArray records;
@property (nonatomic) NSObject<OS_dispatch_semaphore> recordsLock;
- (void)registerRecord:;
- (void)setRecordsLock:;
- (BOOL)isWeakNet;
- (id)recordsLock;
- (id)records;
- (id)init;
- (void)dealloc;
- (void)setRecords:;
- (void)applicationDidEnterBackground:;
- (void).cxx_destruct;
+ (id)sharedHandler;
@end
