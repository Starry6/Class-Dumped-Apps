@interface AWEAdInAppOpenURLTask : AWEAdBasicTask
- (BOOL)shouldBeExcuted;
- (void)taskWillExcute;
- (BOOL)taskExcute;
- (void)taskDidExcutedWithResult:;
- (void)asyncTaskExcute;
- (BOOL)isAsyncTask;
- (id)extraInfo:;
- (id)urlAppendDislikeParams:withModel:;
- (void)trackHandleURL:result:;
- (void)openURL:initialData:globalProps:;
@end
