@interface SSBLookupContext : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:userInfo:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)lookUpURL:completionHandler:;
- (void)_fetchCellularDataPlanWithCompletionHandler:;
- (void)_lookUpURL:ignoreEnableState:completionHandler:;
- (void)_forceDatabaseUpdateWithCompletionHandler:;
- (void)_forceDeviceIdentificationTokenUpdateWithCompletionHandler:;
- (void)_getDatabaseStatusWithCompletionHandler:;
- (void)_getServiceStatusWithCompletionHandler:;
- (void)_forceLoadRemoteConfigurationFromDiskWithCompletionHandler:;
- (void)_forceUpdateRemoteConfigurationFromServerWithCompletionHandler:;
- (void)_deleteAllDatabasesWithCompletionHandler:;
- (void)_getLastDatabaseUpdateTimeWithCompletionHandler:;
- (void)_lookUpURLs:forProtectionType:completionHandler:;
- (void)_setSafeBrowsingEnabledStateNeedsUpdate;
- (void)_getSafeBrowsingEnabledState:;
- (void)_forceLookUpURL:completionHandler:;
+ (id)sharedLookupContext;
@end
