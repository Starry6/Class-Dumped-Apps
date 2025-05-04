@interface AWEAdOpenOtherAppTask : AWEAdBasicTask
- (BOOL)shouldBeExcuted;
- (void)taskWillExcute;
- (BOOL)taskExcute;
- (void)taskDidExcutedWithResult:;
- (void)asyncTaskExcute;
- (BOOL)isAsyncTask;
- (id)replaceBackURLWithCreativeID:groupID:logExtra:eventName:label:extra:disableTrack:extraRefer:;
- (void)recordBackFlowADTrackData:;
@end
