@interface AWEAdOpenAppStoreTask : AWEAdBasicTask
- (BOOL)shouldBeExcuted;
- (void)taskWillExcute;
- (BOOL)taskExcute;
- (void)taskDidExcutedWithResult:;
- (void)tryStartAutoOpenAfterDownloadWithContext:;
- (id)composeLogAttributesWithAdContext:;
@end
