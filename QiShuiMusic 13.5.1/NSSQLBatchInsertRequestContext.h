@interface NSSQLBatchInsertRequestContext : NSSQLBatchOperationRequestContext
- (BOOL)executeRequestCore:;
- (BOOL)isWritingRequest;
- (id)initWithRequest:context:sqlCore:;
@end
