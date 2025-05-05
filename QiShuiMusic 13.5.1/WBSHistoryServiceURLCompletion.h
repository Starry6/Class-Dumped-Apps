@interface WBSHistoryServiceURLCompletion : NSObject
- (void)computeFrequentlyVisitedSites:minimalVisitCountScore:disallowList:allowList:options:currentTime:completionHandler:;
- (id)_endOfRedirectChain:;
- (void)updateItemWithLatestVisit:database:;
- (id)init;
- (double)lastVisitTimeForURLString:;
- (id)_warmUpWithDatabase:;
- (void)updateVisit:oldScore:newScore:completionHandler:;
- (BOOL)queryVisitCounts:outVisitCountScore:outDailyVisitCounts:outWeeklyVisitCounts:;
- (void)updateVisit:title:;
- (void)updateURLString:autocompleteTriggerData:;
- (void).cxx_destruct;
- (void)noteRedirectFromURLString:toURLString:;
- (id)warmUpWithDatabase:;
- (void)recordVisit:sourceVisit:title:loadSuccessful:visitWasFromThisDevice:increaseVisitCount:score:;
- (void)searchForUserTypedString:options:currentTime:enumerationGroup:enumerationBlock:;
- (void)removeURLStrings:;
- (id).cxx_construct;
@end
