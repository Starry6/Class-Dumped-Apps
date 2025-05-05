@interface RACSerialDisposable : RACDisposable
@property (nonatomic) RACDisposable disposable;
- (id)disposable;
- (BOOL)isDisposed;
- (void)setDisposable:;
- (id)swapInDisposable:;
- (id)init;
- (void)dealloc;
- (void)dispose;
- (id)initWithBlock:;
- (void).cxx_destruct;
+ (id)serialDisposableWithDisposable:;
@end
