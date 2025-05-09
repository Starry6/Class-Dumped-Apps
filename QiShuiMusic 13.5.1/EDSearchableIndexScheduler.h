@interface EDSearchableIndexScheduler : NSObject
@property (nonatomic) BOOL scheduledDeferralCheck;
@property (nonatomic) NSString budgetTimeUserDefaultsKey;
@property (nonatomic) NSObject<OS_dispatch_queue> indexingStateQueue;
@property (nonatomic) NSMutableDictionary activities;
@property (nonatomic) NSMutableSet indexingEnabledForActivityTypes;
@property (nonatomic) BOOL dataSourceIndexingPermitted;
@property (nonatomic) q budgetedItemCountRemaining;
@property (nonatomic) double budgetedTimeRemaining;
@property (nonatomic) double noActivityIndexingTime;
@property (nonatomic) double maintenanceIndexingTime;
@property (nonatomic) BOOL scheduling;
@property (nonatomic) <EDSearchableIndexSchedulable> schedulable;
@property (nonatomic) EDSearchableIndexBudgetConfiguration budgetConfiguration;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)searchableIndexSchedulable:didIndexForTime:;
- (void)_beginIndexingForActivityType:activity:;
- (void)dealloc;
- (id)_xpcCriteriaBuilderBlockForActivityType:;
- (void)_logIndexingPowerEventWithIdentifier:additionalEventData:usePersistentLog:;
- (void)_enableIndexingForActivityType:;
- (void)setScheduling:;
- (double)maintenanceIndexingTime;
- (void)_stopIndexingForActivityType:shouldDeferIfPossible:;
- (void)searchableIndexSchedulable:didGenerateImportantPowerEventWithIdentifier:eventData:;
- (double)budgetedTimeRemaining;
- (BOOL)isIndexingEnabledForActivityType:;
- (void)_setBudgetedTimeRemaining:;
- (void)setScheduledDeferralCheck:;
- (BOOL)isDataSourceIndexingPermitted;
- (BOOL)hasAvailableIndexingBudgetForSearchableIndexSchedulable:;
- (void)setIndexingEnabledForActivityTypes:;
- (void)beginIndexingForActivityType:activity:;
- (void)setDataSourceIndexingPermitted:;
- (BOOL)scheduledDeferralCheck;
- (id)indexingStateQueue;
- (void)_deferActivitiesIfNecessary;
- (double)noActivityIndexingTime;
- (void)setNoActivityIndexingTime:;
- (void)searchableIndexSchedulable:didIndexItemCount:;
- (void)setMaintenanceIndexingTime:;
- (double)budgetedTimeRemainingForSearchableIndexSchedulable:;
- (id)activities;
- (BOOL)_isIndexingEnabledByActivities;
- (void)deferIndexingForActivityType:;
- (BOOL)isScheduling;
- (id)schedulable;
- (void)_stopAllIndexing;
- (void)setActivities:;
- (id)_xpcActivityIdentifierForActivityType:;
- (id)budgetConfiguration;
- (void)_setDataSourceIndexingPermitted:;
- (void)indexingDidResumeForSearchableIndexSchedulable:;
- (void)indexingDidSuspendForSearchableIndexSchedulable:;
- (BOOL)_isIndexingEnabledForActivityType:;
- (long long)budgetedItemCountRemaining;
- (id)budgetTimeUserDefaultsKey;
- (void)_periodicallyCheckForDeferralIfNecessary;
- (id)initWithSchedulable:budgetConfiguration:;
- (void)didFinishIndexingBacklogForSearchableIndexSchedulable:;
- (void).cxx_destruct;
- (void)searchableIndexSchedulable:didGeneratePowerEventWithIdentifier:eventData:;
- (double)_budgetTimeFromUserDefaults;
- (void)setBudgetedItemCountRemaining:;
- (void)_disableIndexingForActivityType:defer:;
- (void)_registerActivityForType:builder:runner:;
- (void)setBudgetedTimeRemaining:;
- (void)_stopScheduling;
- (void)_startScheduling;
- (void)setBudgetTimeUserDefaultsKey:;
- (void)setIndexingStateQueue:;
- (long long)budgetedItemCountRemainingForSearchableIndexSchedulable:;
- (id)indexingEnabledForActivityTypes;
+ (id)log;
+ (id)deferrableActivityTypes;
+ (id)budgetTimeUserDefaultsKeyForIndexName:;
+ (BOOL)isDeferrableActivityType:;
+ (id)activityTypes;
@end
