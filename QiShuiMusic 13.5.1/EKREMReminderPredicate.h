@interface EKREMReminderPredicate : NSPredicate
- (BOOL)evaluateWithObject:;
- (id)predicateFormat;
- (void).cxx_destruct;
- (id)initWithCalendars:;
- (id)fetchMatchingRemindersInStore:allLists:error:;
- (id)initForCalendarStoreWithCalendars:;
- (id)remListIDsWithAllLists:;
@end
