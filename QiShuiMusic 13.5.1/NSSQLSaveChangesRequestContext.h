@interface NSSQLSaveChangesRequestContext : NSSQLStoreRequestContext
- (id)rowCache;
- (void)dealloc;
- (void)executePrologue;
- (void)executeEpilogue;
- (BOOL)executeRequestCore:;
- (BOOL)isWritingRequest;
- (id)initWithRequest:context:sqlCore:;
@end
