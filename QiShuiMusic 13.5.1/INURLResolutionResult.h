@interface INURLResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
+ (id)successWithResolvedURL:;
+ (id)disambiguationWithURLsToDisambiguate:;
+ (id)confirmationRequiredWithURLToConfirm:;
@end
