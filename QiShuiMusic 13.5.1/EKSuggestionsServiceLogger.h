@interface EKSuggestionsServiceLogger : NSObject
+ (void)logEventShowedTimeToLeaveNotificationWithUniqueKey:;
+ (void)logEventShowedNotificationWithUniqueKey:;
+ (void)logEventEngagedNotificationWithUniqueKey:;
+ (void)logEventDismissedNotificationWithUniqueKey:;
+ (void)logEventRejectedNotificationWithUniqueKey:;
+ (void)logEventConfirmedNotificationWithUniqueKey:;
+ (void)logEventConfirmedInboxWithUniqueKey:;
+ (void)logEventRejectedInboxWithUniqueKey:;
+ (void)logEventShowedDetailsWithUniqueKey:;
+ (void)logEventConfirmedDetailsWithUniqueKey:;
+ (void)logEventRejectedDetailsWithUniqueKey:;
+ (Class)_SGSuggestionsServiceClass;
@end
