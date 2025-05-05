@interface INFindDeviceAndPlaySoundDeviceResolutionResult : INDeviceDetailResolutionResult
- (id)_initWithIntentSlotResolutionResult:slotDescription:;
- (id)_buildIntentSlotResolutionResultWithIntentSlotDescription:;
- (id)initWithDeviceDetailResolutionResult:;
+ (id)unsupportedForReason:;
@end
