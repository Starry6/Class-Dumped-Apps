@interface EKREMCompletionStateReminderPredicate : EKREMReminderPredicate
- (BOOL)evaluateWithObject:;
- (void).cxx_destruct;
- (id)initForIncompleteRemindersWithDueDateStarting:ending:calendars:;
- (id)initForCompletedRemindersWithCompletionDateStarting:ending:calendars:;
- (id)fetchMatchingRemindersInStore:allLists:error:;
@end
