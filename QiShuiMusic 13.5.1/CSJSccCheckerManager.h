@interface CSJSccCheckerManager : NSObject
@property (nonatomic) NSLock lock;
@property (nonatomic) NSMutableDictionary resultDict;
@property (nonatomic) NSDate lastUpdateDate;
@property (nonatomic) NSString persistenceKey;
@property (nonatomic) BUPersistence persistence;
@property (nonatomic) NSObject<OS_dispatch_queue> ioSerialQueue;
- (void)appendWithUrlString:sccResult:;
- (id)ioSerialQueue;
- (BOOL)needSccToCheckWithURLString:;
- (void)readLocal;
- (long long)sccResultWithUrlString:;
- (void)setIoSerialQueue:;
- (void)setPersistenceKey:;
- (void)updateLocal;
- (id)persistence;
- (void)setPersistence:;
- (id)init;
- (id)lastUpdateDate;
- (id)lock;
- (void)setLastUpdateDate:;
- (void)setup;
- (void).cxx_destruct;
- (id)persistenceKey;
- (void)setLock:;
- (id)resultDict;
- (void)setResultDict:;
+ (id)sharedInstance;
@end
