@interface CalDAVSetOfficeHoursTaskGroup : CoreDAVTaskGroup
@property (nonatomic) NSURL inboxURL;
@property (nonatomic) ICSDocument calendarAvailability;
@property (nonatomic) <CoreDAVTaskGroupDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)startTaskGroup;
- (id)inboxURL;
- (void).cxx_destruct;
- (void)propPatchTask:parsedResponses:error:;
- (void)setInboxURL:;
- (id)calendarAvailability;
- (void)setCalendarAvailability:;
- (id)initWithAccountInfoProvider:inboxURL:calendarAvailability:taskManager:;
@end
