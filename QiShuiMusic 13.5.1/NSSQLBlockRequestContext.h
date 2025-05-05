@interface NSSQLBlockRequestContext : NSSQLStoreRequestContext
- (void)dealloc;
- (BOOL)executeRequestCore:;
- (id)initWithBlock:context:sqlCore:;
- (BOOL)isWritingRequest;
@end
