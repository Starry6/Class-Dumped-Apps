@interface SFAutomaticTabClosingUtilities : NSObject
+ (void)resetAutomaticTabClosingIntervalPreference;
+ (void)clearMostDistantLastViewedTime;
+ (BOOL)shouldCloseTabsAutomaticallyWhenEnteringForeground;
+ (unsigned long long)automaticTabClosingInterval;
+ (void)setAutomaticTabClosingInterval:;
+ (void)setMostDistantLastViewedTime:;
+ (BOOL)userHasPreferenceForAutomaticTabClosingInterval;
@end
