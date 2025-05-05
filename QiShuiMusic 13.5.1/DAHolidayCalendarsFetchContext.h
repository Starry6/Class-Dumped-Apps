@interface DAHolidayCalendarsFetchContext : NSObject
@property (nonatomic) @? resultsBlock;
@property (nonatomic) @? completionBlock;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
- (void).cxx_destruct;
- (void)setQueue:;
- (id)resultsBlock;
- (id)completionBlock;
- (id)queue;
- (void)finishedWithError:;
- (id)initWithResultsBlock:completionBlock:;
- (void)resultsReturned:;
@end
