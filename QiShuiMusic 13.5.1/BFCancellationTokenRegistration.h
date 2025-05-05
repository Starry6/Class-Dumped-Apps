@interface BFCancellationTokenRegistration : NSObject
@property (nonatomic) BFCancellationToken token;
@property (nonatomic) @? cancellationObserverBlock;
@property (nonatomic) NSObject lock;
@property (nonatomic) BOOL disposed;
- (void)throwIfDisposed;
- (id)cancellationObserverBlock;
- (void)setCancellationObserverBlock:;
- (void)setDisposed:;
- (id)init;
- (id)token;
- (void)dispose;
- (id)lock;
- (void)setToken:;
- (void).cxx_destruct;
- (void)setLock:;
- (void)notifyDelegate;
- (BOOL)disposed;
+ (id)registrationWithToken:delegate:;
@end
