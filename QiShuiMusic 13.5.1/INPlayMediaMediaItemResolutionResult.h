@interface INPlayMediaMediaItemResolutionResult : INMediaItemResolutionResult
- (id)_initWithIntentSlotResolutionResult:slotDescription:;
- (id)_buildIntentSlotResolutionResultWithIntentSlotDescription:;
- (id)initWithMediaItemResolutionResult:;
+ (id)unsupportedForReason:;
+ (id)successesWithResolvedMediaItems:;
@end
