@interface AWERxDisposable : NSObject
@property (nonatomic) @? disposeBlock;
- (id)disposeBlock;
- (void)setDisposeBlock:;
- (id)initWithDisposeBlock:;
- (void)ownedBy:;
- (void)ownedBy:forKey:;
- (void)dispose;
- (void)dealloc;
- (void).cxx_destruct;
@end
