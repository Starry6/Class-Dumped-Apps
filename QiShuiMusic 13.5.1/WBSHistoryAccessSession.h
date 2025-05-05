@interface WBSHistoryAccessSession : NSObject
- (id)initWithHistoryService:;
- (void).cxx_destruct;
- (void)getHistoryItemsVisitedAfterDate:beforeDate:completionHandler:;
- (void)getHistoryVisitsAfterDate:beforeDate:completionHandler:;
@end
