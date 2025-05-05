@interface NSSQLObjectIDSetFetchRequestContext : NSSQLFetchRequestContext
- (void)dealloc;
- (void)executeEpilogue;
- (BOOL)executeRequestCore:;
- (id)initWithRequest:context:sqlCore:idSets:columnName:;
@end
