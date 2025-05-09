@interface HCSettings : NSObject
@property (nonatomic) NSMutableSet registeredNotifications;
@property (nonatomic) NSMutableSet synchronizePreferences;
@property (nonatomic) NSMutableDictionary updateBlocks;
@property (nonatomic) NPSDomainAccessor domainAccessor;
@property (nonatomic) NPSDomainAccessor globalDomainAccessor;
@property (nonatomic) NSObject<OS_dispatch_queue> nanoDomainAccessorQueue;
- (id)objectValueForKey:withClass:andDefaultValue:;
- (void)logMessage:;
- (long long)integerValueForKey:withDefaultValue:;
- (void)setSynchronizePreferences:;
- (void)setRegisteredNotifications:;
- (id)registeredNotifications;
- (id)synchronizePreferences;
- (void)_handlePreferenceChanged:;
- (id)init;
- (void)dealloc;
- (void)setDomainAccessor:;
- (id)updateBlocks;
- (BOOL)shouldStoreLocally;
- (void)_registerForNotification:;
- (void)setValue:forPreferenceKey:;
- (id)keysToSync;
- (id)nanoDomainAccessor;
- (void)registerUpdateBlock:forRetrieveSelector:withListener:;
- (void)setUpdateBlocks:;
- (id)preferenceKeyForSelector:;
- (void).cxx_destruct;
- (id)domainAccessor;
- (void)setGlobalDomainAccessor:;
- (id)_valueForPreferenceKey:;
- (void)pairedWatchDidChange:;
- (id)preferenceDomainForPreferenceKey:;
- (void)_synchronizeIfNecessary:;
- (id)globalDomainAccessor;
- (id)notificationForPreferenceKey:;
- (void)resetValueForSelector:;
- (BOOL)boolValueForPreferenceKey:withDefaultValue:;
- (double)cgfloatValueForPreferenceKey:withDefaultValue:;
- (id)nanoPreferenceDomain;
- (id)nanoDomainAccessorQueue;
- (void)setNanoDomainAccessorQueue:;
@end
