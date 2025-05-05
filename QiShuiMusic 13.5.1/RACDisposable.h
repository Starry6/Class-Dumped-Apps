@interface RACDisposable : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL disposed;
- (id)asScopedDisposable;
- (BOOL)isDisposed;
- (id)init;
- (void)dealloc;
- (void)dispose;
- (id)initWithBlock:;
+ (id)disposableWithBlock:;
@end
