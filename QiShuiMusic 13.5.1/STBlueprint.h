@interface STBlueprint : STUniquedManagedObject
@property (nonatomic) BOOL downtimeEnabled;
@property (nonatomic) STDowntimeConfiguration downtimeConfiguration;
@property (nonatomic) NSString downtimeScheduleText;
@property (nonatomic) BOOL usageLimitEnabled;
@property (nonatomic) NSString limitDisplayName;
@property (nonatomic) NSString limitScheduleText;
@property (nonatomic) BOOL isTombstoned;
@property (nonatomic) BOOL invertUsageLimit;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSDate creationDate;
@property (nonatomic) NSString type;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL limitEnabled;
@property (nonatomic) NSDate expiration;
@property (nonatomic) NSDate minimumInstallationDate;
@property (nonatomic) NSSet users;
@property (nonatomic) STBlueprintSchedule schedule;
@property (nonatomic) STBlueprintUsageLimit usageLimit;
@property (nonatomic) NSSet configurations;
@property (nonatomic) STCoreOrganization organization;
@property (nonatomic) STCoreDowntimeOverride override;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSData versionVector;
@property (nonatomic) BOOL isDirty;
- (id)computeUniqueIdentifier;
- (BOOL)updateWithDictionaryRepresentation:;
- (void)didChangeValueForKey:;
- (void)tombstone;
- (id)dictionaryRepresentation;
- (BOOL)permitWebFilterURL:pageTitle:error:;
- (id)declarationsWithError:;
- (void)migrateToVersion2CategoriesIfNeeded;
- (BOOL)isDowntimeEnabled;
- (void)setDowntimeEnabled:;
- (id)_downtimeConfigurationAtDate:inCalendar:;
- (id)downtimeConfiguration;
- (void)setStartTime:endTime:;
- (void)setStartTime:endTime:forDay:;
- (void)disableDowntimeForDay:;
- (void)_updateActiveOverrideAfterScheduleChange;
- (id)activeOverride;
- (id)_applyOnDemandDowntimeStateChange:withFixedDuration:atDate:inCalendar:error:;
- (id)_applyAutomaticOnDemandDowntimeStateChange:atDate:inCalendar:error:;
- (id)applyOnDemandDowntimeStateChange:withFixedDuration:error:;
- (BOOL)removeFixedDurationOnDemandDowntimeWithError:;
- (id)applyAutomaticOnDemandDowntimeStateChange:error:;
- (id)applyScheduleStateChange:error:;
- (void)_reportCoreAnalyticsEventForDowntimeOverride:currentDate:;
- (id)_applyScheduleStateChange:atDate:inCalendar:error:;
- (id)downtimeScheduleText;
- (id)_webFilterBlacklistStringsForURL:;
- (BOOL)isUsageLimitEnabled;
- (void)setUsageLimitEnabled:;
- (id)limitDisplayName;
- (id)limitScheduleText;
+ (void)_addWebDomains:toItemNames:remainingItems:totalCount:completionHandler:;
+ (id)_fetchOrCreateDowntimeForUserID:inContext:error:;
+ (id)keyPathsForValuesAffectingLimitScheduleText;
+ (BOOL)shouldUseGracePeriodForDowntimeOverride:configuration:;
+ (id)defaultAlwaysAllowBundleIDs;
+ (BOOL)saveDowntimeForUser:startTime:endTime:scheduleByWeekdayIndex:enabled:behaviorType:error:;
+ (id)fetchRequestMatchingOrphanedBlueprints;
+ (id)_predicateForUsageLimitBlueprint:withDateFormatter:calendar:;
+ (id)simpleScheduleTimeRangeWithStartTimeComponents:endTimeComponents:;
+ (void)fetchDisplayNameForUsageLimitWithCategoryIdentifiers:bundleIdentifiers:webDomains:completionHandler:;
+ (id)_userForUserID:inContext:error:;
+ (id)_declarationForDowntime:user:configuration:behaviorType:context:error:;
+ (id)_organizationIdentifierForUser:context:;
+ (id)_configurationForDowntime:context:;
+ (BOOL)disableManagedUserBlueprintForUser:error:;
+ (id)downtimeConfigurationForUserID:context:error:;
+ (id)scheduleTextWithLocale:weekdayScheduleComparator:scheduleTimeGetter:;
+ (void)_addMinimumInstallationDatePredicateForBlueprint:toAllPredicates:usingDateFormatter:;
+ (id)_updatedDowntimeForUser:startTime:endTime:scheduleByWeekdayIndex:enabled:behaviorType:error:;
+ (BOOL)saveRestrictionsBlueprintWithValuesForPresetRestrictions:forUser:error:;
+ (id)_getDisplayNameAndAddCategories:toItemNames:remainingItems:;
+ (BOOL)deleteUsageLimitWithIdentifier:user:managedObjectContext:error:;
+ (void)_addSchedulePredicatesForBlueprintScheudle:toAllPredicates:usingDateFormatter:calendar:;
+ (id)_downtimeForUser:inContext:error:;
+ (id)fetchRequestMatchingBlueprintsForUserWithDSID:ofType:withIdentifier:fromOrganization:;
+ (id)fetchResultsRequestsForChangesToBlueprintsForUserWithDSID:;
+ (id)_buildConfigurationsByDeclarationIdentifierFromBlueprint:error:;
+ (id)keyPathsForValuesAffectingDowntimeScheduleText;
+ (id)_predicateForRestrictionsBlueprint:withDateFormatter:calendar:;
+ (BOOL)saveUsageLimitWithIdentifier:user:bundleIdentifiers:webDomains:categoryIdentifiers:dailyBudgetLimit:budgetLimitByWeekday:enabled:behaviorType:error:;
+ (BOOL)deleteManagedUserBlueprintForUser:error:;
+ (id)_buildDeclarationsFromConfigurationsByDeclarationIdentifier:predicate:identifier:;
+ (id)fetchRequestMatchingBlueprintsForUserWithDSID:ofType:fromOrganization:;
+ (id)keyPathsForValuesAffectingLimitDisplayName;
+ (id)fetchRequestMatchingExpiredBlueprints;
+ (id)applyAutomaticOnDemandDowntimeStateChange:forUserID:context:error:;
+ (id)createManagedUserBlueprintForUser:error:;
+ (id)_userDSIDStringForUser:context:;
+ (BOOL)_isStateChangeValid:forState:;
+ (id)_predicateForDowntimeBlueprint:withDateFormatter:calendar:;
+ (id)fetchOrCreateWithDictionaryRepresentation:inContext:error:;
+ (BOOL)saveAlwaysAllowListForUser:withBundleIDs:overwriteExistingList:error:;
+ (void)_addUserPredicateForBlueprint:toAllPredicates:;
+ (id)defaultEndTime;
+ (id)fetchResultsRequestsForChangesToBlueprints;
+ (id)_cemPredicateWithDowntimeOverride:shouldUseGracePeriod:dateFormater:calendar:;
+ (id)applyScheduleStateChange:forUserID:context:error:;
+ (BOOL)saveAlwaysAllowListForUser:withBundleIDs:error:;
+ (id)_predicateForAlwaysAllowedAppsBlueprint:withDateFormatter:calendar:;
+ (void)_addCommonPredicatesForBlueprint:toAllPredicates:usingDateFormatter:calendar:;
+ (id)customScheduleTimeRangeWithLocale:startTimeComponents:endTimeComponents:;
+ (void)_createDisplayNameWithItemNames:itemCount:completionHandler:;
+ (id)fetchRequestMatchingUnexpiredOneMoreMinuteBlueprints;
+ (BOOL)saveManagedUserBlueprintForUser:error:;
+ (BOOL)removeFixedDurationOnDemandDowntimeForUserID:context:error:;
+ (id)fetchRequestMatchingBlueprintsForUserWithDSID:fromOrganization:;
+ (id)createBlueprintWithType:user:;
+ (id)_buildPredicateForUnspecializedBlueprint:usingDateFormatter:calendar:;
+ (id)_updatedScheduleFromSchedule:withStartTime:endTime:scheduleByWeekdayIndex:context:;
+ (id)_buildPredicateForDisablingBlueprint:;
+ (void)_addExpirationPredicateForBlueprint:toAllPredicates:usingDateFormatter:;
+ (id)serializableClassName;
+ (id)_fetchRequestMatchingBlueprintsForUserWithDSID:;
+ (BOOL)_updateConfiguration:withDeclaration:context:error:;
+ (BOOL)saveDefaultAlwaysAllowListIfNecessaryForUser:error:;
+ (id)defaultStartTime;
+ (id)_predicateForManagedUserBlueprint:withDateFormatter:calendar:;
+ (id)blueprintIdentifierForUser:;
+ (id)_predicateForUsageLimitOverrideBlueprint:withDateFormatter:calendar:;
+ (id)fetchRequestMatchingBlueprintsForUserWithDSID:ofType:;
+ (id)_createDowntimeForUser:organization:context:;
+ (id)displayNameForUsageLimitWithCategoryIdentifiers:bundleIdentifiers:webDomains:;
+ (id)_declarationModeForBehaviorType:;
+ (id)applyOnDemandDowntimeStateChange:withFixedDuration:forUserID:context:error:;
@end
