@interface CalDAVGetOfficeHoursTaskGroup : CoreDAVTaskGroup
@property (nonatomic) NSURL inboxURL;
@property (nonatomic) CoreDAVPropFindTask fetchTask;
@property (nonatomic) ICSDocument calendarAvailability;
@property (nonatomic) <CoreDAVTaskGroupDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)propFindTask:parsedResponses:error:;
- (void)startTaskGroup;
- (id)inboxURL;
- (void)_finishWithError:;
- (void).cxx_destruct;
- (id)fetchTask;
- (void)setFetchTask:;
- (void)setInboxURL:;
- (id)initWithAccountInfoProvider:inboxURL:taskManager:;
- (id)calendarAvailability;
- (void)setCalendarAvailability:;
@end
