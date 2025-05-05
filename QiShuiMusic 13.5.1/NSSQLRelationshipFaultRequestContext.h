@interface NSSQLRelationshipFaultRequestContext : NSSQLStoreRequestContext
- (void)dealloc;
- (BOOL)executeRequestCore:;
- (id)initWithObjectID:relationship:context:sqlCore:;
@end
