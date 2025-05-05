@interface NSSQLCountRequestContext : NSSQLFetchRequestContext
- (id)_createStatement;
- (BOOL)executeRequestCore:;
@end
