@interface NSUbiquitousKeyValueStore : NSObject
@property (nonatomic) NSDictionary dictionaryRepresentation;
- (id)dataForKey:;
- (void)setString:forKey:;
- (id)init;
- (void)setObject:forKey:;
- (void)dealloc;
- (void)setDouble:forKey:;
- (void)synchronizeWithCompletionHandler:;
- (void)setArray:forKey:;
- (void)setDictionary:forKey:;
- (void)setBool:forKey:;
- (void)_configurationDidChange;
- (unsigned long long)maximumKeyCount;
- (void)setData:forKey:;
- (BOOL)boolForKey:;
- (id)initWithBundleIdentifier:;
- (id)stringForKey:;
- (BOOL)_synchronizeForced:;
- (id)initWithStoreIdentifier:type:;
- (unsigned long long)maximumKeyLength;
- (BOOL)synchronize;
- (unsigned long long)maximumTotalDataLength;
- (id)arrayForKey:;
- (void)registerDefaultValues:;
- (id)objectForKey:;
- (double)doubleForKey:;
- (id)dictionaryRepresentation;
- (unsigned long long)maximumDataLengthPerKey;
- (void)removeObjectForKey:;
- (void)_registerToDaemon;
- (id)dictionaryForKey:;
- (void)_sourceDidChange:;
- (void)_sourceDidChangePassthroughNotification:;
- (void)_pleaseSynchronize:;
- (void)_syncConcurrently;
- (void)_adjustTimerForAutosync;
- (void)_adjustTimer:;
- (void)_useSourceAsyncWithBlock:;
- (void)_useSourceSyncWithBlock:;
- (id)initWithBundleIdentifier:storeIdentifier:additionalStore:storeType:;
- (id)_initWithStoreIdentifier:usingEndToEndEncryption:;
- (id)initWithBundleIdentifier:storeIdentifier:additionalStore:;
- (id)initWithBundleIdentifier:storeIdentifier:;
- (BOOL)_shouldAvoidSynchronize;
- (void)_setShouldAvoidSynchronize:;
- (BOOL)_hasPendingSynchronize;
- (void)_setHasPendingSynchronize:;
- (int)_storeChangeFromSourceChange:;
- (BOOL)_postDidChangeNotificationExternalChanges:sourceChangeCount:;
- (void)_rethrowException:;
- (BOOL)synchronizeWithSourceForced:;
- (void)_syncConcurrentlyForced:;
- (void)_scheduleRemoteSynchronization;
- (BOOL)_synchronizeForced:notificationQueue:;
- (void)_unregisterFromDaemon;
- (void)_sendPingToDaemon;
- (id)_remotePreferencesSource;
- (long long)longLongForKey:;
- (void)setLongLong:forKey:;
+ (id)defaultStore;
+ (id)additionalStoreWithIdentifier:;
+ (void)_synchronizeStoresForced:;
+ (void)_appWillActivate;
+ (void)_appWillDeactivate;
@end
