@interface BFCancellationTokenSource : NSObject
@property (nonatomic) BFCancellationToken token;
@property (nonatomic) BOOL cancellationRequested;
- (BOOL)isCancellationRequested;
- (id)init;
- (void)cancel;
- (id)token;
- (void)dispose;
- (void).cxx_destruct;
- (void)cancelAfterDelay:;
+ (id)cancellationTokenSource;
@end
