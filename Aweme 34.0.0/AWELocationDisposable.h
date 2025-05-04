@interface AWELocationDisposable : NSObject
@property (nonatomic) @? disposeBlock;
- (id)disposeBlock;
- (void)setDisposeBlock:;
- (id)initWithDisposeBlock:;
- (void)dispose;
- (void)dealloc;
- (void).cxx_destruct;
@end
