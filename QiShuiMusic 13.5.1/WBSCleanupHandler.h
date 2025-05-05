@interface WBSCleanupHandler : NSObject
- (void)dealloc;
- (id)initWithBlock:;
- (void).cxx_destruct;
- (void)invalidate;
@end
