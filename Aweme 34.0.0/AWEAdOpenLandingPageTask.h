@interface AWEAdOpenLandingPageTask : AWEAdBasicTask
- (id)aAWEPadModuleAdapter;
- (BOOL)shouldBeExcuted;
- (void)taskWillExcute;
- (BOOL)taskExcute;
- (void)taskDidExcutedWithResult:;
- (id)multiWindowAssociatedControllerForNow;
- (void)padMultiPush:withAssociatedController:;
- (BOOL)isConsultURL:;
+ (Class)aAWEPadModuleAdapterClass;
@end
