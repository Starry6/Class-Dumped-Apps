@interface CADNotificationMonitorOperationGroup : CADOperationGroup
- (void)CADDatabaseGetResourceChanges:;
- (void)CADResourceChange:setAlertedWithError:;
- (void)CADCalendarSetClearedFromNotificationCenter:error:;
- (void)CADDatabaseGetInviteReplyNotifications:;
- (void)CADDatabaseGetSharedCalendarInvitationsWithReply:;
- (void)CADDatabaseGetNotificationCountForSourceWithExternalIdentifier:excludingDelegateSources:filteredByShowsNotificationsFlag:expanded:reply:;
- (void)CADDatabaseGetEventNotificationItemsAfterDate:excludingUncheckedCalendars:filteredByShowsNotificationsFlag:reply:;
- (void)CADEventSetInvitationStatus:forEvents:error:;
- (void)CADDatabaseGetInboxRepliedSectionItems:;
+ (id)whitelistedBundles;
+ (BOOL)requiresEventAccess;
@end
