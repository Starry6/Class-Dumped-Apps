@interface INPlayMediaPlaybackSpeedResolutionResult : INDoubleResolutionResult
- (id)_initWithIntentSlotResolutionResult:slotDescription:;
- (id)_buildIntentSlotResolutionResultWithIntentSlotDescription:;
- (id)initWithDoubleResolutionResult:;
+ (id)unsupportedForReason:;
@end
