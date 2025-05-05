@interface CADNotificationUtilities : NSObject
+ (int)_gatherEventInvitationsAndRepliesWithContext:;
+ (int)_gatherSuggestionResourceChangeNotification:withContext:database:databaseID:;
+ (void)_logNotificationCountsForNotifications:;
+ (id)_attendeeObjectIDsFromNotifications:;
+ (id)_notificationTypesFromNotifications:;
+ (int)_gatherSharedCalendarInvitationsWithContext:;
+ (int)_gatherSharedCalendarResourceChangeNotification:withContext:database:databaseID:;
+ (int)_gatherSharedCalendarResponsesAndResourceChangesWithContext:;
+ (id)flattenedNotificationsFromNotifications:expanded:;
+ (BOOL)_storeIsDelegate:;
+ (BOOL)storeIsReadOnlyDelegate:;
+ (int)CADDatabaseGetEventNotificationItemsWithConnection:afterDate:forSourceWithExternalIdentifier:excludingDelegateSources:excludingUncheckedCalendars:filteredByShowsNotificationsFlag:expanded:earliestExpirationDate:notificationTypes:objectIDs:occurrenceDates:attendeeObjectIDs:;
+ (id)_occurrenceDatesFromNotifications:;
+ (int)_gatherSharedCalendarInviteReplyNotification:withContext:database:databaseID:;
+ (id)_objectIDsFromNotifications:;
+ (id)_stringForNotificationType:;
@end
