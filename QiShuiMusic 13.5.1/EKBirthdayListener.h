@interface EKBirthdayListener : NSObject
- (id)eventStoreProviderWithReset:;
- (void)addBirthdayCalendars;
- (id)eventStoreWithReset:;
- (id)birthdayCalendarsCreateIfNeeded:inStore:originalIdentifier:originalAlarms:ignoreAlarms:;
- (void)start;
- (id)eventStoreProvider;
- (id)eventStore;
- (void)_insertEventsForContact:intoCalendar:inStore:;
- (void)insertEventWithContact:forDateComponents:intoCalendar:inStore:;
- (void)contactsInserted:updated:deleted:;
- (void)stop;
- (void)resetAllBirthdaysInStore:;
- (id)birthdayCalendarsInStore:;
- (void)_localeChanged;
- (id)initSingleton;
- (id)allContactsWithBirthdays;
- (void)disableBirthdayCalendarsInStore:;
- (void)checkForFailures;
- (void)contactsReset;
- (void).cxx_destruct;
- (void)disableBirthdayCalendars;
- (void)reset;
+ (BOOL)areBirthdaysEnabled;
+ (id)sharedListener;
@end
