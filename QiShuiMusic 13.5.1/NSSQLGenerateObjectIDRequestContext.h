@interface NSSQLGenerateObjectIDRequestContext : NSSQLStoreRequestContext
- (void)dealloc;
- (BOOL)executeRequestCore:;
- (id)initForEntitiesAndCounts:context:sqlCore:;
- (BOOL)isWritingRequest;
@end
