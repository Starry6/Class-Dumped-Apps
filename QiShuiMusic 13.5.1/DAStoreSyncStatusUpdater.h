@interface DAStoreSyncStatusUpdater : NSObject
+ (void)syncEndedForStoreWithExternalID:withError:;
+ (unsigned long long)_ekAccountErrorFromURLError:;
+ (void)resetSyncStatusForAllStoresIfNecessary;
+ (void)syncEndedForCalendar:withError:;
+ (id)_eventStore;
+ (unsigned long long)_codeForLastSyncError:userInfo:;
+ (void)syncStartedForStoreWithExternalID:;
+ (id)_eventStorePurger;
+ (void)syncStartedForCalendarWithExternalID:sourceExternalID:;
+ (unsigned long long)_ekAccountErrorFromDAErrorCode:;
+ (void)_updateStatusForStoreWithExternalID:lastSyncStartDate:lastSyncEndDate:lastSyncError:canceled:;
+ (void)_updateStatusForCalendarWithExternalID:sourceExternalID:lastSyncStartDate:lastSyncEndDate:lastSyncError:canceled:;
+ (id)_mappedAccountErrorFromError:;
+ (void)resetSyncStatusIfNecessaryForStoresOfType:;
+ (void)syncStartedForCalendar:;
+ (unsigned long long)_accountErrorCodeForNSError:;
+ (void)syncEndedForCalendarWithExternalID:sourceExternalID:withError:;
+ (unsigned long long)_ekAccountErrorFromCoreDAVHTTPStatusCode:;
+ (void)_updateStatusForSource:lastSyncStartDate:lastSyncEndDate:lastSyncError:canceled:;
+ (void)_updateStatusForCalendar:lastSyncStartDate:lastSyncEndDate:lastSyncError:canceled:;
+ (unsigned long long)_ekAccountErrorFromCoreDAVErrorCode:;
+ (BOOL)_isCanceledError:;
+ (unsigned long long)_ekAccountErrorFromDAValidationErrorCode:;
+ (unsigned long long)_ekAccountErrorFromSubCalErrorCode:;
@end
