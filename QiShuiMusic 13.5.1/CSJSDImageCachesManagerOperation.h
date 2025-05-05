@interface CSJSDImageCachesManagerOperation : NSOperation
@property (nonatomic) Q pendingCount;
- (void)beginWithTotalCount:;
- (void)completeOne;
- (void)setFinished:;
- (void)setCancelled:;
- (id)init;
- (void)cancel;
- (BOOL)isCancelled;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)reset;
- (void)setExecuting:;
- (void)done;
- (unsigned long long)pendingCount;
@end
