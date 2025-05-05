@interface CalDAVRecurrenceSplitTaskGroup : CoreDAVTaskGroup
@property (nonatomic) <CalDAVRecurrenceSplitTaskGroupDelegate> delegate;
- (void)startTaskGroup;
- (void).cxx_destruct;
- (id)initWithCalendar:accountInfoProvider:taskManager:;
@end
