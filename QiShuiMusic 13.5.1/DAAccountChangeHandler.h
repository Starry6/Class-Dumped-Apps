@interface DAAccountChangeHandler : NSObject
+ (void)_setupStoreForNewAccount:;
+ (id)_pickAccountToKeepWithAccount:andAccount:;
+ (void)_handleAccountDelete:withChangeInfo:inStore:;
+ (BOOL)_handleAccountAddOrModify:withChangeInfo:inStore:accountUpdater:;
+ (BOOL)_updateCalendarFromAccount:;
+ (void)_performBlockWithGenericClientDBForAccount:block:;
+ (BOOL)_sanityCheckCalDAVAccount:accountChangeInfo:;
+ (BOOL)_sanityCheckChildSubCalAccountsWithParent:inStore:accountUpdater:;
+ (BOOL)_sanityCheckEnabledDataclassesOnExchangeAccountInfo:;
+ (BOOL)_sanityCheckChildDAVAccount:withParent:accountChangeInfo:;
+ (void)handleAccountDidChange:withChangeInfo:store:;
+ (id)_findSubscribedCalendarForAccount:inEventStore:;
+ (id)_supportedChildAccountTypesForParentAccountType:;
+ (BOOL)_updateSubscribedCalendarAccountProperties:;
+ (BOOL)_sanityCheckSubscribedCalendarAccountInfo:;
+ (id)_accountTypeWithIdentifier:inStore:;
+ (BOOL)handleAccountWillChange:withChangeInfo:store:accountUpdater:;
+ (BOOL)_handleCalDAVAccountModifiedByDataAccess:withChangeInfo:inStore:accountUpdater:;
+ (void)_cleanupStoreForDisabledAccount:inStore:;
+ (BOOL)_handleChangeToSubscribedCalendar:withChangeInfo:inStore:accountUpdater:;
+ (BOOL)_sanityCheckChildAccountOfType:withParent:accountChangeInfo:inStore:updater:;
@end
