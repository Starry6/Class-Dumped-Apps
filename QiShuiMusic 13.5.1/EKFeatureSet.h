@interface EKFeatureSet : NSObject
+ (BOOL)areApplicationBadgesSupported;
+ (BOOL)mustDisplaySplashScreenToUser;
+ (BOOL)isConservativeEntryEnabled;
+ (BOOL)areQuickActionsSupported;
+ (BOOL)eventDetailsDayPreviewEnabled;
+ (BOOL)eventsFoundInAppsEnabled;
+ (BOOL)areContextualRemindersSupported;
+ (BOOL)isSuggestionsEnabled;
+ (void)userAcknowledgedSplashScreen;
+ (BOOL)calendarListViewCellsFeaturesAttendeeInformation;
+ (BOOL)calendarListViewCellsFeaturesExtraContent;
+ (unsigned long long)_currentSplashScreenVersion;
+ (BOOL)automaticGeocodingEnabled;
+ (BOOL)areVehicleTriggersEnabled;
+ (BOOL)isTravelAdvisorySupported;
+ (BOOL)isContinuitySupported;
@end
