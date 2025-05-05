@interface DASharedCalendarContext : NSObject
@property (nonatomic) NSString calendarID;
@property (nonatomic) NSString accountID;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) @? completionBlock;
@property (nonatomic) BOOL shouldSyncCalendar;
- (id)accountID;
- (void).cxx_destruct;
- (id)completionBlock;
- (id)queue;
- (id)calendarID;
- (void)finishedWithError:;
- (id)initWithCalendarID:accountID:queue:completionBlock:;
- (BOOL)shouldSyncCalendar;
- (void)setShouldSyncCalendar:;
@end
