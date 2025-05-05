@interface RACCompoundDisposable : RACDisposable
- (void)addDisposable:;
- (id)initWithDisposables:;
- (BOOL)isDisposed;
- (void)removeDisposable:;
- (id)init;
- (void)dealloc;
- (void)dispose;
- (id)initWithBlock:;
- (void).cxx_destruct;
+ (id)compoundDisposable;
+ (id)compoundDisposableWithDisposables:;
@end
