@interface NSSQLObjectFaultRequestContext : NSSQLStoreRequestContext
- (id)initWithObjectID:context:sqlCore:;
- (void)dealloc;
- (BOOL)executeRequestCore:;
@end
