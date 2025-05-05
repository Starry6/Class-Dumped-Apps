@interface WBSHistoryAccessSessionProxy : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)getHistoryItemsVisitedAfterDate:beforeDate:completionHandler:;
- (void)getHistoryVisitsAfterDate:beforeDate:completionHandler:;
- (void)_getHistoryAccessSessionWithCompletionHandler:;
@end
