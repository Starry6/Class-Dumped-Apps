@interface DTRpcAsyncCallerMXXT : NSObject
@property (nonatomic) BOOL cancelled;
@property (nonatomic) BOOL finished;
@property (nonatomic) NSThread asyncThread;
- (void)setAsyncThread:;
- (void)afterCompleteAction;
- (id)asyncThread;
- (void)beforeCompleteAction;
- (void)startAsyncBlock:completion:;
- (void)setFinished:;
- (void)setCancelled:;
- (id)init;
- (void)cancel;
- (BOOL)isCancelled;
- (BOOL)isFinished;
- (void).cxx_destruct;
- (void)handleException:;
+ (id)callAsyncBlock:completion:;
@end
