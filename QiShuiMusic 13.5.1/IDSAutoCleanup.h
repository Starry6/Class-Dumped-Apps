@interface IDSAutoCleanup : NSObject
- (void)dealloc;
- (id)initWithBlock:;
- (void).cxx_destruct;
- (void)incrementAccessCount;
@end
