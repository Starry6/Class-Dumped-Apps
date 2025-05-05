@interface CalDAVNotificationHandler : NSObject
+ (void)processNotificationWithData:serverURL:syncKey:database:notificationCalendar:store:calendarHomeURL:notificationCalendarURL:contactsProvider:recordIDMap:;
+ (int)_inviteStatusFromString:;
+ (id)_createNotificationWithInviteStatus:inDatabase:;
+ (void)_handleInviteNotification:withUid:serverURL:syncKey:database:store:calendarHomeURL:notificationCalendar:notificationCalendarURL:recordIDMap:;
+ (void)_handleInviteReply:withUid:serverURL:syncKey:owningNotification:database:store:calendarHomeURL:notificationCalendar:notificationCalendarURL:contactsProvider:recordIDMap:;
+ (id)_copyCalendarForReplyItem:inDatabase:store:calendarHomeURL:;
+ (void)_handleResourceChanged:withUid:serverURL:syncKey:database:store:calendarHomeURL:notificationCalendar:notificationCalendarURL:recordIDMap:;
+ (id)_createResourceChange:withType:forNotification:withRecurrenceID:database:store:calendarHomeURL:;
+ (id)_changedAttributesFromCalendarChanges:;
+ (id)_copyNotificationWithUniqueIdentifier:inCalendar:orStore:withDatabase:recordIDMap:;
+ (id)_copyNotificationWithExternalID:inCalendar:withDatabase:recordIDMap:;
+ (void)setURL:forResourceWithUUID:withDatabase:notificationCalendar:notificationCalendarURL:recordIDMap:;
@end
