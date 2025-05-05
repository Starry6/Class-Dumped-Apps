@interface CalDAVPutCalendarItemTask : CoreDAVPutTask
@property (nonatomic) <CalDAVPutCalendarItemTaskDelegate> delegate;
@property (nonatomic) NSString previousScheduleTag;
- (void)setPreviousScheduleTag:;
- (id)additionalHeaderValues;
- (void).cxx_destruct;
- (id)description;
- (id)previousScheduleTag;
@end
