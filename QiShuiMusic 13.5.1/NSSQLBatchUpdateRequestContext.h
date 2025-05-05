@interface NSSQLBatchUpdateRequestContext : NSSQLBatchOperationRequestContext
@property (nonatomic) NSBatchUpdateRequest request;
- (void)dealloc;
- (void)executePrologue;
- (id)createFetchRequestContextForObjectsToUpdate;
- (id)request;
- (BOOL)executeRequestCore:;
- (BOOL)isWritingRequest;
- (id)initWithRequest:context:sqlCore:;
@end
