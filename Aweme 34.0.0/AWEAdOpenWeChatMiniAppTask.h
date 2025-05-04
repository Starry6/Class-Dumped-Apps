@interface AWEAdOpenWeChatMiniAppTask : AWEAdBasicTask
- (BOOL)shouldBeExcuted;
- (BOOL)taskExcute;
- (void)taskDidExcutedWithResult:;
- (void)asyncTaskExcute;
- (BOOL)isAsyncTask;
@end
