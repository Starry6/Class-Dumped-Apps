@interface CADEventOperationGroup : CADOperationGroup
- (void)CADDatabaseGetDefaultLocalCalendarWithReply:;
- (void)CADDatabaseGetNaturalLanguageSuggestedEventCalendarWithReply:;
- (void)CADOccurrenceCacheGetOccurrenceDateOfEventWithObjectID:nearestDate:prefersForwardSearch:reply:;
- (void)CADOccurrenceCacheGetOccurrenceCountsForCalendars:reply:;
- (void)CADDatabaseGetDefaultCalendarForNewEventsInDelegateSource:withReply:;
- (void)CADOccurrenceCacheDoEvents:haveOccurrencesAfterDate:reply:;
- (void)CADOccurrencesExistInRangeForEvent:startDate:endDate:mustStartInInterval:timezone:reply:;
- (void)CADDatabaseShouldPermitOrganizerPhoneNumberFromJunkChecks:reply:;
- (void)CADDatabaseGetAllEventsWithUniqueID:reply:;
- (id)_getDefaultCalendarIDForNewEventsInStoreWithID:inDatabase:defaultExists:;
- (void)CADDatabaseGetOrCreateBirthdayCalendar:;
- (void)CADOccurrenceCacheSearchWithTerm:inCalendars:responseToken:reply:;
- (void)CADOccurrenceCacheCancelSearchWithReplyID:;
- (void)CADDatabaseGetOrCreateSubscribedCalendarsSource:;
- (void)CADDatabaseInsertSuggestedEventCalendarWithReply:;
- (id)_mergeDaysAndOccurrenceCounts:withCounts:;
- (void)CADDatabaseSetDefaultCalendarForNewEvents:delegateSource:reply:;
- (BOOL)_CADDatabaseCanModifySuggestedEventCalendar;
- (void)CADDatabaseRemoveSuggestedEventCalendarWithReply:;
- (void)CADDatabaseGetAttachmentWithUUID:reply:;
- (void)CADDatabaseSetBirthdayCalendarEnabled:withReply:;
- (void)CADOccurrenceCacheGetOccurrencesForCalendars:onDay:reply:;
- (void)CADDatabaseGetEventWithUniqueID:reply:;
- (void)CADDatabaseGetAttachmentUUIDWithExternalID:store:reply:;
- (void)CADDatabaseGetBirthdayCalendarEnabledWithReply:;
- (void)CADDatabaseGetEventWithEventIdentifier:reply:;
- (void)CADDatabaseGetSuggestedEventCalendarWithReply:;
- (void)CADDatabaseCanModifySuggestedEventCalendar:;
- (void)CADDatabaseGetTTLLocationAuthorizationStatus:;
- (void)CADOccurrenceCacheSearchLocationsWithTerm:inCalendars:responseToken:reply:;
- (void)CADDatabaseShouldPermitOrganizerEmailFromJunkChecks:reply:;
+ (void)monitorLocationAuthorizationStatusChanges:;
+ (BOOL)requiresEventAccess;
@end
