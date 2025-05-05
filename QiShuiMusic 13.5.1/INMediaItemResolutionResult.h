@interface INMediaItemResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
+ (id)successWithResolvedMediaItem:;
+ (id)successesWithResolvedMediaItems:;
+ (id)disambiguationWithMediaItemsToDisambiguate:;
+ (id)confirmationRequiredWithMediaItemToConfirm:;
@end
