@interface NSSQLBatchDeleteRequestContext : NSSQLBatchOperationRequestContext
@property (nonatomic) NSBatchDeleteRequest request;
- (void)dealloc;
- (void)executePrologue;
- (id)request;
- (BOOL)executeRequestCore:;
- (BOOL)isWritingRequest;
@end
