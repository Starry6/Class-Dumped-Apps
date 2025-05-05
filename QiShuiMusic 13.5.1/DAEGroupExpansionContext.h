@interface DAEGroupExpansionContext : NSObject
@property (nonatomic) NSString principalPath;
@property (nonatomic) NSString accountID;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) @? completionBlock;
@property (nonatomic) NSDictionary results;
@property (nonatomic) BOOL shouldSyncCalendar;
- (id)accountID;
- (id)results;
- (id)initWithCompletionBlock:;
- (void).cxx_destruct;
- (id)completionBlock;
- (id)queue;
- (void)setResults:;
- (id)principalPath;
- (void)finishedWithError:;
- (BOOL)shouldSyncCalendar;
- (void)setShouldSyncCalendar:;
@end
