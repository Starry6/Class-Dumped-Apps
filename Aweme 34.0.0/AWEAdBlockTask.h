@interface AWEAdBlockTask : AWEAdBasicTask
- (BOOL)shouldBeExcuted;
- (void)taskWillExcute;
- (BOOL)isAsyncTask;
- (id)init;
+ (id)blockOperationWithBlock:;
@end
