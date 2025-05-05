@interface BFTaskCompletionSource : NSObject
@property (nonatomic) BFTask task;
- (BOOL)trySetCancelled;
- (BOOL)trySetError:;
- (BOOL)trySetResult:;
- (id)init;
- (void)cancel;
- (void)setError:;
- (id)task;
- (void).cxx_destruct;
- (void)setResult:;
+ (id)taskCompletionSource;
@end
