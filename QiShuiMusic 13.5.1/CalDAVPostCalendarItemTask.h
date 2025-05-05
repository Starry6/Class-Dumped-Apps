@interface CalDAVPostCalendarItemTask : CoreDAVPostTask
@property (nonatomic) <CalDAVPostCalendarItemTaskDelegate> delegate;
@property (nonatomic) NSString previousScheduleTag;
- (void)finishCoreDAVTaskWithError:;
- (void)setPreviousScheduleTag:;
- (id)additionalHeaderValues;
- (void).cxx_destruct;
- (id)description;
- (id)previousScheduleTag;
@end
