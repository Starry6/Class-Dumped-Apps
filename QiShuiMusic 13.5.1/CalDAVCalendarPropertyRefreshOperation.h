@interface CalDAVCalendarPropertyRefreshOperation : CalDAVOperation
@property (nonatomic) NSString calendarHomeSyncToken;
@property (nonatomic) NSObject<OS_dispatch_group> outstandingTasksGroup;
@property (nonatomic) BOOL forceClearCalendarHomeSyncToken;
@property (nonatomic) <CalDAVCalendarPropertyRefreshDelegate> delegate;
@property (nonatomic) BOOL useCalendarHomeSyncReport;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (int)_sharingStatusForContainer:;
- (void)containerInfoTask:completedWithContainers:error:;
- (void)_getDefaultCalendarsTasksIfNeededForPrincipal:;
- (void)setCalendarHomeSyncToken:;
- (void)_sendAddsForCalendars;
- (id)_getSetIsAffectingAvailabilityTask:forCalendar:atURL:;
- (id)outstandingTasksGroup;
- (void)setForceClearCalendarHomeSyncToken:;
- (id)_getSetPropertiesTaskWithItemsToSet:itemsToRemove:atURL:;
- (void)_retryMkCalForCalendar:;
- (id)_generateTimeZoneString:;
- (id)_getSetPropertyStringTask:forName:andNamespace:forCalendar:atURL:;
- (void)_initializePrincipalCalendarCache;
- (id)_getDefaultMkCalendarForPrincipalTaskGroup:isEventCalendar:;
- (void)containerInfoSyncTask:completedWithNewSyncToken:error:;
- (id)_getSetPropertyTaskWithCoreDAVItem:forCalendar:atURL:;
- (id)calendarHomeSyncToken;
- (BOOL)forceClearCalendarHomeSyncToken;
- (void)_sendDeletesForCalendars;
- (void)containerInfoSyncTask:retrievedAddedOrModifiedContainers:removedContainerURLs:;
- (BOOL)_handleUpdateForCalendar:;
- (void).cxx_destruct;
- (id)initWithPrincipal:;
- (void)_handleCalendarPublish;
- (void)setOutstandingTasksGroup:;
- (BOOL)_handleMkCalTaskGroupError:forCalendar:;
- (id)_getSetPropertyTaskWithCoreDAVItem:forCalendar:atURL:ignoreErrors:;
- (id)_getSetPropertyStringTask:forName:andNamespace:forCalendar:atURL:ignoreErrors:;
- (void)_sendShareActionTasks;
- (void)_reallyRefreshCalendarProperties;
- (void)_prepareCalendarsBeforeRefresh;
- (void)refreshCalendarProperties;
- (void)setUseCalendarHomeSyncReport:;
- (id)_getIsAffectingAvailabilityCoreDAVItem:;
- (id)_getMkcalendarTaskGroupForCalendar:;
- (void)_continueHandleContainerInfoTask:completedWithContainers:error:;
- (void)_finishRefresh;
- (BOOL)useCalendarHomeSyncReport;
- (void)continueRefreshFromSendingDeletes;
@end
