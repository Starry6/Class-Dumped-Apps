@interface RACScopedDisposable : RACDisposable
- (id)asScopedDisposable;
- (void)dealloc;
+ (id)scopedDisposableWithDisposable:;
@end
