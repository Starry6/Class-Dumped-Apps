@interface BFCancellationToken : NSObject
@property (nonatomic) NSMutableArray registrations;
@property (nonatomic) NSObject lock;
@property (nonatomic) BOOL disposed;
@property (nonatomic) BOOL cancellationRequested;
- (void)throwIfDisposed;
- (void)cancelPrivate;
- (BOOL)isCancellationRequested;
- (void)notifyCancellation:;
- (id)registerCancellationObserverWithBlock:;
- (void)setDisposed:;
- (void)unregisterRegistration:;
- (id)init;
- (void)cancel;
- (void)setRegistrations:;
- (void)dispose;
- (id)lock;
- (void).cxx_destruct;
- (id)registrations;
- (void)setLock:;
- (void)cancelAfterDelay:;
- (BOOL)disposed;
@end
