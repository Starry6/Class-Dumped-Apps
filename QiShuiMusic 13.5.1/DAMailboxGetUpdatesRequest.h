@interface DAMailboxGetUpdatesRequest : DAMailboxRequest
@property (nonatomic) NSInteger maxSize;
- (int)maxSize;
- (void)setMaxSize:;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:;
- (id)initRequestForBodyFormat:withBodySizeLimit:;
@end
