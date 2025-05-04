@interface AWEAdOpenLiveRoomTask : AWEAdBasicTask
- (BOOL)shouldBeExcuted;
- (void)taskWillExcute;
- (BOOL)taskExcute;
- (void)taskDidExcutedWithResult:;
- (id)liveExtraInfo:reason:;
@end
