@interface GoogleCalDAVServerVersion : CalDAVConcreteServerVersion
- (id)init;
- (id)supportedCalendarComponentSets;
- (BOOL)shouldUseDeleteAndAddInsteadOfMoveBetweenCalendars;
- (id)type;
- (BOOL)requiresOpeningAttachmentAsLink;
@end
