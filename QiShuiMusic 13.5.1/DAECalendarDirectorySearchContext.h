@interface DAECalendarDirectorySearchContext : NSObject
- (void).cxx_destruct;
- (id)initWithResultsBlock:completionBlock:;
- (void)resultsReturned:;
- (void)finishedWithError:exceededResultLimit:;
@end
