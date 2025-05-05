@interface LSPlugInQueryAll : LSPlugInQuery
- (BOOL)_remoteResolutionIsExpensive;
- (id)resolveExpensiveQueryRemotelyUsingResolver:error:;
@end
