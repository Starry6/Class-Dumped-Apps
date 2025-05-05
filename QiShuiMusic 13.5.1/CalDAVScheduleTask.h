@interface CalDAVScheduleTask : CoreDAVPostTask
@property (nonatomic) CalDAVScheduleResponseItem scheduleResponse;
@property (nonatomic) NSString originator;
@property (nonatomic) NSArray attendees;
- (id)originator;
- (void)setOriginator:;
- (id)attendees;
- (void)finishCoreDAVTaskWithError:;
- (id)copyDefaultParserForContentType:;
- (void).cxx_destruct;
- (void)setAttendees:;
- (id)initWithOriginator:attendees:outboxURL:payload:;
- (id)scheduleResponse;
- (void)setScheduleResponse:;
@end
