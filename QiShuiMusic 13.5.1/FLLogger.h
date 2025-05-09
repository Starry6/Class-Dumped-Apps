@interface FLLogger : NSObject
@property (nonatomic) NSMutableDictionary dbConnections;
@property (nonatomic) NSMutableDictionary persistentStores;
@property (nonatomic) NSObject<FLLoggingContext> context;
@property (nonatomic) NSObject<OS_os_log> log;
@property (nonatomic) Q persistentStoreCacheTTL;
@property (nonatomic) NSObject<OS_dispatch_source> persistentStoreCacheTTLTimer;
@property (nonatomic) NSDistributedNotificationCenter notificationCenter;
@property (nonatomic) {os_unfair_lock_s=I} lock;
@property (nonatomic) NSObject<OS_os_transaction> writeTransaction;
@property (nonatomic) Q writeTransactionTTL;
@property (nonatomic) NSObject<OS_dispatch_source> transactionTTLTimer;
- (void)dealloc;
- (id)log;
- (void)setNotificationCenter:;
- (id)context;
- (id)notificationCenter;
- (void)setLog:;
- (id)lock;
- (id)initWithContext:;
- (void).cxx_destruct;
- (void)setContext:;
- (void)closeAllStores;
- (id)persistentStores;
- (void)reportDataUploadEvent:application:completion:;
- (void)reportSiriInstrumentationEvent:forBundleID:completion:;
- (void)closeStoreForApplicationFromNotification:;
- (id)writeTransaction;
- (void)_setupTransactionTTLTimer;
- (void)_scheduleTransactionTTLTimer;
- (void)_transactionTTLTimerDidFire;
- (void)_cancelTransactionTTLTimer;
- (void)cancelTransactionTTLTimer;
- (id)__dispatched_databaseConnectionWithId:;
- (id)__dispatched_persistentStoreWithId:category:;
- (id)pathForStore:;
- (void)closeStoreForBundleID:;
- (void)_cleanPersistantStores;
- (id)_nextTimerFireDate;
- (void)_setupStoreCacheTimer;
- (void)_scheduleStoreCacheTimer;
- (void)_cancelStoreCacheTimer;
- (void)_closeAllStores;
- (void)setValue:forUploadHeaderNamed:;
- (id)uploadHeaders;
- (void)scheduleImmediateUpload;
- (void)write:category:toStoreWithID:completion:;
- (id)parsecStoreId;
- (id)parsecCategoryForPayload:;
- (id)parsecPersistentStoreForBundleID:;
- (void)reportParsecFeedback:completion:;
- (id)siriStoreIdForBundleId:;
- (id)siriWritingStoreForBundleID:category:;
- (id)siriReadingStoreForBundleID:;
- (id)registerSiriInstrumentationObserver:observer:;
- (void)removeSiriInstrumentationObserver:;
- (id)dataUploadStoreIdForApplicationIdentifier:;
- (void)report:application:;
- (void)report:application:onComplete:;
- (id)dbConnections;
- (void)setDbConnections:;
- (void)setPersistentStores:;
- (unsigned long long)persistentStoreCacheTTL;
- (void)setPersistentStoreCacheTTL:;
- (id)persistentStoreCacheTTLTimer;
- (void)setPersistentStoreCacheTTLTimer:;
- (unsigned long long)writeTransactionTTL;
- (void)setWriteTransactionTTL:;
- (id)transactionTTLTimer;
- (void)setTransactionTTLTimer:;
+ (id)sharedLogger;
+ (id)readSiriCategoryFrom:recursive:;
+ (id)categoryForSiriPayload:;
@end
