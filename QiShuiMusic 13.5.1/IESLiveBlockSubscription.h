@interface IESLiveBlockSubscription : NSObject
@property (nonatomic) @? disposeCallback;
@property (nonatomic) BOOL disposed;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)disposeCallback;
- (id)initWithDisposeCallback:;
- (BOOL)isDisposed;
- (void)setDisposeCallback:;
- (void)setDisposed:;
- (void)dispose;
- (void).cxx_destruct;
@end
