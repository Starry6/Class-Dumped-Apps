@interface DAECalendarAvailabilityContext : NSObject
- (void).cxx_destruct;
- (void)finishedWithError:;
- (id)initWithResultsBlock:completionBlock:;
- (void)resultsReturned:;
@end
